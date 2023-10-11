%{
#include <stdio.h>
int flag = 0;
%}

%token NUMBER

%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%%

ArithmeticExpression: E {printf("\nResult = %d\n", $1);return 0;};

E: E '+' E {
    $$ = $1 + $3;
}
| E '-' E {
    $$ = $1 - $3;
}
| E '*' E {
    $$ = $1 * $3;
}
| E '/' E {
    if ($3 == 0) {
        printf("\nDivision by zero is not allowed.\n");
        flag = 1;
        $$ = 0;
    } else {
        $$ = $1 / $3;
    }
}
| E '%' E {
    $$ = $1 % $3;
}
| '(' E ')' {
    $$ = $2;
}
| NUMBER {
    $$ = $1;
};
%%


int main() {
    printf("\nEnter any arithmetic expression which can have operations Addition, Subtraction, Multiplication, Division, Modulus, and Round brackets:\n");
    yyparse();
    if (flag == 0)
        printf("\nEntered arithmetic expression is Valid\n\n");
    else
        printf("\nEntered arithmetic expression is Invalid\n\n");
    return 0;
}

void yyerror(const char* s) {
    printf("\nError: %s\n", s);
    flag = 1;
}
