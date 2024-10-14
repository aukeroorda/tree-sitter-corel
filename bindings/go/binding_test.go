package tree_sitter_corel_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_corel "github.com/aukeroorda/tree-sitter-corel/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_corel.Language())
	if language == nil {
		t.Errorf("Error loading Corel grammar")
	}
}
