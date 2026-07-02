set shell := ["bash", "-cu"]

set dotenv-load

DEVTOOLS_IMAGE := env("DEVTOOLS_IMAGE", "sakura-dev-tools:latest")

mod local 'just/local.just'

_default:
    @just --list

# Make sure cache-dirs exist
setup-cache-dir:
    mkdir -p .moon/cache
    mkdir -p .moon/docker-cache

# Fix what can be fixed
fix: setup-cache-dir (_container-mount "moon run :fix")

# Run a CI run inside docker.
ci: setup-cache-dir (_container-mount "moon run :ci")

# Run Fix + CI run inside docker.
fix-ci: setup-cache-dir (_container-mount "moon run :fix && moon run :ci")

# Execute a shell directly inside the build container.
container-shell: (_container-mount "bash")

# Common mounted container
_container-mount *cmd:
    docker run --rm \
        -it \
        -v .:/repo:rw \
        -v .moon/docker-cache:/repo/.moon/cache:rw \
        -w /repo \
        {{ DEVTOOLS_IMAGE }} \
        bash -c '{{ cmd }}'
