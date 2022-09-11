# Installation

1. You will need to build helix from source for a custom language. Git clone their repo

`git clone https://github.com/helix-editor/helix`

2. Next clone this repo

`git clone https://github.com/iFrostizz/tree-sitter-huff`

it contains the highlight query, used to create fancy colors for huff files
This `highlights.scm` will need to be referenced locally.
But first, create the `huff` directory so you can reference it just after:

`mkdir helix/runtime/queries/huff`

then copy the file into helix dir:

`cp tree-sitter-huff/queries/highlights.scm helix/runtime/queries/huff`

now you will need to put the `huff` language in the `languages.toml` file of the helix repo, to add it:

```toml
[[language]]
name = "huff"
scope = "source.huff"
roots = []
file-types = ["huff"]
indent = { tab-width = 2, unit = "  " }

[[grammar]]
name = "huff"
source = { git = "https://github.com/iFrostizz/tree-sitter-huff", rev = "74e18a98f0f606ef5800fc7a9b4bcd2f1532cfd7"}
```

and now you should be good, all you gotta do it build it !

`cargo install --path helix-term`
