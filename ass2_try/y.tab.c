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

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 14 "2.y"
typedef union YYSTYPE {
    char* strval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 46 "y.tab.c"

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
#define true 296
#define false 297
#define this 298
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    4,    6,    2,    8,    9,    2,
    7,    7,   10,   11,    3,   13,    3,    5,   15,   15,
   16,   16,   16,   17,   17,   17,   17,   17,   17,   24,
   17,   12,   12,   25,   25,   14,   14,   27,   27,   27,
   27,   27,   22,   22,   22,   23,   19,   19,   19,   31,
   28,   32,   28,   33,   28,   29,   29,   36,   34,   37,
   35,   18,   18,   38,   38,   20,   39,   39,   39,   39,
   39,   39,   39,   39,   39,   39,   39,   21,   21,   21,
   21,   21,   21,   21,   21,   26,   26,   30,   30,   30,
   30,   30,   41,   41,   41,   41,   42,   42,   42,   42,
   42,   40,   40,   40,   40,   40,
};
static const YYINT yylen[] = {                            2,
    2,    1,    1,    1,    0,    0,   10,    0,    0,   14,
    3,    1,    2,    0,    8,    0,    9,    1,    2,    1,
    3,    1,    0,    1,    1,    1,    1,    1,    1,    0,
    3,    2,    1,    2,    1,    2,    1,    1,    1,    1,
    1,    1,    3,    3,    3,    3,    1,    1,    2,    0,
   10,    0,   11,    0,   10,    2,    1,    0,    9,    0,
    5,    4,    4,    3,    1,    5,    1,    1,    1,    1,
    1,    1,    6,    6,    6,    6,    3,   11,   11,   11,
   11,    7,    5,    9,    9,    4,    4,    3,    3,    3,
    3,    1,    1,    2,    4,    1,    6,    6,    6,    6,
    1,    0,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    2,    3,    4,    0,    0,    0,    1,
    0,    0,    0,    0,   14,    0,    0,    0,    0,   16,
    0,    5,    0,    0,    0,    0,    0,    0,    0,    0,
   35,   33,    0,    0,    0,    0,    0,    0,    0,    0,
   15,   32,   34,    0,    0,    0,    0,    0,   42,    0,
   39,   38,   40,   41,    0,   37,   47,   48,    0,    0,
    0,   12,    0,    0,    6,    0,   20,   22,   24,   25,
   26,   27,   28,   29,   65,    0,    0,  105,  104,  106,
  103,    0,    0,    0,    0,    0,    0,    0,    0,   17,
   36,   49,   60,   56,   13,    8,    0,    0,    0,    0,
    0,    0,    0,    0,   19,   62,    0,   63,   86,   87,
    0,    0,    0,    0,    0,    0,   96,    0,  101,    0,
   93,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   11,   45,   46,   43,   44,   31,   21,    7,   64,    0,
    0,    0,    0,    0,    0,   58,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   68,   70,   69,   71,
   72,   67,    0,    0,    0,    0,    0,    0,    0,    0,
   91,    0,    0,    0,    0,    0,   90,   88,   89,    0,
    0,    0,    0,    0,    0,    0,   66,   83,    0,    0,
    0,    0,   50,    0,    9,    0,    0,    0,    0,    0,
    0,   54,    0,   77,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   61,    0,    0,    0,    0,    0,    0,
    0,   52,    0,    0,    0,    0,   82,    0,    0,    0,
    0,    0,   10,   97,   98,   99,  100,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   59,
    0,    0,   73,   74,   75,   76,    0,    0,   84,   85,
    0,    0,    0,   55,    0,    0,    0,    0,    0,   51,
   53,   78,   80,   79,   81,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  263,  264,  300,  301,  302,  303,  283,  269,  290,  301,
  271,  287,  283,  283,  272,  291,  287,  271,  311,  288,
  291,  272,  270,  313,  288,  304,  265,  280,  281,  312,
  318,  325,  326,  270,  271,  270,  269,  283,  271,  271,
  257,  325,  284,  258,  262,  266,  267,  279,  302,  314,
  318,  319,  320,  321,  326,  327,  328,  329,  334,  269,
  307,  310,  268,  270,  305,  315,  316,  317,  318,  319,
  320,  321,  322,  323,  283,  338,  338,  282,  283,  291,
  326,  340,  340,  271,  271,  283,  283,  298,  261,  257,
  327,  284,  260,  335,  283,  272,  289,  283,  290,  294,
  295,  324,  315,  306,  316,  284,  289,  284,  272,  272,
  271,  274,  275,  276,  277,  278,  321,  330,  340,  341,
  342,  320,  273,  271,  285,  287,  285,  271,  337,  308,
  310,  284,  284,  284,  284,  321,  257,  257,  283,  330,
  341,  271,  271,  271,  271,  272,  286,  292,  293,  273,
  330,  271,  275,  276,  277,  278,  282,  283,  291,  296,
  297,  326,  339,  272,  283,  291,  283,  330,  270,  270,
  272,  341,  341,  341,  341,  336,  330,  330,  330,  274,
  284,  339,  271,  271,  271,  271,  284,  284,  271,  287,
  288,  287,  272,  305,  305,  289,  289,  289,  289,  259,
  341,  272,  326,  272,  339,  339,  339,  339,  272,  291,
  271,  291,  331,  257,  309,  341,  341,  341,  341,  270,
  333,  272,  289,  289,  289,  289,  284,  288,  282,  291,
  288,  259,  257,  272,  272,  272,  272,  305,  270,  332,
  339,  339,  339,  339,  271,  272,  272,  271,  270,  257,
  305,  270,  272,  272,  272,  272,  282,  291,  284,  284,
  282,  291,  305,  257,  305,  272,  272,  272,  272,  257,
  257,  284,  284,  284,  284,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,   26,   65,  104,   61,  130,  215,   62,
   19,   30,   24,   50,   66,   67,   68,   69,   70,   71,
  117,   73,   74,  102,   32,   81,   56,   57,   58,  118,
  213,  240,  221,   59,   94,  176,  129,   76,  163,  119,
  120,  121,
};
static const YYINT yysindex[] = {                      -178,
 -274, -248, -178,    0,    0,    0, -259, -267, -263,    0,
 -225, -240, -229, -193,    0, -182, -168, -159, -144,    0,
 -148,    0, -206, -137, -127, -106, -151,  -88,  -53, -226,
    0,    0,  -76,   24,  -48,   13,  -34,  -34,  -15,  -15,
    0,    0,    0,  -17,  -10,  -21, -163,    2,    0,   -7,
    0,    0,    0,    0,  -20,    0,    0,    0,    9,  -13,
 -266,    0, -124,   13,    0,   13,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -105,  -56,    0,    0,    0,
    0,    5,   12, -126,   19,   29, -261,   21,   41,    0,
    0,    0,    0,    0,    0,    0,  -48,   14,   16,   30,
   38,   58,  -43,   70,    0,    0,   45,    0,    0,    0,
 -126,  -35,   60,   63,   64,   65,    0,   15,    0,   66,
    0, -126, -166,   68,   54,   47,   59, -126,   71,   73,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   25,
   66,  -35,  -35,  -35,  -35,    0, -126, -126, -126,   72,
   40, -166,   74,   76,   77,   78,    0,    0,    0,    0,
    0,    0,   67,   69, -221,   56,   75,   27,   13,   13,
    0, -220, -217, -213, -196,   91,    0,    0,    0,  -35,
  -28,   80, -166, -166, -166, -166,    0,    0,   82,   79,
   84,   81,    0,   99,    0,  -35,  -35,  -35,  -35,   87,
   66,    0,   86,    0,   85,   88,   89,   90,   83,   92,
 -234,   93,  100,    0,  103, -177,  -91,  -74,  -62,   13,
   94,    0, -166, -166, -166, -166,    0,   95,   96,   97,
  102,  101,    0,    0,    0,    0,    0,  104,   13,  105,
  110,  111,  112,  113,  -96,  106,  107,  -86,   13,    0,
  108,   13,    0,    0,    0,    0,  114,  115,    0,    0,
  116,  117,  135,    0,  136,  118,  120,  121,  122,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  137,    0,    0,  123,  123,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -90,    0,
    0,    0,  109,  137,    0,  139,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   23,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   23, -165,    0,    0,    0,    0,    0,    0,    0,  -99,
    0,   37,    0,    0,    0,    0,    0,   23,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -150, -191, -191, -191, -191,    0, -205, -205, -205,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  137,  137,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -165,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -42,  -42,  -42,  -42,    0,
  -80,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  137,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  137,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  137,    0,
    0,  137,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  360,   49,    0,    0, -155,    0,    0,    0,    0,  300,
    0,    0,    0,    0,  334,  -63,    0,   -1,  119,  -33,
  -32,    0,    0,    0,  369,  -23,  350,    0,    0, -103,
    0,    0,    0,    0,    0,    0,    0,  363, -122,  195,
 -107,    0,
};
#define YYTABLESIZE 406
static const YYINT yytable[] = {                         33,
   53,   54,  105,   72,  141,   96,   33,  140,    7,  124,
   55,   11,   55,  194,  195,   13,   53,   54,  151,   14,
    8,   31,   97,  125,  168,  126,   55,   12,   31,  182,
   41,   72,   51,   72,  172,  173,  174,  175,   27,  105,
   55,    9,   55,  177,  178,  179,   15,  229,   51,  189,
   16,  122,  150,   28,   29,  150,  230,   17,   27,  150,
  205,  206,  207,  208,  238,  190,  102,  102,  196,  136,
   72,  197,  201,   28,   29,  198,  150,   18,  102,   55,
  102,  102,   49,  251,    1,    2,  102,  102,  216,  217,
  218,  219,  199,  263,  234,  150,  265,  102,   49,  162,
  241,  242,  243,  244,  152,   20,  102,  102,  153,  154,
  155,  156,   22,   28,   29,  157,  158,   37,  102,   87,
  102,   94,   21,  102,  159,   23,  102,  102,  162,  160,
  161,   38,   34,   94,   88,   94,   72,   72,   94,   25,
   47,   94,   94,   35,  111,   55,   55,  112,  113,  114,
  115,  116,   52,   28,   29,   78,   79,  203,   98,  162,
  162,  162,  162,   36,   80,   99,   57,   57,   52,  100,
  101,   57,   92,   57,   57,   57,   57,   57,  106,   57,
  235,  150,   39,  107,   92,  257,   92,   72,   57,   57,
   57,   95,   92,   92,  258,  261,   55,  236,  150,  162,
  162,  162,  162,   95,  262,   95,   72,   43,   95,  237,
  150,   95,   95,  137,   44,   55,   72,   40,   45,   72,
   60,   27,   46,   47,   63,   55,   64,  108,   55,  102,
  102,   47,  107,   82,   83,   48,   28,   29,  112,  113,
  114,  115,  116,  202,   28,   29,   78,   79,   75,   90,
   44,   28,   29,   84,   45,   80,    2,   27,   46,   47,
   85,   86,   89,   92,   28,   29,   78,   79,   93,   95,
   44,   48,   28,   29,   45,   80,  109,   27,   46,   47,
   63,   44,   64,  110,   46,   45,  146,    2,   27,   46,
   47,   48,   28,   29,  102,  102,  171,  132,  193,  133,
  147,  123,   48,   28,   29,  127,  148,  149,  102,  102,
  147,  128,  147,  134,  102,  102,  148,  149,  148,  149,
  102,  135,  102,  181,   47,  147,  138,  139,  102,  102,
  142,  148,  149,  143,  144,  145,  165,  166,  150,  164,
  169,  167,  170,  191,  183,  180,  184,  185,  186,  200,
  187,  204,  188,  209,  211,  214,  220,  222,  232,  233,
  250,  192,   10,  239,  264,  245,  227,  246,  247,  210,
  249,  212,  248,  223,  252,   30,  224,  225,  226,  228,
  231,  253,  254,  255,  256,  266,  267,  268,  269,  259,
  260,  270,  271,   23,  102,   18,  131,  103,   42,   91,
   77,  272,    0,  273,  274,  275,
};
static const YYINT yycheck[] = {                         23,
   34,   34,   66,   36,  112,  272,   30,  111,  283,  271,
   34,  271,   36,  169,  170,  283,   50,   50,  122,  283,
  269,   23,  289,  285,  128,  287,   50,  287,   30,  152,
  257,   64,   34,   66,  142,  143,  144,  145,  265,  103,
   64,  290,   66,  147,  148,  149,  272,  282,   50,  271,
  291,   85,  273,  280,  281,  273,  291,  287,  265,  273,
  183,  184,  185,  186,  220,  287,  272,  273,  289,  102,
  103,  289,  180,  280,  281,  289,  273,  271,  284,  103,
  286,  273,   34,  239,  263,  264,  292,  293,  196,  197,
  198,  199,  289,  249,  272,  273,  252,  289,   50,  123,
  223,  224,  225,  226,  271,  288,  272,  273,  275,  276,
  277,  278,  272,  280,  281,  282,  283,  269,  284,  283,
  286,  272,  291,  289,  291,  270,  292,  293,  152,  296,
  297,  283,  270,  284,  298,  286,  169,  170,  289,  288,
  267,  292,  293,  271,  271,  169,  170,  274,  275,  276,
  277,  278,   34,  280,  281,  282,  283,  181,  283,  183,
  184,  185,  186,  270,  291,  290,  257,  258,   50,  294,
  295,  262,  272,  264,  265,  266,  267,  268,  284,  270,
  272,  273,  271,  289,  284,  282,  286,  220,  279,  280,
  281,  272,  292,  293,  291,  282,  220,  272,  273,  223,
  224,  225,  226,  284,  291,  286,  239,  284,  289,  272,
  273,  292,  293,  257,  258,  239,  249,  271,  262,  252,
  269,  265,  266,  267,  268,  249,  270,  284,  252,  272,
  273,  267,  289,   39,   40,  279,  280,  281,  274,  275,
  276,  277,  278,  272,  280,  281,  282,  283,  283,  257,
  258,  280,  281,  271,  262,  291,  264,  265,  266,  267,
  271,  283,  261,  284,  280,  281,  282,  283,  260,  283,
  258,  279,  280,  281,  262,  291,  272,  265,  266,  267,
  268,  258,  270,  272,  266,  262,  272,  264,  265,  266,
  267,  279,  280,  281,  272,  273,  272,  284,  272,  284,
  286,  273,  279,  280,  281,  285,  292,  293,  286,  273,
  286,  271,  286,  284,  292,  293,  292,  293,  292,  293,
  284,  284,  286,  284,  267,  286,  257,  283,  292,  293,
  271,  292,  293,  271,  271,  271,  283,  291,  273,  272,
  270,  283,  270,  288,  271,  274,  271,  271,  271,  259,
  284,  272,  284,  272,  271,  257,  270,  272,  259,  257,
  257,  287,    3,  270,  257,  271,  284,  272,  272,  291,
  270,  291,  271,  289,  270,  267,  289,  289,  289,  288,
  288,  272,  272,  272,  272,  272,  272,  272,  272,  284,
  284,  257,  257,  257,  272,  257,   97,   64,   30,   50,
   38,  284,   -1,  284,  284,  284,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 298
#define YYUNDFTOKEN 343
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
"TRUE_KEY","FALSE_KEY","\"true\"","\"false\"","\"this\"","$accept","program",
"func","func_method","func_class","$$1","body","$$2","args","$$3","$$4","arg",
"$$5","body_class","$$6","body_class_methods","body_method","rest","rest_m",
"decls","stmts","exp_stmt","calls","return_stmt","return_stmt_void","$$7",
"rest_class","unary_stmts","rest_class_methods","loops","cond_stmts",
"predicate","$$8","$$9","$$10","if_stmt","otherwise_stmt","$$11","$$12","dec",
"assign_exp","extras","expr_pred","arth_pred","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : program func",
"program : func",
"func : func_method",
"func : func_class",
"$$1 :",
"$$2 :",
"func_method : METHOD VOID ID LP_BRACE RP_BRACE $$1 LC_BRACE body $$2 RC_BRACE",
"$$3 :",
"$$4 :",
"func_method : METHOD RETURN_TYPE_FUNC ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE args RP_BRACE $$3 LC_BRACE body $$4 RC_BRACE",
"args : args COMMA arg",
"args : arg",
"arg : RETURN_TYPE_FUNC ID",
"$$5 :",
"func_class : CLASS ID LP_BRACE RP_BRACE $$5 LC_BRACE body_class RC_BRACE",
"$$6 :",
"func_class : CLASS ID LSQ_BRACE ARGUMENTS RSQ_BRACE $$6 LC_BRACE body_class_methods RC_BRACE",
"body : body_method",
"body_method : body_method rest",
"body_method : rest",
"rest : LC_BRACE body_method RC_BRACE",
"rest : rest_m",
"rest :",
"rest_m : decls",
"rest_m : stmts",
"rest_m : exp_stmt",
"rest_m : calls",
"rest_m : return_stmt",
"rest_m : return_stmt_void",
"$$7 :",
"rest_m : RETURN $$7 calls",
"body_class : body_class rest_class",
"body_class : rest_class",
"rest_class : unary_stmts SEMICOLON",
"rest_class : decls",
"body_class_methods : body_class_methods rest_class_methods",
"body_class_methods : rest_class_methods",
"rest_class_methods : stmts",
"rest_class_methods : decls",
"rest_class_methods : exp_stmt",
"rest_class_methods : calls",
"rest_class_methods : func_method",
"return_stmt : RETURN TRUE_KEY SEMICOLON",
"return_stmt : RETURN FALSE_KEY SEMICOLON",
"return_stmt : RETURN ID SEMICOLON",
"return_stmt_void : RETURN VOID SEMICOLON",
"stmts : loops",
"stmts : cond_stmts",
"stmts : unary_stmts SEMICOLON",
"$$8 :",
"loops : LOOP WHILE LP_BRACE predicate RP_BRACE $$8 DO LC_BRACE body RC_BRACE",
"$$9 :",
"loops : FOR LP_BRACE exp_stmt predicate SEMICOLON unary_stmts RP_BRACE $$9 LC_BRACE body RC_BRACE",
"$$10 :",
"loops : FOR LP_BRACE exp_stmt predicate SEMICOLON RP_BRACE $$10 LC_BRACE body RC_BRACE",
"cond_stmts : if_stmt otherwise_stmt",
"cond_stmts : if_stmt",
"$$11 :",
"if_stmt : IF LP_BRACE predicate RP_BRACE $$11 DO LC_BRACE body RC_BRACE",
"$$12 :",
"otherwise_stmt : ELSE $$12 LC_BRACE body RC_BRACE",
"decls : DECLARATION RETURN_TYPE_FUNC dec SEMICOLON",
"decls : DECLARATION ID dec SEMICOLON",
"dec : dec COMMA ID",
"dec : ID",
"exp_stmt : EXPRESSION ID ASSIGN assign_exp SEMICOLON",
"assign_exp : unary_stmts",
"assign_exp : INTEGERS",
"assign_exp : ARGUMENTS",
"assign_exp : ID",
"assign_exp : \"true\"",
"assign_exp : \"false\"",
"assign_exp : ADD LP_BRACE assign_exp COMMA assign_exp RP_BRACE",
"assign_exp : SUB LP_BRACE assign_exp COMMA assign_exp RP_BRACE",
"assign_exp : MUL LP_BRACE assign_exp COMMA assign_exp RP_BRACE",
"assign_exp : DIV LP_BRACE assign_exp COMMA assign_exp RP_BRACE",
"assign_exp : LP_BRACE assign_exp RP_BRACE",
"calls : CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON",
"calls : CALL_STMT \"this\" CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON",
"calls : CALL_STMT ID CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON",
"calls : CALL_STMT \"this\" CALL_OP ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON",
"calls : CALL_STMT ID CALL_OP ID LP_BRACE RP_BRACE SEMICOLON",
"calls : CALL_STMT ID LP_BRACE RP_BRACE SEMICOLON",
"calls : CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE INTEGERS RP_BRACE SEMICOLON",
"calls : CALL_STMT ID LSQ_BRACE ARGUMENTS RSQ_BRACE LP_BRACE ARGUMENTS RP_BRACE SEMICOLON",
"unary_stmts : POSTINCR LP_BRACE extras RP_BRACE",
"unary_stmts : POSTDECR LP_BRACE extras RP_BRACE",
"predicate : predicate AND predicate",
"predicate : predicate OR predicate",
"predicate : predicate PREDICATE_OP predicate",
"predicate : LP_BRACE predicate RP_BRACE",
"predicate : expr_pred",
"expr_pred : arth_pred",
"expr_pred : NEG expr_pred",
"expr_pred : expr_pred ASSIGN NEG expr_pred",
"expr_pred : calls",
"arth_pred : ADD LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : SUB LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : MUL LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : DIV LP_BRACE expr_pred COMMA expr_pred RP_BRACE",
"arth_pred : extras",
"extras :",
"extras : unary_stmts",
"extras : ID",
"extras : INTEGERS",
"extras : ARGUMENTS",

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
#line 266 "2.y"

int main() {
    parsed = fopen("parsed.txt", "w");
    seq = fopen("seq.txt", "w");
    yyparse();
    return 0;
}

void yyerror(const char* s) {
    fprintf( parsed," : Error at line %d : %s\n",line, s);
    exit(1);
}
#line 734 "y.tab.c"

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
#line 75 "2.y"
	{
                fprintf(parsed," : function definition"); 
                flag = 0;
                return_call = 0;
            }
#line 1411 "y.tab.c"
break;
case 6:
#line 81 "2.y"
	{
                if((flag == 0) && (return_call == 0)){
                fprintf(parsed,"Error:No return statement\n");
                exit(1);
                }
                printf("%d\n",flag);
                printf("%d\n",return_call);
            }
#line 1423 "y.tab.c"
break;
case 8:
#line 90 "2.y"
	{
                fprintf(parsed," : function definition"); 
                flag =0;
                return_call==0;
            }
#line 1432 "y.tab.c"
break;
case 9:
#line 95 "2.y"
	{
                if(flag==0 && return_call==0){
                fprintf(parsed,"Error:No return statement\n");
                exit(1);
                }
            }
#line 1442 "y.tab.c"
break;
case 14:
#line 108 "2.y"
	{fprintf(parsed," : class definition");}
#line 1447 "y.tab.c"
break;
case 16:
#line 109 "2.y"
	{fprintf(parsed," : class definition");}
#line 1452 "y.tab.c"
break;
case 28:
#line 121 "2.y"
	{flag++;}
#line 1457 "y.tab.c"
break;
case 29:
#line 122 "2.y"
	{flag++;}
#line 1462 "y.tab.c"
break;
case 30:
#line 123 "2.y"
	{return_call++;}
#line 1467 "y.tab.c"
break;
case 43:
#line 133 "2.y"
	{fprintf(parsed," : return statement");}
#line 1472 "y.tab.c"
break;
case 44:
#line 134 "2.y"
	{fprintf(parsed," : return statement");}
#line 1477 "y.tab.c"
break;
case 45:
#line 135 "2.y"
	{fprintf(parsed," : return statement");}
#line 1482 "y.tab.c"
break;
case 46:
#line 138 "2.y"
	{fprintf(parsed," : return statement");}
#line 1487 "y.tab.c"
break;
case 50:
#line 143 "2.y"
	{fprintf(parsed," : loop");}
#line 1492 "y.tab.c"
break;
case 52:
#line 144 "2.y"
	{fprintf(parsed," : loop");}
#line 1497 "y.tab.c"
break;
case 54:
#line 145 "2.y"
	{fprintf(parsed," : loop");}
#line 1502 "y.tab.c"
break;
case 58:
#line 150 "2.y"
	{fprintf(parsed," : conditional statement");}
#line 1507 "y.tab.c"
break;
case 60:
#line 151 "2.y"
	{fprintf(parsed," : conditional statement");}
#line 1512 "y.tab.c"
break;
case 62:
#line 154 "2.y"
	{fprintf(parsed," :  declaration statement");}
#line 1517 "y.tab.c"
break;
case 63:
#line 155 "2.y"
	{fprintf(parsed," :  declaration statement");}
#line 1522 "y.tab.c"
break;
case 66:
#line 161 "2.y"
	{fprintf(parsed," :  expression statement");}
#line 1527 "y.tab.c"
break;
case 78:
#line 172 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1538 "y.tab.c"
break;
case 79:
#line 180 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1549 "y.tab.c"
break;
case 80:
#line 188 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1560 "y.tab.c"
break;
case 81:
#line 196 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1571 "y.tab.c"
break;
case 82:
#line 204 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1582 "y.tab.c"
break;
case 83:
#line 212 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1593 "y.tab.c"
break;
case 84:
#line 220 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1604 "y.tab.c"
break;
case 85:
#line 228 "2.y"
	{
            if(return_call==0){
            fprintf(parsed," : call statement with object");
            }else{
                fprintf(parsed," : return statement ");
            }
        }
#line 1615 "y.tab.c"
break;
#line 1617 "y.tab.c"
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
