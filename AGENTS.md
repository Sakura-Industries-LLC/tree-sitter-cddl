# AGENTS.md

## Project Overview

Tree-sitter grammar for **CDDL** (Concise Data Definition Language, [RFC 8610](https://datatracker.ietf.org/doc/html/rfc8610)),
used to describe CBOR and JSON data structures.
The grammar is defined in `grammar.js`; everything in `src/` is generated.

## Mandatory Execution Model

**Agents never run tools directly on the host.**
All work must go through the Docker container, invoked via the Justfile:

```bash
# Run CI pipeline (markdown check, spell check, generate, build, test)
just ci

# Auto-fix markdown lint issues
just fix

# Fix then CI
just fix-ci

# Interactive shell inside the container (for ad-hoc commands)
just container-shell
```

Inside `container-shell`:

```bash
tree-sitter generate       # Generate parser from grammar.js
tree-sitter build --wasm   # Build WASM
tree-sitter build          # Build native shared lib
tree-sitter test           # Run corpus tests
npm test                   # Node binding test
```

The container mounts the repo at `/repo` (read-write) and pre-installs all tools managed by proto
(node, npm, rust, moon, rumdl, cspell, tree-sitter-cli).

## Architecture

### Source of Truth

* **`grammar.js`** — Grammar rules, tokens, precedences, conflicts.
  Edit this to change parsing.
* **`tree-sitter.json`** — Metadata: scope `source.cddl`, file-types `cddl`, enabled bindings.

### Generated Artifacts (not in version control)

```text
src/
├── grammar.json          # Intermediate JSON grammar
├── node-types.json       # Static node type definitions
├── parser.c              # Generated C parser
└── tree_sitter/
    ├── parser.h, alloc.h, array.h
```

All `src/` and most binding/build files are `linguist-generated` in `.gitattributes`.

### Grammar Structure

CDDL's hierarchical type system:

* **`source_file`** — directives, doc comments, rules
* **`rule`** — `name = expression` with optional generic params `<T>`
* **`expression`** — choices (`/`), sequences (whitespace), control operators
* **`primary`** — leaf nodes: references, literals, groups, parens, tags
* **`group`** — array groups `[...]` and map groups `{...}`

Declared conflicts: `expression`/`primary` and `expression`/`sequence_expression` (inherent to CDDL recursion).

No external scanner — all lexing is in `grammar.js` tokens.
No scanner.c needed.

### Bindings

Multi-language bindings in `bindings/` (C, Rust, Node, Python, Go, Swift, Zig, Java).
All are templates keyed off `tree-sitter generate`.

## Testing

* **Corpus tests** (`test/corpus/*.txt`): primary tests using `tree-sitter test`.
  Format: `====`-separated sections with name, input, expected `(node_type)` S-expression.
* **Node binding test**: `npm test` verifies grammar loads.
  ESM (`"type": "module"` in package.json).

## Conventions

| File type | Indent |
|-----------|--------|
| JS/JSON/TOML/SCM | 2-space |
| C/Rust/Python/Swift/Java | 4-space |
| Go/Makefile | tab |
| Generated parser.c | 2-space |

## Gotchas

1. **`src/` doesn't exist after clone.**
   Run `tree-sitter generate` first (inside container).
2. **Bash process substitution `<( )` fails in Dockerfiles.**
   `RUN` uses `/bin/sh` (dash on Debian).
   Use pipes: `curl ... | bash -s --` instead of `bash <(curl ...)`.
3. **Tree-sitter version split.**
   CLI `^0.26.9` (dev), runtime `^0.25.0` (deps).
   Container pins `0.24.7`.
4. **No queries directory yet.**
   Syntax highlighting/injection queries (`queries/*.scm`) not created.
   Rust build.rs checks for them conditionally.
5. **Go binding requires `src/parser.c`.**
   Uses cgo with `#include "../../src/parser.c"`.
   Won't compile until generated.
6. **CDDL comment syntax is nuanced.**
   `;` is a comment, but `;#`, `;!`, `;@` are special directives: standard directive, doc comment,
   and custom directive respectively.
