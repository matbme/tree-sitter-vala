#include <tree_sitter/parser.h>
#include <cwctype>

namespace {

using std::iswspace;

enum TokenType {
    VERBATIM_CONTENT,
};

struct Scanner {
    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);
        }

        lexer->result_symbol = VERBATIM_CONTENT;

        if (lexer->lookahead == '"') return false;

        int quote_count = 0;
        while (lexer->lookahead) {
            if (lexer->lookahead == '"') {
                if (quote_count == 0) lexer->mark_end(lexer);
                quote_count++;
            } else { 
                quote_count = 0; 
            }

            lexer->advance(lexer, false);

            if (quote_count == 3) {
                return true;
            }
        }

        return false;
    }
};

}

extern "C" {

void * tree_sitter_vala_external_scanner_create() {
    return new Scanner();
}

void tree_sitter_vala_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
}

unsigned tree_sitter_vala_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_vala_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  // ...
}

bool tree_sitter_vala_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
}

}
