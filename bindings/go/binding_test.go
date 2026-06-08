package tree_sitter_cddl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cddl "github.com/sakura-industries-llc/tree-sitter-cddl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cddl.Language())
	if language == nil {
		t.Errorf("Error loading CDDL grammar")
	}
}
