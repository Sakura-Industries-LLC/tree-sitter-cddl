# tree-sitter-cddl

[![CI][ci]](https://github.com/Sakura-Industries-LLC/tree-sitter-cddl/actions)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-cddl) [![crates.io][crates]](https://crates.io/crates/tree-sitter-cddl)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-cddl/)

CDDL grammar for [tree-sitter].

CDDL (Concise Data Definition Language, [RFC 8610]) is a notation for describing CBOR and JSON data structures.
This grammar provides syntax highlighting, code folding,
and structural parsing for `.cddl` files in any editor that supports tree-sitter.

## Installation

### Neovim

```lua
-- requires nvim-treesitter
require("nvim-treesitter.parsers").get_parser_configs().cddl = {
  install_info = {
    url = "https://github.com/Sakura-Industries-LLC/tree-sitter-cddl",
    files = { "src/parser.c" },
    branch = "master",
  },
  filetype = "cddl",
}
```

### Emacs

```elisp
(add-to-list 'treesit-language-source-alist
             '(cddl "https://github.com/Sakura-Industries-LLC/tree-sitter-cddl"))
```

### Zed

Add `cddl` to the `languages` key in your Zed settings.

### Node.js

```bash
npm install tree-sitter-cddl
```

```js
import Parser from "tree-sitter";
import Cddl from "tree-sitter-cddl";

const parser = new Parser();
parser.setLanguage(Cddl);
```

### Rust

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-cddl = "0.1"
```

```rust
let mut parser = tree_sitter::Parser::new();
parser
    .set_language(&tree_sitter_cddl::LANGUAGE.into())
    .expect("Error loading CDDL parser");
```

## Development

All tooling runs inside a Docker container.
The container is built and managed through `just`:

```bash
# Interactive shell in the build container
just container-shell

# Run the full CI pipeline (generate, build, test)
just ci

# Fix markdown lint issues
just fix
```

Inside the container:

```bash
tree-sitter generate       # Regenerate parser from grammar.js
tree-sitter test           # Run corpus tests
tree-sitter build --wasm   # Build WASM binary
tree-sitter playground     # Open interactive playground in browser
```

## License

Licensed under either of Apache License 2.0 or MIT License at your option.

[tree-sitter]: https://tree-sitter.github.io/
[ci]: https://img.shields.io/github/actions/workflow/status/Sakura-Industries-LLC/tree-sitter-cddl/ci.yml?logo=github&label=CI
[npm]: https://img.shields.io/npm/v/tree-sitter-cddl?logo=npm&label=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-cddl?logo=rust&label=crates.io
[pypi]: https://img.shields.io/pypi/v/tree-sitter-cddl?logo=python&label=pypi
[RFC 8610]: https://datatracker.ietf.org/doc/html/rfc8610
