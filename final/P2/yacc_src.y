%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char* s);
extern int line;
FILE* parsed;
FILE* seq;
int flag = 0 ;
int return_call = 0 ;   
int error_flag = 0 ;
extern int yylineno;

%}

%union {
    char* strval;
}

%start program

%token RC_BRACE
%token IF 
%token DO
%token ELSE 
%token WHILE
%token FOR 
%token CLASS 
%token METHOD 
%token DECLARATION
%token EXPRESSION
%token CALL_STMT
%token RETURN 
%token RETURN_TYPE_FUNC 
%token LC_BRACE
%token LP_BRACE
%token RP_BRACE
%token ASSIGN
%token NEG
%token ADD
%token SUB
%token MUL
%token DIV
%token LOOP
%token POSTINCR
%token POSTDECR
%token INTEGERS
%token ID
%token SEMICOLON
%token CALL_OP
%token PREDICATE_OP
%token LSQ_BRACE
%token RSQ_BRACE
%token COMMA
%token VOID
%token ARGUMENTS
%token AND
%token OR
%token TRUE_KEY
%token FALSE_KEY
%token STRING_TOKEN
%token CHAR_TOKEN

/* %left HIGHER_PREC */
%left RC_BRACE
%left PREDICATE_OP AND OR NEG 
%right ASSIGN 


%%
program : program func | func ; 

            
func : func_method     
     | func_class   
     | error {
        error_flag = 1;
      }   
      

func_method : METHOD VOID ID LP_BRACE RP_BRACE 
            {
                fprintf(parsed," : function definition"); 
                flag = 0;
                return_call = 0;
            }
            LC_BRACE body 
            {
                if((flag == 0) && (return_call == 0)){
                printf("Error:No return statement\n");
                exit(1);
                }
            } RC_BRACE  
            | METHOD RETURN_TYPE_FUNC ID LSQ_BRACE ARGUMENTS  RSQ_BRACE LP_BRACE args RP_BRACE 
            {
                fprintf(parsed," : function definition"); 
                flag =0;
                return_call==0;
            }LC_BRACE body  
            {
                if(flag==0 && return_call==0){
                printf("Error:No return statement\n");
                exit(1);
                }
            } RC_BRACE 
            
            
args : args COMMA arg|arg 

arg : RETURN_TYPE_FUNC ID | VOID ID


func_class: CLASS ID LP_BRACE RP_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class RC_BRACE
          | CLASS ID LSQ_BRACE ARGUMENTS RSQ_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class_methods RC_BRACE
     
body :  body_method

body_method :  body_method  rest 
            | rest    
            

rest : LC_BRACE body_method RC_BRACE | rest_m | LC_BRACE RC_BRACE

rest_m : decls 
     | stmts
     | exp_call
     | calls
     | return_stmt {flag++;}
     | return_stmt_void {flag++;} 
     /* | RETURN {return_call++;} calls  */
    


body_class : body_class rest_class | rest_class 
rest_class :  decls 

body_class_methods : body_class_methods rest_class_methods | rest_class_methods
rest_class_methods : decls | func_method 


return_stmt_void : RETURN VOID SEMICOLON    {fprintf(parsed," : return statement");}


return_stmt : RETURN predicate SEMICOLON   {fprintf(parsed," : return statement");}


stmts : loops | cond_stmts | unary_call

loops : LOOP WHILE LP_BRACE predicate RP_BRACE {fprintf(parsed," : loop");} DO LC_BRACE body RC_BRACE              
     | FOR LP_BRACE exp_stmt SEMICOLON  predicate SEMICOLON unary_stmts  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE
     | FOR LP_BRACE exp_stmt SEMICOLON  predicate SEMICOLON  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE
      

cond_stmts : if_stmt otherwise_stmt | if_stmt  

if_stmt : IF LP_BRACE predicate  RP_BRACE {fprintf(parsed," : conditional statement");} DO LC_BRACE body RC_BRACE             
otherwise_stmt : ELSE {fprintf(parsed," : conditional statement");} LC_BRACE body RC_BRACE   


decls : DECLARATION RETURN_TYPE_FUNC dec SEMICOLON   {if(error_flag==0)fprintf(parsed," :  declaration statement");}
      | DECLARATION ID dec SEMICOLON       {if(error_flag==0)fprintf(parsed," :  declaration statement");}
      | error { error_flag = 1;}


dec:  dec COMMA ID| ID | error { error_flag = 1;}


exp_call : exp_stmt SEMICOLON     {fprintf(parsed," :  expression statement");}

exp_stmt : EXPRESSION ID ASSIGN predicate 



calls: call_stmt_obj SEMICOLON 
       {
        if(return_call==0){
            fprintf(parsed," : call statement with object");
        }else{
            fprintf(parsed," : return statement ");
            }
       }
        | call_stmt SEMICOLON 
        {
        if(return_call==0){
            fprintf(parsed," : call statement");
        }else{
            fprintf(parsed," : return statement ");
            }
        }

call_stmt_obj :CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE 
                
              | CALL_STMT 'this' CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE
                
              | CALL_STMT ID CALL_OP ID LP_BRACE RP_BRACE  


                
predicates :predicates COMMA predicate | predicate

call_stmt:CALL_STMT ID LP_BRACE RP_BRACE 
        |CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE

        
unary_call : unary_stmts SEMICOLON   {fprintf(parsed," : call statement ");}

unary_stmts : POSTINCR LP_BRACE extras RP_BRACE | POSTDECR LP_BRACE extras RP_BRACE 

/* 
assign_exp :  unary_stmts | INTEGERS | ARGUMENTS | ID   | TRUE_KEY | FALSE_KEY | STRING_TOKEN | CHAR_TOKEN 
          | ADD LP_BRACE assign_exp COMMA assign_exp RP_BRACE
          | SUB LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | MUL LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | DIV LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | call_stmt | call_stmt_obj | error { error_flag = 1;} */

/* predicate :  | predicate | LP_BRACE predicate RP_BRACE */

predicate: predicate AND predicate
        | predicate OR predicate
        | predicate PREDICATE_OP predicate 
        | LP_BRACE predicate RP_BRACE 
        | expr_pred | NEG predicate


expr_pred: arth_pred
          | call_stmt {return_call++;} | call_stmt_obj {return_call++;}

arth_pred:ADD LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | SUB LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | MUL LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | DIV LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | extras


extras: unary_stmts| ID | INTEGERS| ARGUMENTS |extrazz 
extrazz: TRUE_KEY | FALSE_KEY | STRING_TOKEN | CHAR_TOKEN 

%%

int main() {
    parsed = fopen("parser.parsed", "w");
    seq = fopen("seq_tokens.txt", "w");
    yyparse();
    return 0;
}

void yyerror(const char* s) {
    
    /* fprintf( parsed," : Error at line %d : %s\n",line, s); */
    printf("Error at line %d : %s\n",yylineno, s);
    /* exit(1); */
}