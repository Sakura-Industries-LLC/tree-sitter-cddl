set shell := ["bash", "-cu"]

set dotenv-load

DEVTOOLS_IMAGE := env("DEVTOOLS_IMAGE", "sakura-dev-tools:latest")
CONTAINER_RUNTIME := env("CONTAINER_RUNTIME", "podman")
# Set to 1 inside the Sakura development container to avoid nesting Docker.
SAKURA_DEV_WORKSPACE := env("SAKURA_DEV_WORKSPACE", "0")

mod local 'just/local.just'

_default:
    @just --list

# Make sure cache-dirs exist
setup-cache-dir:
    #!/usr/bin/env sh
    if [ "{{ SAKURA_DEV_WORKSPACE }}" = "1" ]; then
        exit 0
    else
        mkdir -p .moon/cache
        mkdir -p .moon/container-cache
    fi

# Fix what can be fixed
fix: setup-cache-dir (_container-mount "moon run :fix")

# Run a CI pipeline in the development container.
ci: setup-cache-dir (_container-mount "moon run :ci")

# Run Fix + CI in the development container.
fix-ci: setup-cache-dir (_container-mount "moon run :fix && moon run :ci")

# Execute a shell directly inside the build container.
container-shell: (_container-mount "bash")

# Common mounted container
_container-mount *cmd:
    @just _container-run "" '{{ cmd }}'

# Run in the mounted development container, or directly when already inside it.
_container-run extra-flags *cmd:
    #!/usr/bin/env sh
    if [ "{{ SAKURA_DEV_WORKSPACE }}" = "1" ]; then
        bash -c '{{ cmd }}'
    else
        {{ CONTAINER_RUNTIME }} run --rm \
            -it \
            {{ extra-flags }} \
            -v .:/repo:rw \
            -v .moon/container-cache:/repo/.moon/cache:rw \
            -w /repo \
            {{ DEVTOOLS_IMAGE }} \
            bash -c '{{ cmd }}'
    fi
