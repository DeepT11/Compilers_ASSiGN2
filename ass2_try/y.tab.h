#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
    char* strval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
