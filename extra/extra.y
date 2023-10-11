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
/* %left HIGHER_PREC */
/* %left RC_BRACE */
%left PREDICATE_OP AND OR NEG 
%right ASSIGN 

%%
program : program func | func ; 

            
func : func_method     
     | func_class      
      

method_void : METHOD VOID ID LP_BRACE RP_BRACE 
method_non_void : METHOD RETURN_TYPE_FUNC ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE args RP_BRACE 

func_method : method_void 
            {
                fprintf(parsed," : function definition"); 
                flag = 0;
                return_call = 0;
            }
            body
            | method_non_void
            {
                fprintf(parsed," : function definition"); 
                flag =0;
                return_call==0;
            }body
            
            
            
args : args COMMA arg|arg | error { error_flag = 1;}


arg : RETURN_TYPE_FUNC ID 


func_class: CLASS ID LP_BRACE RP_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class RC_BRACE
     | CLASS ID LSQ_BRACE ARGUMENTS RSQ_BRACE {fprintf(parsed," : class definition");}  LC_BRACE body_class_methods RC_BRACE
     
body : LC_BRACE body_method
        {
            if((flag == 0) && (return_call == 0)){
                fprintf(parsed,"Error:No return statement\n");
                exit(1);
            }
        } RC_BRACE  
        /* | error { error_flag = 1;} */

body_method :  body_method  rest | rest 

rest : LC_BRACE body_method RC_BRACE | rest_m  ;

rest_m : decls
     | stmts
     | exp_call
     | calls
     | return_stmt {flag++;}
     | return_stmt_void {flag++;} 
     | RETURN {return_call++;} calls ;



body_class : body_class rest_class | rest_class 
rest_class : unary_call|  decls 

body_class_methods : body_class_methods rest_class_methods | rest_class_methods
rest_class_methods : stmts |decls | exp_call | calls | func_method 

return_stmt :RETURN TRUE_KEY SEMICOLON   {fprintf(parsed," : return statement");}
             |RETURN FALSE_KEY SEMICOLON   {fprintf(parsed," : return statement");}
             |RETURN ID SEMICOLON   {fprintf(parsed," : return statement");}


return_stmt_void : RETURN VOID SEMICOLON    {fprintf(parsed," : return statement");}


stmts : loops | cond_stmts | unary_call 

loops : LOOP WHILE LP_BRACE predicate RP_BRACE {fprintf(parsed," : loop");} DO LC_BRACE body RC_BRACE              
     | FOR LP_BRACE exp_stmt SEMICOLON predicate SEMICOLON unary_stmts  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE
     | FOR LP_BRACE exp_stmt SEMICOLON predicate SEMICOLON  RP_BRACE {fprintf(parsed," : loop");} LC_BRACE body RC_BRACE


cond_stmts : if_stmt otherwise_stmt | if_stmt  

if_stmt : IF LP_BRACE predicate  RP_BRACE {fprintf(parsed," : conditional statement");} DO LC_BRACE body RC_BRACE             
otherwise_stmt : ELSE {fprintf(parsed," : conditional statement");} LC_BRACE body RC_BRACE   


decls : DECLARATION RETURN_TYPE_FUNC dec SEMICOLON   {fprintf(parsed," :  declaration statement");}
      | DECLARATION ID dec SEMICOLON       {fprintf(parsed," :  declaration statement");}
      /* | error { error_flag = 1;} */

dec:  dec COMMA ID| ID



exp_call : exp_stmt SEMICOLON     {fprintf(parsed," :  expression statement");}

exp_stmt : EXPRESSION ID ASSIGN assign_exp 
/* | error { error_flag = 1;} */

assign_exp :  unary_stmts | INTEGERS | ARGUMENTS | ID   | 'true' | 'false'        
          | ADD LP_BRACE assign_exp COMMA assign_exp RP_BRACE
          | SUB LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | MUL LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | DIV LP_BRACE assign_exp COMMA assign_exp RP_BRACE 
          | calls 
          /* | error { error_flag = 1;} */


calls: call_stmt_obj SEMICOLON | call_stmt SEMICOLON 

call_stmt_obj :CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE assign_exp RP_BRACE 
                {
                    if(return_call==0){
                        fprintf(parsed," : call statement with object");
                    }else{
                        fprintf(parsed," : return statement ");
                    }
                }
              | CALL_STMT 'this' CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE assign_exp RP_BRACE
                {
                    if(return_call==0){
                        fprintf(parsed," : call statement with object");
                    }else{
                        fprintf(parsed," : return statement ");
                    }
                }
              | CALL_STMT ID CALL_OP ID LP_BRACE RP_BRACE SEMICOLON  
                {
                    if(return_call==0){
                        fprintf(parsed," : call statement with object");
                    }else{
                        fprintf(parsed," : return statement ");
                    }
                }

call_stmt:CALL_STMT ID LP_BRACE RP_BRACE SEMICOLON  
                {
                    if(return_call==0){
                        fprintf(parsed," : call statement");
                    }else{
                        fprintf(parsed," : return statement ");
                    }
                }
|CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE assign_exp RP_BRACE
                {
                    if(return_call==0){
                        fprintf(parsed," : call statement");
                    }else{
                        fprintf(parsed," : return statement ");
                    }
                }


unary_call : unary_stmts SEMICOLON   {fprintf(parsed," : call statement ");}

unary_stmts : POSTINCR LP_BRACE extras RP_BRACE | POSTDECR LP_BRACE extras RP_BRACE 

predicate: predicate AND predicate
        | predicate OR predicate
        | predicate PREDICATE_OP predicate 
        | LP_BRACE predicate RP_BRACE 
        | expr_pred 


expr_pred: arth_pred
          | NEG expr_pred 
          | expr_pred ASSIGN NEG expr_pred 
          | calls  | TRUE_KEY | FALSE_KEY

arth_pred:ADD LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | SUB LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | MUL LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | DIV LP_BRACE expr_pred COMMA expr_pred RP_BRACE
    | extras
    

extras: | unary_stmts
    | ID 
    | INTEGERS
    | ARGUMENTS
    /* | error { error_flag = 1;} */
%%

int main() {
    parsed = fopen("parsed.txt", "w");
    seq = fopen("seq.txt", "w");
    yyparse();
    return 0;
}

void yyerror(const char* s) {
    /* printf( "Error at line %d : %s\n",line, s); */
    fprintf(stdout, "Error at line %d : %s\n", line, s);
}