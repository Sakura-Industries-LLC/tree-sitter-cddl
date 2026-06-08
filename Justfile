set shell := ["bash", "-cu"]

set dotenv-load

mod local 'just/local.just'

_default:
    @just --list

# Check if anything is outdated
outdated:
    proto outdated

# Update every tool to its latest version
# Only .prototools updated, not .env tracked versions.
outdated-update:
    proto outdated --update

# Build Container setup
build-setup:
    docker build -f tools/Dockerfile.00-base-os -t tree-sitter-cddl-tools:00-base-os \
        --build-arg DEBIAN_TAG .
    docker build -f tools/Dockerfile.01-proto -t tree-sitter-cddl-tools:01-proto \
        --build-arg PROTO_VERSION .
    docker build -f tools/Dockerfile.02-rust -t tree-sitter-cddl-tools:02-rust \
        --build-arg BINSTALL_VERSION \
        --build-arg NEXTEST_VERSION \
        --build-arg CARGO_DENY_VERSION .
    docker build -f tools/Dockerfile.03-cspell -t tree-sitter-cddl-tools:03-cspell \
        --build-arg CSPELL_VERSION .
    docker build -f tools/Dockerfile.04-tree-sitter -t tree-sitter-cddl-tools:04-tree-sitter \
        --build-arg TREE_SITTER_CLI_VERSION .
    docker build -f tools/Dockerfile.zz-tools -t tree-sitter-cddl-tools:latest .

# Make sure cache-dirs exist
setup-cache-dir:
    mkdir -p .moon/cache
    mkdir -p .moon/docker-cache

# Fix what can be fixed
fix: setup-cache-dir build-setup (_container-mount "moon run :fix")

# Run a CI run inside docker.
ci: setup-cache-dir build-setup (_container-mount "moon run :ci")

# Run Fix + CI run inside docker.
fix-ci: setup-cache-dir build-setup (_container-mount "moon run :fix && moon run :ci")

# Execute a shell directly inside the build container.
container-shell: build-setup (_container-mount "bash")

# Common mounted container
_container-mount *cmd:
    docker run --rm \
        -it \
        -v .:/repo:rw \
        -v .moon/docker-cache:/repo/.moon/cache:rw \
        -w /repo \
        tree-sitter-cddl-tools:latest \
        bash -c '{{ cmd }}'
