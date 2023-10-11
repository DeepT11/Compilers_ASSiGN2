%option yylineno

%{
#include <stdio.h>
#include "y.tab.h"
// extern int yylval;
extern FILE* seq;
extern FILE* parsed;
int line=0;
extern int error_flag;
%}




digit [0-9]
arguments [1-9]{digit}*
integers {digit}+
id [a-zA-Z_][a-zA-Z0-9_]*

%%

{arguments} {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"constant: %s\n",yytext);
    return ARGUMENTS;
    }

{integers} {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"constant: %s\n",yytext);
    return INTEGERS;
    }
    
"in case that" {
    yylval.strval = strdup(yytext); 
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return IF;
    } 

"while" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return WHILE;
    }

"do" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return DO;
    }

"otherwise" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return ELSE;
    }
"for" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return FOR;
    }
"(" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return LP_BRACE;
    }
")" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return RP_BRACE;
    }
"{" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return LC_BRACE;
    }
"}" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return RC_BRACE;}
"call" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return CALL_STMT;
    }
"return" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return RETURN;
    }
"void" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"datatype: %s\n",yytext);
    return VOID;
    }
"int" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"datatype: %s\n",yytext);
    return RETURN_TYPE_FUNC;
    }
"string" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"datatype: %s\n",yytext);
    return RETURN_TYPE_FUNC;
    }
"bool" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"datatype: %s\n",yytext);
    return RETURN_TYPE_FUNC;
    }
"char" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"datatype: %s\n",yytext);
    return RETURN_TYPE_FUNC;
    }
"global"|"local" {
    yylval.strval = strdup(yytext);
    fprintf(seq,"function: %s\n",yytext);
    fprintf(parsed,"%s",yytext);
    return METHOD;
    }
"class" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s ",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return CLASS;
    }
"declare" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return DECLARATION;
    }
"expr" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return EXPRESSION;
    }
"gt" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }
"geq" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }
"lt" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }

"leq" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }
"ne" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }
"eq" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return PREDICATE_OP;
    }
"neg"  {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return NEG;
    }
"add" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return ADD;
    }
"sub" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return SUB;
    }
"mul" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return MUL;
    }
"div" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return DIV;
    }
"loop" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return LOOP;
    }
"postincr" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return POSTINCR;
    }
"postdecr" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return POSTDECR;
    }
";" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"punctuation: %s\n",yytext);
    return SEMICOLON;
    }
"["  {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return LSQ_BRACE;
    }
"]"  {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"special symbol: %s\n",yytext);
    return RSQ_BRACE;
    }
"=" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"operator: %s\n",yytext);
    return ASSIGN;
    }
"->"  {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return CALL_OP;}

"," {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"punctuation: %s\n",yytext);
    return COMMA;
    }
"true" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return TRUE_KEY;
    }
"false" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return FALSE_KEY;
    }
"and" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return AND;
    }
"or" {
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"reserved keyword: %s\n",yytext);
    return OR;
    }


(\")(.)*(\")  {
    char* c= yytext+1;
    c[yyleng-2]='\0';
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"punctuation: \"\n");
    fprintf(seq,"constant: %s\n", c);
    fprintf(seq,"punctuation: \"\n");
    return STRING_TOKEN;
}


(\')(.)*(\')  {
    char* c= yytext+1;
    c[yyleng-2]='\0';
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"punctuation: \"\n");
    fprintf(seq,"constant: %s\n", c);
    fprintf(seq,"punctuation: \"\n");
    return CHAR_TOKEN;
}


{id} { 
    yylval.strval = strdup(yytext);
    fprintf(parsed,"%s",yytext);
    fprintf(seq,"ID: %s\n",yytext);
    return ID;
    }



[\t ]   {fprintf(parsed,"%s",yytext); }

\n  {
    line++; 
    if(error_flag!=0) 
    {
        fprintf(parsed," : invalid statement");
        exit(1);
    }
    fprintf(parsed,"%s",yytext); 
    }

%%


int  yywrap() {
    return 1;
}
