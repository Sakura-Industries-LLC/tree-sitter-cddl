set shell := ["bash", "-cu"]

set dotenv-load

fix:
    moon run :fix

ci:
    CI=1 moon run :ci

fix-ci:
    moon run :fix
    CI=1 moon run :ci
