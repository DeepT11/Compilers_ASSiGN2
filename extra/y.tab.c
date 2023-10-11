/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20221106

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "2.y"
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

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 16 "2.y"
typedef union YYSTYPE {
    char* strval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define RC_BRACE 257
#define IF 258
#define DO 259
#define ELSE 260
#define WHILE 261
#define FOR 262
#define CLASS 263
#define METHOD 264
#define DECLARATION 265
#define EXPRESSION 266
#define CALL_STMT 267
#define RETURN 268
#define RETURN_TYPE_FUNC 269
#define LC_BRACE 270
#define LP_BRACE 271
#define RP_BRACE 272
#define ASSIGN 273
#define NEG 274
#define ADD 275
#define SUB 276
#define MUL 277
#define DIV 278
#define LOOP 279
#define POSTINCR 280
#define POSTDECR 281
#define INTEGERS 282
#define ID 283
#define SEMICOLON 284
#define CALL_OP 285
#define PREDICATE_OP 286
#define LSQ_BRACE 287
#define RSQ_BRACE 288
#define COMMA 289
#define VOID 290
#define ARGUMENTS 291
#define AND 292
#define OR 293
#define TRUE_KEY 294
#define FALSE_KEY 295
#define STRING_TOKEN 296
#define CHAR_TOKEN 297
#define this 298
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    4,    6,    2,    8,    9,
    2,    7,    7,   10,   10,   11,    3,   13,    3,    5,
   15,   15,   16,   16,   16,   17,   17,   17,   17,   17,
   17,   12,   12,   24,   14,   14,   25,   25,   23,   22,
   19,   19,   19,   30,   27,   33,   27,   34,   27,   28,
   28,   37,   35,   38,   36,   18,   18,   18,   39,   39,
   39,   20,   31,   21,   21,   40,   40,   40,   42,   42,
   41,   41,   29,   32,   32,   26,   26,   26,   26,   26,
   26,   44,   44,   44,   45,   45,   45,   45,   45,   43,
   43,   43,   43,   43,   46,   46,   46,   46,
};
static const YYINT yylen[] = {                            2,
    2,    1,    1,    1,    1,    0,    0,   10,    0,    0,
   14,    3,    1,    2,    2,    0,    8,    0,    9,    1,
    2,    1,    3,    1,    2,    1,    1,    1,    1,    1,
    1,    2,    1,    1,    2,    1,    1,    1,    3,    3,
    1,    1,    1,    0,   10,    0,   12,    0,   11,    2,
    1,    0,    9,    0,    5,    4,    4,    1,    3,    1,
    1,    2,    4,    2,    2,   10,   10,    6,    3,    1,
    4,    8,    2,    4,    4,    3,    3,    3,    3,    1,
    2,    1,    1,    1,    6,    6,    6,    6,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    5,    0,    0,    0,    2,    3,    4,    0,    0,    0,
    1,    0,    0,    0,    0,   16,    0,    0,    0,    0,
   18,    0,    6,    0,    0,    0,    0,   58,    0,    0,
   34,   33,    0,    0,    0,    0,    0,   17,   32,   38,
    0,   37,   36,    0,    0,    0,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    7,    0,   22,   24,
   26,   27,   28,   29,   30,   31,   41,   42,   43,    0,
    0,    0,    0,    0,   61,   60,    0,    0,   19,   35,
   14,   15,    9,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   92,   91,    0,   93,   95,
   96,   97,   98,    0,   90,   84,   83,   89,   80,   82,
   94,   25,    0,    0,    0,    0,    0,   21,   62,   73,
   54,   50,   64,   65,   56,    0,   57,    0,   12,    0,
    0,    0,    0,    0,    0,    0,    0,   81,    0,    0,
    0,    0,   39,   40,    0,    0,    0,   23,    0,    0,
    0,    8,    0,   59,    0,   52,    0,    0,   71,    0,
    0,    0,   79,    0,    0,    0,    0,   78,   76,   77,
    0,   74,   75,    0,   10,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   44,    0,    0,    0,    0,
   68,    0,    0,    0,    0,    0,    0,    0,    0,   55,
   11,    0,   48,    0,    0,    0,    0,    0,   85,   86,
   87,   88,    0,    0,    0,   46,    0,   72,    0,    0,
    0,   53,    0,    0,    0,    0,    0,    0,    0,    0,
   66,   67,   45,   49,    0,   47,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  256,  263,  264,  300,  301,  302,  303,  283,  269,  290,
  301,  271,  287,  283,  283,  272,  291,  287,  271,  311,
  288,  291,  272,  270,  313,  288,  304,  256,  265,  312,
  318,  324,  270,  271,  270,  269,  283,  257,  324,  302,
  314,  318,  325,  269,  290,  307,  310,  258,  262,  266,
  267,  268,  270,  279,  280,  281,  305,  315,  316,  317,
  318,  319,  320,  321,  322,  323,  327,  328,  329,  331,
  332,  335,  340,  341,  256,  283,  339,  339,  257,  325,
  283,  283,  272,  289,  271,  271,  283,  283,  298,  271,
  274,  275,  276,  277,  278,  282,  283,  290,  291,  294,
  295,  296,  297,  326,  332,  340,  341,  343,  344,  345,
  346,  257,  315,  261,  271,  271,  306,  316,  284,  284,
  260,  336,  284,  284,  284,  289,  284,  308,  310,  326,
  331,  273,  271,  285,  287,  285,  326,  326,  271,  271,
  271,  271,  284,  284,  286,  292,  293,  257,  271,  343,
  343,  257,  338,  283,  270,  272,  284,  326,  272,  283,
  291,  283,  272,  344,  344,  344,  344,  326,  326,  326,
  326,  272,  272,  270,  305,  337,  326,  271,  287,  288,
  287,  289,  289,  289,  289,  272,  305,  309,  259,  284,
  272,  291,  271,  291,  344,  344,  344,  344,  330,  257,
  257,  270,  272,  332,  288,  326,  342,  288,  272,  272,
  272,  272,  259,  305,  334,  272,  271,  272,  289,  271,
  270,  257,  270,  333,  342,  326,  342,  305,  305,  270,
  272,  272,  257,  257,  305,  257,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          4,
    5,    6,    7,   27,   57,  117,   46,  128,  188,   47,
   20,   30,   25,   41,   58,   59,   60,   61,   62,   63,
   64,   65,   66,   32,   43,  206,   67,   68,   69,  199,
   70,  105,  224,  215,   72,  122,  176,  153,   77,  106,
  107,  207,  108,  109,  110,  111,
};
static const YYINT yysindex[] = {                       -81,
    0, -221, -253,  -81,    0,    0,    0, -206, -179, -136,
    0, -124, -139, -133, -110,    0, -122, -107, -103,  -85,
    0,  -97,    0, -199,  -76,  -73,  -70,    0, -164, -162,
    0,    0, -119, -252,   28, -250, -250,    0,    0,    0,
 -129,    0,    0,  -86,  -78, -260,    0,  -61,  -60,  -71,
 -240, -165,  -32,  -48,  -57,  -56,    0,   28,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -68,
  -66,  -41,  -55,  -52,    0,    0, -269, -220,    0,    0,
    0,    0,    0, -252, -118,  -39,  -45, -186,  -54, -118,
 -118,  -30,  -29,  -28,  -20,    0,    0,  -47,    0,    0,
    0,    0,    0, -142,    0,    0,    0,    0,    0,    0,
    0,    0,  -12,  -19, -207, -207,  -18,    0,    0,    0,
    0,    0,    0,    0,    0,  -43,    0,  -13,    0, -261,
  -25, -118,  -11,  -23,  -14,  -21, -258,    0,  -74,  -74,
  -74,  -74,    0,    0, -118, -118, -118,    0, -118,   -9,
   -1,    0,    2,    0,   28,    0, -118, -200,    0, -180,
   -8,   -6,    0,  -10,   -7,   -4,    3,    0,    0,    0,
 -246,    0,    0,   28,    0,   24, -112,   19,    6,   29,
   10,  -74,  -74,  -74,  -74,    0,   42,   45,   33, -158,
    0,   16, -118,   17,   34,   38,   39,   40,   54,    0,
    0,   28,    0,   43,   46, -200, -259,   47,    0,    0,
    0,    0,   44,   59,   49,    0, -118,    0, -118, -118,
   28,    0,   28,   50, -228, -200, -218,   64,   65,   28,
    0,    0,    0,    0,   66,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   67,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    8,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   41,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -217,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -209,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  322,   26,    0,    0, -153,    0,    0,    0,    0,  243,
    0,    0,    0,    0,  275,  -53,    0,   15,    0,    0,
    0,    0,    0,  299,  289,  -49,    0,    0,    0,    0,
  245,  -35,    0,    0,    0,    0,    0,    0,  295,  -34,
  -31,  -79,   18, -132,    0,    0,
};
#define YYTABLESIZE 332
static const YYINT yytable[] = {                         71,
   73,  175,  104,   74,  118,   75,  164,  165,  166,  167,
  156,   83,  218,  163,  125,    9,   44,   71,   73,  126,
  187,   74,   71,   73,  145,  186,   74,  145,   84,  219,
  146,  147,   76,  146,  147,  130,   10,   45,   31,  145,
  137,  138,   88,  231,   31,  146,  147,   42,  214,  195,
  196,  197,  198,  232,   70,   42,   28,   89,   40,  118,
  219,    8,   69,  127,   12,   29,   40,  228,  126,  229,
  219,   70,   55,   56,   96,   97,  235,   71,   73,   69,
   13,   74,  158,   99,  133,  145,  100,  101,  102,  103,
  178,  146,  147,   28,   38,  168,  169,  170,  134,  171,
  135,   51,   29,   14,   36,   90,  179,  177,   91,   92,
   93,   94,   95,  203,   55,   56,   96,   97,   37,   71,
   73,   55,   56,   74,   98,   99,   28,   79,  100,  101,
  102,  103,  150,  151,    3,   29,   28,  225,   71,   73,
  227,  144,   74,  145,    3,   29,   15,   16,   51,  146,
  147,   17,   90,   18,  204,   91,   92,   93,   94,   95,
   19,   55,   56,   96,   97,   21,   71,   73,   23,  226,
   74,  190,   99,  145,    1,  100,  101,  102,  103,  146,
  147,    2,    3,   22,   24,   71,   73,   71,   73,   74,
   26,   74,   51,   33,   71,   73,   81,   34,   74,   35,
   92,   93,   94,   95,   82,   55,   56,   96,   97,   85,
   86,   87,  114,  115,  116,  119,   99,  120,  121,  100,
  101,  102,  103,   28,  112,   48,   50,  132,  123,   49,
  136,  124,   29,   50,   51,   52,  143,   53,  152,  154,
  139,  140,  141,   28,  148,   48,   54,   55,   56,   49,
  142,  149,   29,   50,   51,   52,  155,   53,  157,  160,
  159,  162,  172,   51,   51,   51,   54,   55,   56,   51,
  173,  174,   51,   51,   51,   51,  161,   51,  182,  180,
  181,  183,  189,   28,  184,   48,   51,   51,   51,   49,
  191,  185,   29,   50,   51,   52,  192,   53,  200,  193,
  194,  201,  202,  205,  208,  209,   54,   55,   56,  210,
  211,  212,  213,  221,  216,  222,  217,  220,  223,  230,
  233,  234,  236,   20,   63,   11,  129,  113,   39,   80,
  131,   78,
};
static const YYINT yycheck[] = {                         35,
   35,  155,   52,   35,   58,  256,  139,  140,  141,  142,
  272,  272,  272,  272,  284,  269,  269,   53,   53,  289,
  174,   53,   58,   58,  286,  272,   58,  286,  289,  289,
  292,  293,  283,  292,  293,   85,  290,  290,   24,  286,
   90,   91,  283,  272,   30,  292,  293,   33,  202,  182,
  183,  184,  185,  272,  272,   41,  256,  298,   33,  113,
  289,  283,  272,  284,  271,  265,   41,  221,  289,  223,
  289,  289,  280,  281,  282,  283,  230,  113,  113,  289,
  287,  113,  132,  291,  271,  286,  294,  295,  296,  297,
  271,  292,  293,  256,  257,  145,  146,  147,  285,  149,
  287,  267,  265,  283,  269,  271,  287,  157,  274,  275,
  276,  277,  278,  272,  280,  281,  282,  283,  283,  155,
  155,  280,  281,  155,  290,  291,  256,  257,  294,  295,
  296,  297,  115,  116,  264,  265,  256,  217,  174,  174,
  220,  284,  174,  286,  264,  265,  283,  272,  267,  292,
  293,  291,  271,  287,  190,  274,  275,  276,  277,  278,
  271,  280,  281,  282,  283,  288,  202,  202,  272,  219,
  202,  284,  291,  286,  256,  294,  295,  296,  297,  292,
  293,  263,  264,  291,  270,  221,  221,  223,  223,  221,
  288,  223,  267,  270,  230,  230,  283,  271,  230,  270,
  275,  276,  277,  278,  283,  280,  281,  282,  283,  271,
  271,  283,  261,  271,  271,  284,  291,  284,  260,  294,
  295,  296,  297,  256,  257,  258,  266,  273,  284,  262,
  285,  284,  265,  266,  267,  268,  284,  270,  257,  283,
  271,  271,  271,  256,  257,  258,  279,  280,  281,  262,
  271,  271,  265,  266,  267,  268,  270,  270,  284,  283,
  272,  283,  272,  256,  257,  258,  279,  280,  281,  262,
  272,  270,  265,  266,  267,  268,  291,  270,  289,  288,
  287,  289,  259,  256,  289,  258,  279,  280,  281,  262,
  272,  289,  265,  266,  267,  268,  291,  270,  257,  271,
  291,  257,  270,  288,  288,  272,  279,  280,  281,  272,
  272,  272,  259,  270,  272,  257,  271,  271,  270,  270,
  257,  257,  257,  257,  284,    4,   84,   53,   30,   41,
   86,   37,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,
};
#endif
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 298
#define YYUNDFTOKEN 347
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","RC_BRACE","IF","DO","ELSE",
"WHILE","FOR","CLASS","METHOD","DECLARATION","EXPRESSION","CALL_STMT","RETURN",
"RETURN_TYPE_FUNC","LC_BRACE","LP_BRACE","RP_BRACE","ASSIGN","NEG","ADD","SUB",
"MUL","DIV","LOOP","POSTINCR","POSTDECR","INTEGERS","ID","SEMICOLON","CALL_OP",
"PREDICATE_OP","LSQ_BRACE","RSQ_BRACE","COMMA","VOID","ARGUMENTS","AND","OR",
"TRUE_KEY","FALSE_KEY","STRING_TOKEN","CHAR_TOKEN","\"this\"","$accept",
"program","func","func_method","func_class","$$1","body","$$2","args","$$3",
"$$4","arg","$$5","body_class","$$6","body_class_methods","body_method","rest",
"rest_m","decls","stmts","exp_call","calls","return_stmt","return_stmt_void",
"rest_class","rest_class_methods","predicate","loops","cond_stmts","unary_call",
"$$7","exp_stmt","unary_stmts","$$8","$$9","if_stmt","otherwise_stmt","$$10",
"$$11","dec","call_stmt_obj","call_stmt","predicates","extras","expr_pred",
"arth_pred","extrazz","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : program func",
"program : func",
"func : func_method",
"func : func_class",
"func : error",
"$$1 :",
"$$2 :",
"func_method : METHOD VOID ID LP_BRACE RP_BRACE $$1 LC_BRACE body $$2 RC_BRACE",
"$$3 :",
"$$4 :",
"func_method : METHOD RETURN_TYPE_FUNC ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE args RP_BRACE $$3 LC_BRACE body $$4 RC_BRACE",
"args : args COMMA arg",
"args : arg",
"arg : RETURN_TYPE_FUNC ID",
"arg : VOID ID",
"$$5 :",
"func_class : CLASS ID LP_BRACE RP_BRACE $$5 LC_BRACE body_class RC_BRACE",
"$$6 :",
"func_class : CLASS ID LSQ_BRACE ARGUMENTS RSQ_BRACE $$6 LC_BRACE body_class_methods RC_BRACE",
"body : body_method",
"body_method : body_method rest",
"body_method : rest",
"rest : LC_BRACE body_method RC_BRACE",
"rest : rest_m",
"rest : LC_BRACE RC_BRACE",
"rest_m : decls",
"rest_m : stmts",
"rest_m : exp_call",
"rest_m : calls",
"rest_m : return_stmt",
"rest_m : return_stmt_void",
"body_class : body_class rest_class",
"body_class : rest_class",
"rest_class : decls",
"body_class_methods : body_class_methods rest_class_methods",
"body_class_methods : rest_class_methods",
"rest_class_methods : decls",
"rest_class_methods : func_method",
"return_stmt_void : RETURN VOID SEMICOLON",
"return_stmt : RETURN predicate SEMICOLON",
"stmts : loops",
"stmts : cond_stmts",
"stmts : unary_call",
"$$7 :",
"loops : LOOP WHILE LP_BRACE predicate RP_BRACE $$7 DO LC_BRACE body RC_BRACE",
"$$8 :",
"loops : FOR LP_BRACE exp_stmt SEMICOLON predicate SEMICOLON unary_stmts RP_BRACE $$8 LC_BRACE body RC_BRACE",
"$$9 :",
"loops : FOR LP_BRACE exp_stmt SEMICOLON predicate SEMICOLON RP_BRACE $$9 LC_BRACE body RC_BRACE",
"cond_stmts : if_stmt otherwise_stmt",
"cond_stmts : if_stmt",
"$$10 :",
"if_stmt : IF LP_BRACE predicate RP_BRACE $$10 DO LC_BRACE body RC_BRACE",
"$$11 :",
"otherwise_stmt : ELSE $$11 LC_BRACE body RC_BRACE",
"decls : DECLARATION RETURN_TYPE_FUNC dec SEMICOLON",
"decls : DECLARATION ID dec SEMICOLON",
"decls : error",
"dec : dec COMMA ID",
"dec : ID",
"dec : error",
"exp_call : exp_stmt SEMICOLON",
"exp_stmt : EXPRESSION ID ASSIGN predicate",
"calls : call_stmt_obj SEMICOLON",
"calls : call_stmt SEMICOLON",
"call_stmt_obj : CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE",
"call_stmt_obj : CALL_STMT \"this\" CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE",
"call_stmt_obj : CALL_STMT ID CALL_OP ID LP_BRACE RP_BRACE",
"predicates : predicates COMMA predicate",
"predicates : predicate",
"call_stmt : CALL_STMT ID LP_BRACE RP_BRACE",
"call_stmt : CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE predicates RP_BRACE",
"unary_call : unary_stmts SEMICOLON",
"unary_stmts : POSTINCR LP_BRACE extras RP_BRACE",
"unary_stmts : POSTDECR LP_BRACE extras RP_BRACE",
"predicate : predicate AND predicate",
"predicate : predicate OR predicate",
"predicate : predicate PREDICATE_OP predicate",
"predicate : LP_BRACE predicate RP_BRACE",
"predicate : expr_pred",
"predicate : NEG predicate",
"expr_pred : arth_pred",
"expr_pred : call_stmt",
"expr_pred : call_stmt_obj",
"arth_pred : ADD LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : SUB LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : MUL LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : DIV LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : extras",
"extras : unary_stmts",
"extras : ID",
"extras : INTEGERS",
"extras : ARGUMENTS",
"extras : extrazz",
"extrazz : TRUE_KEY",
"extrazz : FALSE_KEY",
"extrazz : STRING_TOKEN",
"extrazz : CHAR_TOKEN",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 240 "2.y"

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
#line 688 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 5:
#line 76 "2.y"
	{
        error_flag = 1;
      }
#line 1363 "y.tab.c"
break;
case 6:
#line 82 "2.y"
	{
                fprintf(parsed," : function definition"); 
                flag = 0;
                return_call = 0;
            }
#line 1372 "y.tab.c"
break;
case 7:
#line 88 "2.y"
	{
                if((flag == 0) && (return_call == 0)){
                printf("Error:No return statement\n");
                exit(1);
                }
            }
#line 1382 "y.tab.c"
break;
case 9:
#line 95 "2.y"
	{
                fprintf(parsed," : function definition"); 
                flag =0;
                return_call==0;
            }
#line 1391 "y.tab.c"
break;
case 10:
#line 100 "2.y"
	{
                if(flag==0 && return_call==0){
                printf("Error:No return statement\n");
                exit(1);
                }
            }
#line 1401 "y.tab.c"
break;
case 16:
#line 113 "2.y"
	{fprintf(parsed," : class definition");}
#line 1406 "y.tab.c"
break;
case 18:
#line 114 "2.y"
	{fprintf(parsed," : class definition");}
#line 1411 "y.tab.c"
break;
case 30:
#line 128 "2.y"
	{flag++;}
#line 1416 "y.tab.c"
break;
case 31:
#line 129 "2.y"
	{flag++;}
#line 1421 "y.tab.c"
break;
case 39:
#line 141 "2.y"
	{fprintf(parsed," : return statement");}
#line 1426 "y.tab.c"
break;
case 40:
#line 144 "2.y"
	{fprintf(parsed," : return statement");}
#line 1431 "y.tab.c"
break;
case 44:
#line 149 "2.y"
	{fprintf(parsed," : loop");}
#line 1436 "y.tab.c"
break;
case 46:
#line 150 "2.y"
	{fprintf(parsed," : loop");}
#line 1441 "y.tab.c"
break;
case 48:
#line 151 "2.y"
	{fprintf(parsed," : loop");}
#line 1446 "y.tab.c"
break;
case 52:
#line 156 "2.y"
	{fprintf(parsed," : conditional statement");}
#line 1451 "y.tab.c"
break;
case 54:
#line 157 "2.y"
	{fprintf(parsed," : conditional statement");}
#line 1456 "y.tab.c"
break;
case 56:
#line 160 "2.y"
	{if(error_flag==0)fprintf(parsed," :  declaration statement");}
#line 1461 "y.tab.c"
break;
case 57:
#line 161 "2.y"
	{if(error_flag==0)fprintf(parsed," :  declaration statement");}
#line 1466 "y.tab.c"
break;
case 58:
#line 162 "2.y"
	{ error_flag = 1;}
#line 1471 "y.tab.c"
break;
case 61:
#line 165 "2.y"
	{ error_flag = 1;}
#line 1476 "y.tab.c"
break;
case 62:
#line 168 "2.y"
	{fprintf(parsed," :  expression statement");}
#line 1481 "y.tab.c"
break;
case 64:
#line 175 "2.y"
	{
        if(return_call==0){
            fprintf(parsed," : call statement with object");
        }else{
            fprintf(parsed," : return statement ");
            }
       }
#line 1492 "y.tab.c"
break;
case 65:
#line 183 "2.y"
	{
        if(return_call==0){
            fprintf(parsed," : call statement");
        }else{
            fprintf(parsed," : return statement ");
            }
        }
#line 1503 "y.tab.c"
break;
case 73:
#line 205 "2.y"
	{fprintf(parsed," : call statement ");}
#line 1508 "y.tab.c"
break;
case 83:
#line 227 "2.y"
	{return_call++;}
#line 1513 "y.tab.c"
break;
case 84:
#line 227 "2.y"
	{return_call++;}
#line 1518 "y.tab.c"
break;
#line 1520 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
