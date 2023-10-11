%{
#include <stdio.h>
#include "y.tab.h"
extern int nesting_level ;
%}

%%
"if" {
    nesting_level++;
    return IF;
}
"{" {
    return LBRACE;
}
"}" {
    return RBRACE;
}
\n {
    // Skip newlines
}
[ \t] {
    // Skip spaces and tabs
}
. {
    // Ignore all other characters
}

%%

int yywrap() {
    return 1;
}
