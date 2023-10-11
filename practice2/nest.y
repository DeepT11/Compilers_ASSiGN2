%{
#include <stdio.h>
int yylex();
void yyerror(const char* s);
int nesting_level = 0;
%}

%token IF LBRACE RBRACE NEWLINE

%%
program: statements
       ;

statements: statement
          | statements statement
          ;

statement: IF LBRACE statements RBRACE {
    nesting_level--;
    if (nesting_level < 0) {
        yyerror("Unmatched closing curly brace '}'");
    }
}
         | IF LBRACE RBRACE {
    nesting_level--;
    if (nesting_level < 0) {
        yyerror("Unmatched closing curly brace '}'");
    }
}
         ;

%%

int main() {
    yyparse();
    if (nesting_level > 0) {
        printf("Error: Unmatched opening curly brace '{'\n");
    } else if (nesting_level < 0) {
        printf("Error: Unmatched closing curly brace '}'\n");
    } else {
        printf("%d\n", nesting_level);
        printf("All nested IF statements are properly matched.\n");
    }
    return 0;
}

void yyerror(const char* s) {
    fprintf(stderr, "Error: %s\n", s);
}
