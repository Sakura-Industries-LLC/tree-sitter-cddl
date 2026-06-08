/**
 * @file Tree-sitter grammar for CDDL, the Concise Data Definition Language for CBOR and JSON data structures.
 * @author Steven Johnson <steven.johnson@sakuraindustries.net>
 * @license MIT OR Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "cddl",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
