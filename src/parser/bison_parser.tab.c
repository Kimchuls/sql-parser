/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 2 "bison_parser.y"

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 108 "bison_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y"

// %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 171 "bison_parser.tab.c"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_INTEGER = 279,             /* INTEGER  */
    SQL_VECTOR = 280,              /* VECTOR  */
    SQL_SIMILAR = 281,             /* SIMILAR  */
    SQL_NATURAL = 282,             /* NATURAL  */
    SQL_PREPARE = 283,             /* PREPARE  */
    SQL_PRIMARY = 284,             /* PRIMARY  */
    SQL_SCHEMAS = 285,             /* SCHEMAS  */
    SQL_CHARACTER_VARYING = 286,   /* CHARACTER_VARYING  */
    SQL_REAL = 287,                /* REAL  */
    SQL_DECIMAL = 288,             /* DECIMAL  */
    SQL_SMALLINT = 289,            /* SMALLINT  */
    SQL_BIGINT = 290,              /* BIGINT  */
    SQL_SPATIAL = 291,             /* SPATIAL  */
    SQL_VARCHAR = 292,             /* VARCHAR  */
    SQL_VIRTUAL = 293,             /* VIRTUAL  */
    SQL_DESCRIBE = 294,            /* DESCRIBE  */
    SQL_BEFORE = 295,              /* BEFORE  */
    SQL_COLUMN = 296,              /* COLUMN  */
    SQL_CREATE = 297,              /* CREATE  */
    SQL_DELETE = 298,              /* DELETE  */
    SQL_DIRECT = 299,              /* DIRECT  */
    SQL_DOUBLE = 300,              /* DOUBLE  */
    SQL_ESCAPE = 301,              /* ESCAPE  */
    SQL_EXCEPT = 302,              /* EXCEPT  */
    SQL_EXISTS = 303,              /* EXISTS  */
    SQL_EXTRACT = 304,             /* EXTRACT  */
    SQL_CAST = 305,                /* CAST  */
    SQL_FORMAT = 306,              /* FORMAT  */
    SQL_GLOBAL = 307,              /* GLOBAL  */
    SQL_HAVING = 308,              /* HAVING  */
    SQL_IMPORT = 309,              /* IMPORT  */
    SQL_INSERT = 310,              /* INSERT  */
    SQL_ISNULL = 311,              /* ISNULL  */
    SQL_OFFSET = 312,              /* OFFSET  */
    SQL_RENAME = 313,              /* RENAME  */
    SQL_SCHEMA = 314,              /* SCHEMA  */
    SQL_SELECT = 315,              /* SELECT  */
    SQL_SORTED = 316,              /* SORTED  */
    SQL_TABLES = 317,              /* TABLES  */
    SQL_UNIQUE = 318,              /* UNIQUE  */
    SQL_UNLOAD = 319,              /* UNLOAD  */
    SQL_UPDATE = 320,              /* UPDATE  */
    SQL_VALUES = 321,              /* VALUES  */
    SQL_AFTER = 322,               /* AFTER  */
    SQL_ALTER = 323,               /* ALTER  */
    SQL_CROSS = 324,               /* CROSS  */
    SQL_DELTA = 325,               /* DELTA  */
    SQL_FLOAT = 326,               /* FLOAT  */
    SQL_GROUP = 327,               /* GROUP  */
    SQL_INDEX = 328,               /* INDEX  */
    SQL_INNER = 329,               /* INNER  */
    SQL_LIMIT = 330,               /* LIMIT  */
    SQL_LOCAL = 331,               /* LOCAL  */
    SQL_MERGE = 332,               /* MERGE  */
    SQL_MINUS = 333,               /* MINUS  */
    SQL_ORDER = 334,               /* ORDER  */
    SQL_OVER = 335,                /* OVER  */
    SQL_OUTER = 336,               /* OUTER  */
    SQL_RIGHT = 337,               /* RIGHT  */
    SQL_TABLE = 338,               /* TABLE  */
    SQL_UNION = 339,               /* UNION  */
    SQL_USING = 340,               /* USING  */
    SQL_WHERE = 341,               /* WHERE  */
    SQL_CALL = 342,                /* CALL  */
    SQL_CASE = 343,                /* CASE  */
    SQL_CHAR = 344,                /* CHAR  */
    SQL_COPY = 345,                /* COPY  */
    SQL_DATE = 346,                /* DATE  */
    SQL_DATETIME = 347,            /* DATETIME  */
    SQL_DESC = 348,                /* DESC  */
    SQL_DROP = 349,                /* DROP  */
    SQL_ELSE = 350,                /* ELSE  */
    SQL_FILE = 351,                /* FILE  */
    SQL_FROM = 352,                /* FROM  */
    SQL_FULL = 353,                /* FULL  */
    SQL_HASH = 354,                /* HASH  */
    SQL_HINT = 355,                /* HINT  */
    SQL_INTO = 356,                /* INTO  */
    SQL_JOIN = 357,                /* JOIN  */
    SQL_LEFT = 358,                /* LEFT  */
    SQL_LIKE = 359,                /* LIKE  */
    SQL_LOAD = 360,                /* LOAD  */
    SQL_LONG = 361,                /* LONG  */
    SQL_NULL = 362,                /* NULL  */
    SQL_PARTITION = 363,           /* PARTITION  */
    SQL_PLAN = 364,                /* PLAN  */
    SQL_SHOW = 365,                /* SHOW  */
    SQL_TEXT = 366,                /* TEXT  */
    SQL_THEN = 367,                /* THEN  */
    SQL_TIME = 368,                /* TIME  */
    SQL_VIEW = 369,                /* VIEW  */
    SQL_WHEN = 370,                /* WHEN  */
    SQL_WITH = 371,                /* WITH  */
    SQL_ADD = 372,                 /* ADD  */
    SQL_ALL = 373,                 /* ALL  */
    SQL_AND = 374,                 /* AND  */
    SQL_ASC = 375,                 /* ASC  */
    SQL_END = 376,                 /* END  */
    SQL_FOR = 377,                 /* FOR  */
    SQL_INT = 378,                 /* INT  */
    SQL_KEY = 379,                 /* KEY  */
    SQL_NOT = 380,                 /* NOT  */
    SQL_OFF = 381,                 /* OFF  */
    SQL_SET = 382,                 /* SET  */
    SQL_TOP = 383,                 /* TOP  */
    SQL_AS = 384,                  /* AS  */
    SQL_BY = 385,                  /* BY  */
    SQL_IF = 386,                  /* IF  */
    SQL_IN = 387,                  /* IN  */
    SQL_IS = 388,                  /* IS  */
    SQL_OF = 389,                  /* OF  */
    SQL_ON = 390,                  /* ON  */
    SQL_OR = 391,                  /* OR  */
    SQL_TO = 392,                  /* TO  */
    SQL_NO = 393,                  /* NO  */
    SQL_ARRAY = 394,               /* ARRAY  */
    SQL_CONCAT = 395,              /* CONCAT  */
    SQL_ILIKE = 396,               /* ILIKE  */
    SQL_SECOND = 397,              /* SECOND  */
    SQL_MINUTE = 398,              /* MINUTE  */
    SQL_HOUR = 399,                /* HOUR  */
    SQL_DAY = 400,                 /* DAY  */
    SQL_MONTH = 401,               /* MONTH  */
    SQL_YEAR = 402,                /* YEAR  */
    SQL_SECONDS = 403,             /* SECONDS  */
    SQL_MINUTES = 404,             /* MINUTES  */
    SQL_HOURS = 405,               /* HOURS  */
    SQL_DAYS = 406,                /* DAYS  */
    SQL_MONTHS = 407,              /* MONTHS  */
    SQL_YEARS = 408,               /* YEARS  */
    SQL_INTERVAL = 409,            /* INTERVAL  */
    SQL_TRUE = 410,                /* TRUE  */
    SQL_FALSE = 411,               /* FALSE  */
    SQL_BOOLEAN = 412,             /* BOOLEAN  */
    SQL_TRANSACTION = 413,         /* TRANSACTION  */
    SQL_BEGIN = 414,               /* BEGIN  */
    SQL_COMMIT = 415,              /* COMMIT  */
    SQL_ROLLBACK = 416,            /* ROLLBACK  */
    SQL_NOWAIT = 417,              /* NOWAIT  */
    SQL_SKIP = 418,                /* SKIP  */
    SQL_LOCKED = 419,              /* LOCKED  */
    SQL_SHARE = 420,               /* SHARE  */
    SQL_RANGE = 421,               /* RANGE  */
    SQL_ROWS = 422,                /* ROWS  */
    SQL_GROUPS = 423,              /* GROUPS  */
    SQL_UNBOUNDED = 424,           /* UNBOUNDED  */
    SQL_FOLLOWING = 425,           /* FOLLOWING  */
    SQL_PRECEDING = 426,           /* PRECEDING  */
    SQL_CURRENT_ROW = 427,         /* CURRENT_ROW  */
    SQL_EQUALS = 428,              /* EQUALS  */
    SQL_NOTEQUALS = 429,           /* NOTEQUALS  */
    SQL_LESS = 430,                /* LESS  */
    SQL_GREATER = 431,             /* GREATER  */
    SQL_LESSEQ = 432,              /* LESSEQ  */
    SQL_GREATEREQ = 433,           /* GREATEREQ  */
    SQL_NOTNULL = 434,             /* NOTNULL  */
    SQL_UMINUS = 435               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 96 "bison_parser.y"

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;
  float* qval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::SetStatement* set_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::FrameBound* frame_bound;
  hsql::FrameDescription* frame_description;
  hsql::FrameType frame_type;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::LockingClause* locking_t;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableElement* table_index_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WindowDescription* window_description;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::vector<float*>* query_vec;
  std::unordered_set<hsql::ConstraintType>* column_constraint_set;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableElement*>* table_index_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

#line 441 "bison_parser.tab.c"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif




int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_VECTOR = 25,                    /* VECTOR  */
  YYSYMBOL_SIMILAR = 26,                   /* SIMILAR  */
  YYSYMBOL_NATURAL = 27,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 28,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 29,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 30,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 31,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 32,                      /* REAL  */
  YYSYMBOL_DECIMAL = 33,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 34,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 35,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 36,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 37,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 38,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 39,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 40,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 41,                    /* COLUMN  */
  YYSYMBOL_CREATE = 42,                    /* CREATE  */
  YYSYMBOL_DELETE = 43,                    /* DELETE  */
  YYSYMBOL_DIRECT = 44,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 45,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 46,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 47,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 48,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 49,                   /* EXTRACT  */
  YYSYMBOL_CAST = 50,                      /* CAST  */
  YYSYMBOL_FORMAT = 51,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 52,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 53,                    /* HAVING  */
  YYSYMBOL_IMPORT = 54,                    /* IMPORT  */
  YYSYMBOL_INSERT = 55,                    /* INSERT  */
  YYSYMBOL_ISNULL = 56,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 57,                    /* OFFSET  */
  YYSYMBOL_RENAME = 58,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 59,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 60,                    /* SELECT  */
  YYSYMBOL_SORTED = 61,                    /* SORTED  */
  YYSYMBOL_TABLES = 62,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 63,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 64,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 65,                    /* UPDATE  */
  YYSYMBOL_VALUES = 66,                    /* VALUES  */
  YYSYMBOL_AFTER = 67,                     /* AFTER  */
  YYSYMBOL_ALTER = 68,                     /* ALTER  */
  YYSYMBOL_CROSS = 69,                     /* CROSS  */
  YYSYMBOL_DELTA = 70,                     /* DELTA  */
  YYSYMBOL_FLOAT = 71,                     /* FLOAT  */
  YYSYMBOL_GROUP = 72,                     /* GROUP  */
  YYSYMBOL_INDEX = 73,                     /* INDEX  */
  YYSYMBOL_INNER = 74,                     /* INNER  */
  YYSYMBOL_LIMIT = 75,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 76,                     /* LOCAL  */
  YYSYMBOL_MERGE = 77,                     /* MERGE  */
  YYSYMBOL_MINUS = 78,                     /* MINUS  */
  YYSYMBOL_ORDER = 79,                     /* ORDER  */
  YYSYMBOL_OVER = 80,                      /* OVER  */
  YYSYMBOL_OUTER = 81,                     /* OUTER  */
  YYSYMBOL_RIGHT = 82,                     /* RIGHT  */
  YYSYMBOL_TABLE = 83,                     /* TABLE  */
  YYSYMBOL_UNION = 84,                     /* UNION  */
  YYSYMBOL_USING = 85,                     /* USING  */
  YYSYMBOL_WHERE = 86,                     /* WHERE  */
  YYSYMBOL_CALL = 87,                      /* CALL  */
  YYSYMBOL_CASE = 88,                      /* CASE  */
  YYSYMBOL_CHAR = 89,                      /* CHAR  */
  YYSYMBOL_COPY = 90,                      /* COPY  */
  YYSYMBOL_DATE = 91,                      /* DATE  */
  YYSYMBOL_DATETIME = 92,                  /* DATETIME  */
  YYSYMBOL_DESC = 93,                      /* DESC  */
  YYSYMBOL_DROP = 94,                      /* DROP  */
  YYSYMBOL_ELSE = 95,                      /* ELSE  */
  YYSYMBOL_FILE = 96,                      /* FILE  */
  YYSYMBOL_FROM = 97,                      /* FROM  */
  YYSYMBOL_FULL = 98,                      /* FULL  */
  YYSYMBOL_HASH = 99,                      /* HASH  */
  YYSYMBOL_HINT = 100,                     /* HINT  */
  YYSYMBOL_INTO = 101,                     /* INTO  */
  YYSYMBOL_JOIN = 102,                     /* JOIN  */
  YYSYMBOL_LEFT = 103,                     /* LEFT  */
  YYSYMBOL_LIKE = 104,                     /* LIKE  */
  YYSYMBOL_LOAD = 105,                     /* LOAD  */
  YYSYMBOL_LONG = 106,                     /* LONG  */
  YYSYMBOL_NULL = 107,                     /* NULL  */
  YYSYMBOL_PARTITION = 108,                /* PARTITION  */
  YYSYMBOL_PLAN = 109,                     /* PLAN  */
  YYSYMBOL_SHOW = 110,                     /* SHOW  */
  YYSYMBOL_TEXT = 111,                     /* TEXT  */
  YYSYMBOL_THEN = 112,                     /* THEN  */
  YYSYMBOL_TIME = 113,                     /* TIME  */
  YYSYMBOL_VIEW = 114,                     /* VIEW  */
  YYSYMBOL_WHEN = 115,                     /* WHEN  */
  YYSYMBOL_WITH = 116,                     /* WITH  */
  YYSYMBOL_ADD = 117,                      /* ADD  */
  YYSYMBOL_ALL = 118,                      /* ALL  */
  YYSYMBOL_AND = 119,                      /* AND  */
  YYSYMBOL_ASC = 120,                      /* ASC  */
  YYSYMBOL_END = 121,                      /* END  */
  YYSYMBOL_FOR = 122,                      /* FOR  */
  YYSYMBOL_INT = 123,                      /* INT  */
  YYSYMBOL_KEY = 124,                      /* KEY  */
  YYSYMBOL_NOT = 125,                      /* NOT  */
  YYSYMBOL_OFF = 126,                      /* OFF  */
  YYSYMBOL_SET = 127,                      /* SET  */
  YYSYMBOL_TOP = 128,                      /* TOP  */
  YYSYMBOL_AS = 129,                       /* AS  */
  YYSYMBOL_BY = 130,                       /* BY  */
  YYSYMBOL_IF = 131,                       /* IF  */
  YYSYMBOL_IN = 132,                       /* IN  */
  YYSYMBOL_IS = 133,                       /* IS  */
  YYSYMBOL_OF = 134,                       /* OF  */
  YYSYMBOL_ON = 135,                       /* ON  */
  YYSYMBOL_OR = 136,                       /* OR  */
  YYSYMBOL_TO = 137,                       /* TO  */
  YYSYMBOL_NO = 138,                       /* NO  */
  YYSYMBOL_ARRAY = 139,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 140,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 141,                    /* ILIKE  */
  YYSYMBOL_SECOND = 142,                   /* SECOND  */
  YYSYMBOL_MINUTE = 143,                   /* MINUTE  */
  YYSYMBOL_HOUR = 144,                     /* HOUR  */
  YYSYMBOL_DAY = 145,                      /* DAY  */
  YYSYMBOL_MONTH = 146,                    /* MONTH  */
  YYSYMBOL_YEAR = 147,                     /* YEAR  */
  YYSYMBOL_SECONDS = 148,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 149,                  /* MINUTES  */
  YYSYMBOL_HOURS = 150,                    /* HOURS  */
  YYSYMBOL_DAYS = 151,                     /* DAYS  */
  YYSYMBOL_MONTHS = 152,                   /* MONTHS  */
  YYSYMBOL_YEARS = 153,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 154,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 155,                     /* TRUE  */
  YYSYMBOL_FALSE = 156,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 157,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 158,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 159,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 160,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 161,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 162,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 163,                     /* SKIP  */
  YYSYMBOL_LOCKED = 164,                   /* LOCKED  */
  YYSYMBOL_SHARE = 165,                    /* SHARE  */
  YYSYMBOL_RANGE = 166,                    /* RANGE  */
  YYSYMBOL_ROWS = 167,                     /* ROWS  */
  YYSYMBOL_GROUPS = 168,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 169,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 170,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 171,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 172,              /* CURRENT_ROW  */
  YYSYMBOL_173_ = 173,                     /* '='  */
  YYSYMBOL_EQUALS = 174,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 175,                /* NOTEQUALS  */
  YYSYMBOL_176_ = 176,                     /* '<'  */
  YYSYMBOL_177_ = 177,                     /* '>'  */
  YYSYMBOL_LESS = 178,                     /* LESS  */
  YYSYMBOL_GREATER = 179,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 180,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 181,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 182,                  /* NOTNULL  */
  YYSYMBOL_183_ = 183,                     /* '+'  */
  YYSYMBOL_184_ = 184,                     /* '-'  */
  YYSYMBOL_185_ = 185,                     /* '*'  */
  YYSYMBOL_186_ = 186,                     /* '/'  */
  YYSYMBOL_187_ = 187,                     /* '%'  */
  YYSYMBOL_188_ = 188,                     /* '^'  */
  YYSYMBOL_UMINUS = 189,                   /* UMINUS  */
  YYSYMBOL_190_ = 190,                     /* '['  */
  YYSYMBOL_191_ = 191,                     /* ']'  */
  YYSYMBOL_192_ = 192,                     /* '('  */
  YYSYMBOL_193_ = 193,                     /* ')'  */
  YYSYMBOL_194_ = 194,                     /* '.'  */
  YYSYMBOL_195_ = 195,                     /* ';'  */
  YYSYMBOL_196_ = 196,                     /* ','  */
  YYSYMBOL_197_ = 197,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 198,                 /* $accept  */
  YYSYMBOL_input = 199,                    /* input  */
  YYSYMBOL_statement_list = 200,           /* statement_list  */
  YYSYMBOL_statement = 201,                /* statement  */
  YYSYMBOL_preparable_statement = 202,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 203,                /* opt_hints  */
  YYSYMBOL_hint_list = 204,                /* hint_list  */
  YYSYMBOL_hint = 205,                     /* hint  */
  YYSYMBOL_transaction_statement = 206,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 207,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 208,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 209,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 210,        /* execute_statement  */
  YYSYMBOL_import_statement = 211,         /* import_statement  */
  YYSYMBOL_file_type = 212,                /* file_type  */
  YYSYMBOL_file_path = 213,                /* file_path  */
  YYSYMBOL_opt_file_type = 214,            /* opt_file_type  */
  YYSYMBOL_export_statement = 215,         /* export_statement  */
  YYSYMBOL_show_statement = 216,           /* show_statement  */
  YYSYMBOL_create_statement = 217,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 218,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 219,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 220,               /* table_elem  */
  YYSYMBOL_column_def = 221,               /* column_def  */
  YYSYMBOL_float_index_elem_commalist = 222, /* float_index_elem_commalist  */
  YYSYMBOL_float_index_elem = 223,         /* float_index_elem  */
  YYSYMBOL_column_type = 224,              /* column_type  */
  YYSYMBOL_opt_time_precision = 225,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 226, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 227,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 228,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 229,        /* column_constraint  */
  YYSYMBOL_table_constraint = 230,         /* table_constraint  */
  YYSYMBOL_drop_statement = 231,           /* drop_statement  */
  YYSYMBOL_opt_exists = 232,               /* opt_exists  */
  YYSYMBOL_alter_statement = 233,          /* alter_statement  */
  YYSYMBOL_alter_action = 234,             /* alter_action  */
  YYSYMBOL_drop_action = 235,              /* drop_action  */
  YYSYMBOL_delete_statement = 236,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 237,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 238,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 239,          /* opt_column_list  */
  YYSYMBOL_update_statement = 240,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 241,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 242,            /* update_clause  */
  YYSYMBOL_set_statement = 243,            /* set_statement  */
  YYSYMBOL_select_statement = 244,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 245, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 246, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 247,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 248,          /* select_no_paren  */
  YYSYMBOL_set_operator = 249,             /* set_operator  */
  YYSYMBOL_set_type = 250,                 /* set_type  */
  YYSYMBOL_opt_all = 251,                  /* opt_all  */
  YYSYMBOL_select_clause = 252,            /* select_clause  */
  YYSYMBOL_opt_distinct = 253,             /* opt_distinct  */
  YYSYMBOL_select_list = 254,              /* select_list  */
  YYSYMBOL_opt_from_clause = 255,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 256,              /* from_clause  */
  YYSYMBOL_opt_where = 257,                /* opt_where  */
  YYSYMBOL_opt_group = 258,                /* opt_group  */
  YYSYMBOL_opt_having = 259,               /* opt_having  */
  YYSYMBOL_opt_order = 260,                /* opt_order  */
  YYSYMBOL_query_list = 261,               /* query_list  */
  YYSYMBOL_query_item = 262,               /* query_item  */
  YYSYMBOL_order_list = 263,               /* order_list  */
  YYSYMBOL_order_desc = 264,               /* order_desc  */
  YYSYMBOL_opt_order_type = 265,           /* opt_order_type  */
  YYSYMBOL_opt_top = 266,                  /* opt_top  */
  YYSYMBOL_opt_limit = 267,                /* opt_limit  */
  YYSYMBOL_expr_list = 268,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 269,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 270,             /* literal_list  */
  YYSYMBOL_expr_alias = 271,               /* expr_alias  */
  YYSYMBOL_expr = 272,                     /* expr  */
  YYSYMBOL_operand = 273,                  /* operand  */
  YYSYMBOL_scalar_expr = 274,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 275,               /* unary_expr  */
  YYSYMBOL_binary_expr = 276,              /* binary_expr  */
  YYSYMBOL_logic_expr = 277,               /* logic_expr  */
  YYSYMBOL_in_expr = 278,                  /* in_expr  */
  YYSYMBOL_case_expr = 279,                /* case_expr  */
  YYSYMBOL_case_list = 280,                /* case_list  */
  YYSYMBOL_exists_expr = 281,              /* exists_expr  */
  YYSYMBOL_comp_expr = 282,                /* comp_expr  */
  YYSYMBOL_function_expr = 283,            /* function_expr  */
  YYSYMBOL_opt_window = 284,               /* opt_window  */
  YYSYMBOL_opt_partition = 285,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 286,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 287,               /* frame_type  */
  YYSYMBOL_frame_bound = 288,              /* frame_bound  */
  YYSYMBOL_extract_expr = 289,             /* extract_expr  */
  YYSYMBOL_cast_expr = 290,                /* cast_expr  */
  YYSYMBOL_datetime_field = 291,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 292,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 293,           /* duration_field  */
  YYSYMBOL_array_expr = 294,               /* array_expr  */
  YYSYMBOL_array_index = 295,              /* array_index  */
  YYSYMBOL_between_expr = 296,             /* between_expr  */
  YYSYMBOL_column_name = 297,              /* column_name  */
  YYSYMBOL_literal = 298,                  /* literal  */
  YYSYMBOL_vector_literal = 299,           /* vector_literal  */
  YYSYMBOL_string_literal = 300,           /* string_literal  */
  YYSYMBOL_bool_literal = 301,             /* bool_literal  */
  YYSYMBOL_num_literal = 302,              /* num_literal  */
  YYSYMBOL_int_literal = 303,              /* int_literal  */
  YYSYMBOL_null_literal = 304,             /* null_literal  */
  YYSYMBOL_date_literal = 305,             /* date_literal  */
  YYSYMBOL_interval_literal = 306,         /* interval_literal  */
  YYSYMBOL_param_expr = 307,               /* param_expr  */
  YYSYMBOL_table_ref = 308,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 309,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 310, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 311,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 312,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 313,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 314,               /* table_name  */
  YYSYMBOL_opt_index_name = 315,           /* opt_index_name  */
  YYSYMBOL_table_alias = 316,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 317,          /* opt_table_alias  */
  YYSYMBOL_alias = 318,                    /* alias  */
  YYSYMBOL_opt_alias = 319,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 320,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 321,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 322,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 323,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 324,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 325,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 326,              /* with_clause  */
  YYSYMBOL_with_description_list = 327,    /* with_description_list  */
  YYSYMBOL_with_description = 328,         /* with_description  */
  YYSYMBOL_join_clause = 329,              /* join_clause  */
  YYSYMBOL_opt_join_type = 330,            /* opt_join_type  */
  YYSYMBOL_join_condition = 331,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 332,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 333           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  198
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  644

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   435


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   187,     2,     2,
     192,   193,   185,   183,   196,   184,   194,   186,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   195,
     176,   173,   177,   197,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   190,     2,   191,   188,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   174,   175,
     178,   179,   180,   181,   182,   189
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   332,   332,   351,   357,   364,   368,   372,   373,   374,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   392,   393,   395,   399,   404,   408,   418,   419,   420,
     422,   422,   428,   434,   436,   440,   451,   457,   465,   480,
     485,   486,   492,   498,   509,   510,   515,   526,   539,   551,
     565,   578,   587,   588,   590,   594,   599,   600,   602,   609,
     613,   618,   621,   622,   623,   624,   625,   626,   627,   628,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   644,   645,   647,   648,   649,   651,   652,   654,   658,
     663,   664,   665,   666,   668,   669,   677,   683,   689,   695,
     701,   702,   709,   715,   717,   727,   734,   745,   752,   760,
     761,   768,   775,   779,   784,   794,   802,   806,   810,   822,
     822,   824,   825,   834,   835,   837,   851,   863,   868,   872,
     876,   881,   882,   884,   894,   895,   897,   899,   900,   902,
     904,   905,   907,   912,   914,   915,   917,   918,   922,   924,
     928,   933,   935,   939,   944,   946,   947,   948,   952,   953,
     955,   956,   957,   958,   959,   960,   965,   969,   974,   975,
     977,   981,   986,   994,   994,   994,   994,   994,   996,   997,
     997,   997,   997,   997,   997,   997,   997,   998,   998,  1002,
    1002,  1004,  1005,  1006,  1007,  1008,  1010,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1021,  1022,  1024,
    1025,  1026,  1027,  1031,  1032,  1033,  1034,  1036,  1037,  1039,
    1040,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1052,  1053,
    1057,  1058,  1060,  1061,  1066,  1067,  1068,  1072,  1073,  1074,
    1076,  1077,  1078,  1079,  1080,  1082,  1084,  1086,  1087,  1088,
    1089,  1090,  1091,  1093,  1094,  1095,  1096,  1097,  1098,  1100,
    1100,  1102,  1104,  1106,  1108,  1109,  1110,  1111,  1113,  1113,
    1113,  1113,  1113,  1113,  1113,  1113,  1115,  1117,  1119,  1120,
    1122,  1123,  1125,  1127,  1129,  1140,  1144,  1155,  1187,  1196,
    1196,  1203,  1203,  1205,  1205,  1212,  1216,  1221,  1229,  1235,
    1239,  1244,  1245,  1247,  1247,  1249,  1249,  1251,  1252,  1254,
    1254,  1260,  1261,  1263,  1267,  1272,  1278,  1285,  1286,  1287,
    1288,  1290,  1291,  1292,  1298,  1298,  1300,  1302,  1306,  1311,
    1321,  1328,  1336,  1360,  1361,  1362,  1363,  1364,  1365,  1366,
    1367,  1368,  1369,  1371,  1377,  1377,  1380,  1384
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "VECTOR", "SIMILAR", "NATURAL",
  "PREPARE", "PRIMARY", "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL",
  "SMALLINT", "BIGINT", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE",
  "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE",
  "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING",
  "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT",
  "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER",
  "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT",
  "LOCAL", "MERGE", "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE",
  "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE",
  "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH",
  "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL",
  "PARTITION", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT",
  "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR",
  "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS",
  "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE",
  "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def",
  "float_index_elem_commalist", "float_index_elem", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "set_statement",
  "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "query_list", "query_item", "order_list", "order_desc", "opt_order_type",
  "opt_top", "opt_limit", "expr_list", "opt_literal_list", "literal_list",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "opt_window",
  "opt_partition", "opt_frame_clause", "frame_type", "frame_bound",
  "extract_expr", "cast_expr", "datetime_field", "datetime_field_plural",
  "duration_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "vector_literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_locking_clause", "opt_locking_clause_list", "locking_clause",
  "row_lock_mode", "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-562)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-345)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     690,    27,    90,   100,   158,    90,    -4,    68,    88,   110,
      90,   135,    20,     0,    29,   222,   234,    82,    82,    82,
     244,    80,  -562,   150,  -562,   150,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,   -23,
    -562,   279,   113,  -562,   123,   229,  -562,   205,   205,   205,
      90,   335,    90,   213,  -562,   225,   -23,   232,    22,   225,
     225,   225,    90,  -562,   237,   185,  -562,   204,  -562,  -562,
    -562,  -562,  -562,   685,  -562,   305,  -562,  -562,   285,   144,
    -562,   188,  -562,   412,    60,   415,   302,   293,    90,    90,
     351,  -562,   333,   247,   437,   393,    90,   249,   250,   440,
     440,   440,   442,    90,    90,  -562,   254,   222,   446,  -562,
     259,   451,   449,  -562,  -562,  -562,   -23,   334,   328,   -23,
     124,  -562,  -562,  -562,  -562,   460,   461,  -562,   470,  -562,
    -562,  -562,   283,   281,  -562,  -562,  -562,  -562,  -562,   433,
    -562,  -562,  -562,  -562,  -562,  -562,   430,    90,   -43,   247,
     368,  -562,   440,   477,    47,   308,   -44,  -562,  -562,   391,
    -562,  -562,   370,  -562,   370,   370,  -562,  -562,  -562,  -562,
    -562,   295,   487,  -562,  -562,   368,   416,  -562,  -562,   144,
    -562,  -562,   372,   416,   368,   138,   376,  -562,  -562,   289,
    -562,    60,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,   414,   497,
     385,    46,   373,    58,   311,   312,   313,   173,   467,   316,
     463,  -562,   299,   140,   503,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,   407,  -562,  -116,   317,  -562,   368,   437,  -562,   469,
    -562,  -562,   468,  -562,   351,  -562,   510,   326,   -21,  -562,
     424,   329,  -562,    35,   124,   -23,   504,   336,  -562,   154,
     124,   140,   476,    81,   -18,  -562,   376,  -562,  -562,  -562,
     533,   447,  -562,   791,   421,   355,    50,  -562,  -562,  -562,
     385,    13,    17,   486,   289,   368,   368,   143,   -39,   356,
     463,   753,   368,   131,   357,   -76,   368,   368,   463,  -562,
     463,    76,   369,    94,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   463,   451,
      90,  -562,   546,    60,   140,  -562,   225,   335,  -562,   389,
      60,  -562,   487,    21,   351,  -562,   368,  -562,   560,  -562,
    -562,  -562,  -562,   563,   368,  -562,  -562,  -562,   376,   368,
     368,  -562,   402,   444,  -562,   147,  -562,  -562,   379,   440,
    -562,  -562,   380,   381,  -562,   395,  -562,  -562,   397,  -562,
    -562,   398,  -562,  -562,  -562,  -562,   399,  -562,  -562,   126,
     401,   477,  -562,    46,  -562,   514,   368,  -562,  -562,   403,
     498,   170,   -62,    45,   368,   368,  -562,   486,   493,   129,
    -562,  -562,  -562,   479,   735,   809,   463,   408,   299,  -562,
     492,   411,   809,   809,   809,   809,   354,   354,   354,   354,
     131,   131,    44,    44,    44,   -88,   413,  -562,  -562,   118,
     600,  -562,   599,   141,  -562,   385,  -562,   167,  -562,   417,
    -562,    41,  -562,   536,  -562,  -562,   418,  -562,  -562,   140,
     140,  -562,   544,   477,  -562,   448,  -562,   477,  -562,   605,
     608,   609,  -562,   610,   614,   618,  -562,   501,  -562,  -562,
     519,  -562,   126,  -562,   477,   146,  -562,   435,  -562,   186,
    -562,   368,   791,   368,   368,  -562,   164,    71,   436,  -562,
     463,   809,   299,   438,   187,  -562,  -562,  -562,  -562,  -562,
    -562,   439,   528,  -562,  -562,  -562,   552,   553,   556,   537,
      21,   635,  -562,  -562,  -562,   511,  -562,   634,  -562,  -104,
    -562,   198,   452,   453,   199,   456,   457,   464,  -562,  -562,
    -562,   206,  -562,   534,   514,   -35,   465,   140,   165,  -562,
     368,  -562,   753,   472,   211,  -562,  -562,    41,    21,  -562,
    -562,  -562,    21,   286,   462,   368,   473,  -562,   540,  -562,
    -562,  -562,   647,  -562,  -562,  -562,  -562,   531,   416,  -562,
    -562,  -562,  -562,   140,  -562,  -562,  -562,  -562,   327,   477,
     -22,   656,   471,   474,   368,   184,   478,   368,   218,   368,
    -562,   664,   666,  -562,   329,  -562,  -562,  -562,   480,    23,
      18,   140,  -562,  -562,   140,  -562,   475,  -562,   499,   230,
    -562,  -562,   125,    24,   162,  -562,  -562,   481,   488,   664,
     668,  -562,   666,  -562,  -562,   575,  -562,  -562,  -562,  -562,
    -562,  -562,    24,  -562
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    31,    31,
       0,   345,     3,    22,    19,    22,    18,     8,     9,     7,
      11,    16,    17,    13,    14,    12,    15,    20,    10,     0,
     324,     0,   299,   106,    34,     0,    46,    53,    53,    53,
       0,     0,     0,     0,   298,   101,     0,     0,     0,   101,
     101,   101,     0,    44,     0,   326,   327,     0,    30,    27,
      29,    28,     1,   325,     2,     0,     6,     5,   159,   116,
     117,   148,    98,     0,   169,     0,     0,     0,     0,     0,
     141,    38,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     4,
       0,     0,   135,   129,   130,   128,     0,   132,     0,     0,
     165,   300,   277,   280,   282,     0,     0,   283,     0,   278,
     279,   288,     0,   168,   170,   268,   269,   270,   271,   281,
     272,   273,   274,   275,    33,    32,     0,     0,     0,   110,
       0,   105,     0,     0,     0,     0,   141,   112,   100,     0,
     124,   123,    41,    39,    41,    41,    99,    96,    97,   329,
     328,     0,     0,   158,   134,     0,   148,   120,   119,   121,
     131,   127,     0,   148,     0,     0,   312,   276,   284,   287,
      35,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   285,    52,     0,     0,
     325,     0,     0,   264,     0,     0,     0,     0,     0,     0,
       0,   266,     0,   140,   173,   180,   181,   182,   175,   177,
     183,   176,   196,   184,   185,   186,   187,   179,   174,   189,
     190,     0,   346,     0,     0,   108,     0,     0,   111,     0,
     102,   103,     0,    43,   141,    42,     0,    25,     0,    23,
     138,   136,   166,   310,   165,     0,   277,   146,   152,   157,
     165,   161,   163,   160,     0,   125,   311,   313,   286,   171,
     302,     0,    49,     0,     0,     0,     0,    54,    56,    57,
     325,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,   191,     0,     0,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,   114,   113,   101,     0,    37,     0,
       0,    21,     0,     0,   141,   137,     0,   308,     0,   309,
     172,   118,   122,     0,     0,   156,   155,   154,   312,     0,
       0,   317,     0,     0,   319,   323,   314,   301,     0,     0,
      79,    73,     0,     0,    75,    85,    76,    62,     0,    70,
      71,     0,    67,    68,    74,    77,    82,    72,    63,    87,
       0,     0,    48,     0,    51,   231,     0,   265,   267,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
     188,   178,   207,   208,     0,   203,     0,     0,     0,   194,
       0,   206,   205,   221,   222,   223,   224,   225,   226,   227,
     198,   197,   200,   199,   201,   202,     0,    36,   347,     0,
       0,    40,     0,     0,    24,   325,   139,   289,   291,     0,
     293,   306,   292,   143,   167,   307,     0,   153,   126,   164,
     162,   320,     0,     0,   322,     0,   315,     0,    47,     0,
       0,     0,    69,     0,     0,     0,    78,     0,    91,    92,
       0,    58,    86,    88,     0,     0,    55,     0,   228,     0,
     219,     0,     0,     0,     0,   213,     0,     0,     0,   261,
       0,   204,     0,     0,     0,   195,   262,   107,   104,   115,
      26,     0,     0,   341,   333,   339,   337,   340,   335,     0,
       0,     0,   305,   297,   303,     0,   133,     0,   318,   323,
     321,     0,     0,     0,     0,     0,     0,     0,    90,    93,
      89,     0,    95,   233,   231,     0,     0,   217,     0,   216,
       0,   220,   263,     0,     0,   211,   209,   306,     0,   336,
     338,   334,     0,   290,   307,     0,     0,   316,     0,    66,
      65,    84,     0,    80,    64,    81,    94,     0,   148,   229,
     245,   246,   214,   218,   212,   210,   294,   330,   342,     0,
     145,     0,     0,     0,     0,   236,     0,     0,     0,     0,
     142,     0,     0,    83,   232,   237,   238,   239,     0,     0,
       0,   343,   331,   304,   144,   151,   147,   150,     0,     0,
      59,   230,     0,     0,     0,   244,   234,   264,     0,     0,
       0,    50,     0,   243,   241,     0,   242,   240,   332,   149,
      61,    60,     0,   235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -562,  -562,  -562,   622,  -562,   657,  -562,   359,  -562,   343,
    -562,  -562,  -562,  -562,   361,   -91,   181,  -562,  -562,  -562,
     337,  -562,   303,  -562,  -562,    67,   210,  -562,  -562,  -562,
    -562,   221,  -562,  -562,   -45,  -562,  -562,  -562,  -562,  -562,
    -562,   555,  -562,  -562,   459,  -562,  -203,   -92,  -562,    56,
     -54,   -40,  -562,  -562,   -83,   419,  -562,  -562,  -562,  -117,
    -562,  -562,  -175,  -562,    79,  -562,   360,  -562,  -562,   -33,
    -297,  -562,  -262,   363,  -150,  -192,  -562,  -562,  -562,  -562,
    -562,  -562,   420,  -562,  -562,  -562,   171,  -562,  -562,  -562,
    -561,  -562,  -562,  -144,  -562,  -562,  -562,  -562,  -562,   101,
     -80,  -562,   -82,  -562,  -562,   -99,  -562,  -562,  -562,  -562,
    -562,  -474,   161,  -562,  -562,  -562,     1,  -562,  -562,   159,
     458,  -562,   362,  -562,   450,  -562,   193,  -562,  -562,  -562,
     616,  -562,  -562,  -562,  -562,  -369
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    20,    21,    22,    23,    76,   258,   259,    24,    69,
      25,   145,    26,    27,    92,   162,   253,    28,    29,    30,
      87,   286,   287,   288,   619,   620,   389,   476,   472,   481,
     482,   483,   289,    31,    96,    32,   250,   251,    33,    34,
      35,   154,    36,   156,   157,    37,    38,   176,   177,   178,
      80,   116,   117,   181,    81,   175,   260,   344,   345,   151,
     526,   600,   120,   616,   617,   267,   268,   357,   112,   186,
     261,   132,   133,   262,   263,   224,   225,   226,   227,   228,
     229,   230,   298,   231,   232,   233,   488,   578,   608,   609,
     626,   234,   235,   204,   205,   206,   236,   237,   238,   239,
     240,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     446,   447,   448,   449,   450,    53,   451,   368,   522,   523,
     524,   350,   275,   276,   277,   365,   466,    39,    40,    65,
      66,   452,   519,   612,    74,   243
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     223,   264,    98,    43,   134,   409,    46,   282,   270,   164,
     165,    54,   173,    58,   102,   103,   104,   163,   163,   163,
     397,   627,   485,    42,    42,   174,   301,   183,   303,   622,
     622,   599,   269,   179,   271,   273,   179,    78,   347,   248,
     623,   119,   150,   306,   347,   278,   563,   361,    62,   283,
     493,    90,   314,    93,   209,    41,   404,   306,   464,   465,
     307,   241,   635,   105,   122,   123,   124,   297,    57,    47,
     163,   439,   305,    59,   307,   284,   405,   331,   443,    48,
     332,   643,   406,    60,   306,   125,   210,   394,   588,   148,
     149,    63,   332,    42,   529,    79,   334,   159,   531,   489,
     245,   307,   329,    44,   167,   168,   362,    78,   301,   285,
      49,   279,    97,   244,    61,   541,   414,   411,   415,   100,
     363,   504,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   338,   360,   265,
     494,   213,   122,   123,   124,   401,   402,   364,   208,   211,
     400,   126,   247,   113,   306,   477,   412,   413,   580,   101,
     405,    45,   169,   125,   348,    50,   495,   127,   304,    56,
     521,   307,   341,   352,   346,   342,   213,   122,   123,   124,
     416,   184,   179,   550,   314,    51,   214,   215,   216,   478,
     306,   114,   624,   624,   512,   625,   625,   113,   125,   185,
     306,   419,   398,   221,   269,   554,   395,   307,   417,   459,
     460,    52,    56,   445,   128,   129,   130,   307,    55,   420,
     598,   214,   215,   216,   501,    64,   217,   453,   115,   126,
     436,   351,   328,   479,   329,   114,   513,   358,    67,   399,
      68,   514,   511,   392,    72,   127,   393,   355,   515,   516,
     291,   480,   292,   134,   496,   497,   272,   131,   296,   306,
     134,   217,   306,   218,   126,   517,    75,   118,   590,  -342,
     518,   314,   115,   306,   356,    73,   307,   219,   468,   307,
     127,   463,    82,   306,   306,   549,   582,   163,   296,   306,
     307,   440,   128,   129,   130,   633,   634,   604,   218,   492,
     307,   307,   213,   122,   123,   124,   307,    83,   552,   464,
     465,   507,   219,   512,   191,    84,   325,   326,   327,   328,
     499,   329,   220,   221,   125,   346,    85,   128,   129,   130,
     222,   437,   636,   637,   510,   131,    86,   191,    91,   542,
      94,   545,   332,   547,   548,   254,   255,   214,   215,   216,
     605,   606,   607,   498,   512,   513,    95,   220,   221,    78,
     514,    70,    71,  -295,   503,   222,   106,   515,   516,    99,
     131,   213,   122,   123,   124,   213,   266,   123,   124,   544,
     556,   107,   346,   346,   517,    88,    89,   217,  -342,   518,
     126,   568,   571,   125,   332,   572,   513,   125,   108,   576,
     583,   514,   332,   595,   585,   110,   127,   346,   515,   516,
     309,   613,   596,   111,   332,   121,   214,   215,   216,   144,
     214,   215,   216,   631,   218,   517,   632,   146,   147,   152,
     518,   192,   193,   194,   195,   196,   197,   150,   219,   153,
     155,   158,   160,   161,   122,   166,    56,   611,   553,   614,
     171,   172,   180,   128,   129,   130,   217,   124,   182,   126,
     217,   174,   597,   126,   187,   188,   213,   122,   123,   124,
     213,   122,   123,   124,   189,   127,   190,   191,   207,   127,
     242,   246,  -296,   220,   221,   249,   252,   313,   125,   256,
     257,   222,   125,   218,   314,   118,   131,   218,   274,   280,
     281,    15,   290,   293,   294,   295,   302,   219,   330,   333,
     336,   219,   215,   216,   339,   299,   215,   216,   340,   337,
     308,   343,   128,   129,   130,   346,   128,   129,   130,   353,
    -345,  -345,   354,   359,  -345,  -345,   367,   323,   324,   325,
     326,   327,   328,   369,   329,   390,    78,   391,   407,   438,
     410,   217,   220,   221,   126,   217,   220,   221,   126,   309,
     222,   418,   442,   455,   222,   131,   456,   461,   462,   131,
     127,   467,   469,   470,   127,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   471,   300,   473,
     474,   475,   300,   484,   487,   491,   490,   416,   306,   505,
     502,   329,   219,   508,   506,   509,   219,   310,   525,   528,
     527,   532,   530,   520,   533,   534,   535,   128,   129,   130,
     536,   128,   129,   130,   537,   538,   539,   543,   311,   551,
     558,   555,   557,   559,   560,   312,   313,   561,   564,   562,
     566,   565,   577,   314,   315,   569,   570,   220,   221,   573,
     574,   220,   221,   593,   589,   222,   592,   575,   581,   222,
     131,   594,   601,   602,   131,   584,   591,   603,   615,   618,
     610,   629,   630,   621,   640,   292,   316,   317,   318,   319,
     320,   638,    77,   321,   322,  -344,   323,   324,   325,   326,
     327,   328,     1,   329,   642,   109,   486,     1,   441,   641,
       2,   444,   546,   540,   212,     2,   335,     3,   639,   454,
     396,   628,     3,     4,   457,   579,   586,   403,     4,   587,
     458,   349,   567,   170,     5,     0,   366,     6,     7,     5,
       0,     0,     6,     7,     0,     0,     0,     0,     0,     8,
       9,     0,     0,     0,     8,     9,     0,     0,     0,     0,
      10,     0,     0,    11,     0,    10,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    13,
      12,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,   309,     0,     0,     0,    14,     0,     0,     0,     0,
      14,    15,   370,     0,     0,     0,    15,     0,     0,   309,
       0,     0,    16,     0,     0,   371,   372,    16,     0,     0,
       0,     0,   373,   374,   375,   376,   377,     0,   378,     0,
       0,     0,     0,     0,     0,     0,   379,     0,     0,   310,
       0,     0,     0,     0,    17,    18,    19,     0,     0,    17,
      18,    19,     0,     0,   500,     0,     0,   310,     0,     0,
     408,     0,   380,     0,     0,   309,     0,     0,   313,     0,
       0,     0,     0,     0,     0,   314,   315,     0,   408,     0,
     381,     0,   382,   383,     0,     0,   313,     0,     0,     0,
       0,     0,     0,   314,   315,     0,     0,   384,     0,     0,
       0,     0,   385,     0,   386,     0,     0,     0,   316,   317,
     318,   319,   320,  -345,   387,   321,   322,     0,   323,   324,
     325,   326,   327,   328,     0,   329,   316,   317,   318,   319,
     320,     0,     0,   321,   322,     0,   323,   324,   325,   326,
     327,   328,   313,   329,     0,     0,     0,     0,   388,   314,
    -345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -345,  -345,  -345,   319,   320,     0,     0,   321,
     322,     0,   323,   324,   325,   326,   327,   328,     0,   329
};

static const yytype_int16 yycheck[] =
{
     150,   176,    56,     2,    84,   302,     5,   210,   183,   100,
     101,    10,   111,    12,    59,    60,    61,    99,   100,   101,
       3,     3,   391,     3,     3,    12,   218,   119,   220,     6,
       6,    53,   182,   116,   184,   185,   119,    60,     3,   156,
      17,    81,    86,   119,     3,   189,   520,    65,    19,     3,
     112,    50,   140,    52,    97,    28,    95,   119,   162,   163,
     136,   152,   623,    62,     4,     5,     6,   217,    12,    73,
     152,   333,   222,    73,   136,    29,   115,   193,   340,    83,
     196,   642,   121,    83,   119,    25,   129,   290,   562,    88,
      89,    62,   196,     3,   463,    39,   246,    96,   467,   396,
     154,   136,   190,     3,   103,   104,   124,    60,   300,    63,
     114,   191,    56,    66,   114,   484,   308,   193,   310,    97,
     138,   418,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   254,    57,   179,
      95,     3,     4,     5,     6,   295,   296,   165,   147,   192,
     294,    91,   196,     9,   119,    29,   306,   307,   193,   137,
     115,     3,   106,    25,   129,    97,   121,   107,   222,   192,
     129,   136,   193,   265,   196,   196,     3,     4,     5,     6,
     104,    57,   265,   112,   140,    97,    48,    49,    50,    63,
     119,    47,   169,   169,    27,   172,   172,     9,    25,    75,
     119,   107,   185,   185,   354,   502,   193,   136,   132,   359,
     360,   101,   192,   192,   154,   155,   156,   136,    83,   125,
     589,    48,    49,    50,   416,     3,    88,   344,    84,    91,
     329,   264,   188,   107,   190,    47,    69,   270,     4,   293,
     158,    74,   445,   193,     0,   107,   196,    93,    81,    82,
     192,   125,   194,   333,   404,   405,   118,   197,   115,   119,
     340,    88,   119,   125,    91,    98,   116,    79,   565,   102,
     103,   140,    84,   119,   120,   195,   136,   139,   369,   136,
     107,   134,     3,   119,   119,   121,   121,   369,   115,   119,
     136,   336,   154,   155,   156,   170,   171,   594,   125,   129,
     136,   136,     3,     4,     5,     6,   136,   194,   500,   162,
     163,   193,   139,    27,   196,   192,   185,   186,   187,   188,
     191,   190,   184,   185,    25,   196,    97,   154,   155,   156,
     192,   330,   170,   171,   193,   197,   131,   196,     3,   193,
     127,   491,   196,   493,   494,   164,   165,    48,    49,    50,
     166,   167,   168,   407,    27,    69,   131,   184,   185,    60,
      74,    18,    19,   196,   418,   192,   129,    81,    82,   137,
     197,     3,     4,     5,     6,     3,     4,     5,     6,   193,
     193,   196,   196,   196,    98,    48,    49,    88,   102,   103,
      91,   193,   193,    25,   196,   196,    69,    25,   194,   193,
     550,    74,   196,   578,   193,   100,   107,   196,    81,    82,
      56,   193,    85,   128,   196,     3,    48,    49,    50,     4,
      48,    49,    50,   193,   125,    98,   196,   125,   135,    96,
     103,   142,   143,   144,   145,   146,   147,    86,   139,   192,
       3,    48,   193,   193,     4,     3,   192,   597,   502,   599,
       4,   192,   118,   154,   155,   156,    88,     6,   130,    91,
      88,    12,   135,    91,     4,     4,     3,     4,     5,     6,
       3,     4,     5,     6,     4,   107,   193,   196,    48,   107,
       3,   173,   196,   184,   185,    94,   116,   133,    25,   194,
       3,   192,    25,   125,   140,    79,   197,   125,   122,    85,
       3,   116,   129,   192,   192,   192,   190,   139,   101,   192,
      41,   139,    49,    50,     4,    48,    49,    50,   192,    51,
      17,    97,   154,   155,   156,   196,   154,   155,   156,    25,
     176,   177,   196,    57,   180,   181,     3,   183,   184,   185,
     186,   187,   188,    96,   190,   124,    60,   192,   192,     3,
     193,    88,   184,   185,    91,    88,   184,   185,    91,    56,
     192,   192,   173,     3,   192,   197,     3,   165,   124,   197,
     107,   192,   192,   192,   107,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   192,   125,   192,
     192,   192,   125,   192,    80,    97,   193,   104,   119,   107,
     192,   190,   139,     3,   191,     6,   139,   104,    72,    65,
     192,     6,   164,   196,     6,     6,     6,   154,   155,   156,
       6,   154,   155,   156,     6,   124,   107,   192,   125,   193,
     102,   193,   193,    81,    81,   132,   133,    81,     3,   102,
       6,   130,   108,   140,   141,   193,   193,   184,   185,   193,
     193,   184,   185,     6,   192,   192,   116,   193,   193,   192,
     197,   130,     6,   192,   197,   193,   193,   193,     4,     3,
     192,   196,   173,   193,     6,   194,   173,   174,   175,   176,
     177,   193,    25,   180,   181,     0,   183,   184,   185,   186,
     187,   188,     7,   190,   119,    73,   393,     7,   337,   632,
      15,   342,   492,   482,   149,    15,   247,    22,   629,   346,
     291,   610,    22,    28,   354,   544,   557,   297,    28,   558,
     358,   263,   529,   107,    39,    -1,   276,    42,    43,    39,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    68,    -1,    65,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
     110,   116,    11,    -1,    -1,    -1,   116,    -1,    -1,    56,
      -1,    -1,   127,    -1,    -1,    24,    25,   127,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   159,   160,   161,    -1,    -1,   159,
     160,   161,    -1,    -1,   119,    -1,    -1,   104,    -1,    -1,
     125,    -1,    71,    -1,    -1,    56,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   125,    -1,
      89,    -1,    91,    92,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,   113,    -1,    -1,    -1,   173,   174,
     175,   176,   177,   104,   123,   180,   181,    -1,   183,   184,
     185,   186,   187,   188,    -1,   190,   173,   174,   175,   176,
     177,    -1,    -1,   180,   181,    -1,   183,   184,   185,   186,
     187,   188,   133,   190,    -1,    -1,    -1,    -1,   157,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,   174,   175,   176,   177,    -1,    -1,   180,
     181,    -1,   183,   184,   185,   186,   187,   188,    -1,   190
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    28,    39,    42,    43,    54,    55,
      65,    68,    90,    94,   110,   116,   127,   159,   160,   161,
     199,   200,   201,   202,   206,   208,   210,   211,   215,   216,
     217,   231,   233,   236,   237,   238,   240,   243,   244,   325,
     326,    28,     3,   314,     3,     3,   314,    73,    83,   114,
      97,    97,   101,   313,   314,    83,   192,   247,   314,    73,
      83,   114,    19,    62,     3,   327,   328,     4,   158,   207,
     207,   207,     0,   195,   332,   116,   203,   203,    60,   247,
     248,   252,     3,   194,   192,    97,   131,   218,   218,   218,
     314,     3,   212,   314,   127,   131,   232,   247,   248,   137,
      97,   137,   232,   232,   232,   314,   129,   196,   194,   201,
     100,   128,   266,     9,    47,    84,   249,   250,    79,   249,
     260,     3,     4,     5,     6,    25,    91,   107,   154,   155,
     156,   197,   269,   270,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,     4,   209,   125,   135,   314,   314,
      86,   257,    96,   192,   239,     3,   241,   242,    48,   314,
     193,   193,   213,   300,   213,   213,     3,   314,   314,   247,
     328,     4,   192,   303,    12,   253,   245,   246,   247,   252,
     118,   251,   130,   245,    57,    75,   267,     4,     4,     4,
     193,   196,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   291,   292,   293,    48,   314,    97,
     129,   192,   239,     3,    48,    49,    50,    88,   125,   139,
     184,   185,   192,   272,   273,   274,   275,   276,   277,   278,
     279,   281,   282,   283,   289,   290,   294,   295,   296,   297,
     298,   213,     3,   333,    66,   248,   173,   196,   257,    94,
     234,   235,   116,   214,   214,   214,   194,     3,   204,   205,
     254,   268,   271,   272,   260,   249,     4,   263,   264,   272,
     260,   272,   118,   272,   122,   320,   321,   322,   291,   298,
      85,     3,   244,     3,    29,    63,   219,   220,   221,   230,
     129,   192,   194,   192,   192,   192,   115,   272,   280,    48,
     125,   273,   190,   273,   248,   272,   119,   136,    17,    56,
     104,   125,   132,   133,   140,   141,   173,   174,   175,   176,
     177,   180,   181,   183,   184,   185,   186,   187,   188,   190,
     101,   193,   196,   192,   272,   242,    41,    51,   257,     4,
     192,   193,   196,    97,   255,   256,   196,     3,   129,   318,
     319,   267,   245,    25,   196,    93,   120,   265,   267,    57,
      57,    65,   124,   138,   165,   323,   322,     3,   315,    96,
      11,    24,    25,    31,    32,    33,    34,    35,    37,    45,
      71,    89,    91,    92,   106,   111,   113,   123,   157,   224,
     124,   192,   193,   196,   244,   193,   253,     3,   185,   248,
     291,   272,   272,   280,    95,   115,   121,   192,   125,   268,
     193,   193,   272,   272,   273,   273,   104,   132,   192,   107,
     125,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   303,   314,     3,   270,
     232,   212,   173,   270,   205,   192,   308,   309,   310,   311,
     312,   314,   329,   257,   271,     3,     3,   264,   320,   272,
     272,   165,   124,   134,   162,   163,   324,   192,   213,   192,
     192,   192,   226,   192,   192,   192,   225,    29,    63,   107,
     125,   227,   228,   229,   192,   333,   220,    80,   284,   268,
     193,    97,   129,   112,    95,   121,   272,   272,   248,   191,
     119,   273,   192,   248,   268,   107,   191,   193,     3,     6,
     193,   244,    27,    69,    74,    81,    82,    98,   103,   330,
     196,   129,   316,   317,   318,    72,   258,   192,    65,   333,
     164,   333,     6,     6,     6,     6,     6,     6,   124,   107,
     229,   333,   193,   192,   193,   272,   224,   272,   272,   121,
     112,   193,   273,   248,   268,   193,   193,   193,   102,    81,
      81,    81,   102,   309,     3,   130,     6,   324,   193,   193,
     193,   193,   196,   193,   193,   193,   193,   108,   285,   284,
     193,   193,   121,   272,   193,   193,   317,   310,   309,   192,
     268,   193,   116,     6,   130,   260,    85,   135,   333,    53,
     259,     6,   192,   193,   268,   166,   167,   168,   286,   287,
     192,   272,   331,   193,   272,     4,   261,   262,     3,   222,
     223,   193,     6,    17,   169,   172,   288,     3,   297,   196,
     173,   193,   196,   170,   171,   288,   170,   171,   193,   262,
       6,   223,   119,   288
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   198,   199,   200,   200,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   206,
     207,   207,   208,   209,   210,   210,   211,   211,   212,   213,
     214,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     217,   217,   218,   218,   219,   219,   220,   220,   221,   222,
     222,   223,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   225,   225,   226,   226,   226,   227,   227,   228,   228,
     229,   229,   229,   229,   230,   230,   231,   231,   231,   231,
     232,   232,   233,   234,   235,   236,   237,   238,   238,   239,
     239,   240,   241,   241,   242,   243,   244,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   250,   250,
     250,   251,   251,   252,   253,   253,   254,   255,   255,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   260,   261,
     261,   262,   263,   263,   264,   265,   265,   265,   266,   266,
     267,   267,   267,   267,   267,   267,   268,   268,   269,   269,
     270,   270,   271,   272,   272,   272,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   277,   277,   278,
     278,   278,   278,   279,   279,   279,   279,   280,   280,   281,
     281,   282,   282,   282,   282,   282,   282,   282,   283,   283,
     284,   284,   285,   285,   286,   286,   286,   287,   287,   287,
     288,   288,   288,   288,   288,   289,   290,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   293,
     293,   294,   295,   296,   297,   297,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   299,   300,   301,   301,
     302,   302,   303,   304,   305,   306,   306,   306,   307,   308,
     308,   309,   309,   310,   310,   311,   311,   312,   313,   314,
     314,   315,   315,   316,   316,   317,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   323,   323,
     323,   324,   324,   324,   325,   325,   326,   327,   327,   328,
     329,   329,   329,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   331,   332,   332,   333,   333
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     3,     1,     4,     2,     2,     2,
       1,     0,     4,     1,     2,     5,     7,     6,     1,     1,
       3,     0,     5,     5,     2,     3,     2,     8,     7,     6,
      14,     7,     3,     0,     1,     3,     1,     1,     3,     1,
       3,     3,     1,     1,     4,     4,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     0,     5,     3,     0,     1,     0,     1,     2,
       2,     1,     1,     2,     5,     4,     4,     4,     3,     4,
       2,     0,     5,     1,     4,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     8,     2,     2,     6,     1,
       1,     1,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,    10,     0,     3,
       1,     1,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       6,     0,     3,     0,     2,     5,     0,     1,     1,     1,
       2,     2,     2,     2,     1,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     0,     1,     5,     1,     0,     2,     1,     1,
       0,     1,     0,     1,     2,     3,     5,     1,     3,     1,
       2,     2,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 186 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2453 "bison_parser.tab.c"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 186 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2459 "bison_parser.tab.c"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 173 "bison_parser.y"
                { }
#line 2465 "bison_parser.tab.c"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 173 "bison_parser.y"
                { }
#line 2471 "bison_parser.tab.c"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).stmt_vec)) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2484 "bison_parser.tab.c"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2490 "bison_parser.tab.c"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2496 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2509 "bison_parser.tab.c"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2522 "bison_parser.tab.c"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2528 "bison_parser.tab.c"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2534 "bison_parser.tab.c"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2540 "bison_parser.tab.c"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 186 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2546 "bison_parser.tab.c"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2552 "bison_parser.tab.c"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2558 "bison_parser.tab.c"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 173 "bison_parser.y"
                { }
#line 2564 "bison_parser.tab.c"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 186 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2570 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 173 "bison_parser.y"
                { }
#line 2576 "bison_parser.tab.c"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2582 "bison_parser.tab.c"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2588 "bison_parser.tab.c"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2594 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 173 "bison_parser.y"
                { }
#line 2600 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).table_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2613 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2619 "bison_parser.tab.c"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2625 "bison_parser.tab.c"
        break;

    case YYSYMBOL_float_index_elem_commalist: /* float_index_elem_commalist  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).table_index_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_index_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_index_element_vec));
    }
#line 2638 "bison_parser.tab.c"
        break;

    case YYSYMBOL_float_index_elem: /* float_index_elem  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table_index_element_t)); }
#line 2644 "bison_parser.tab.c"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 173 "bison_parser.y"
                { }
#line 2650 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 173 "bison_parser.y"
                { }
#line 2656 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2662 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 173 "bison_parser.y"
                { }
#line 2668 "bison_parser.tab.c"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 173 "bison_parser.y"
                { }
#line 2674 "bison_parser.tab.c"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 173 "bison_parser.y"
                { }
#line 2680 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2686 "bison_parser.tab.c"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2692 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 173 "bison_parser.y"
                { }
#line 2698 "bison_parser.tab.c"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2704 "bison_parser.tab.c"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2710 "bison_parser.tab.c"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2716 "bison_parser.tab.c"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2722 "bison_parser.tab.c"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2728 "bison_parser.tab.c"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2734 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 178 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2747 "bison_parser.tab.c"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2753 "bison_parser.tab.c"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).update_vec)) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2766 "bison_parser.tab.c"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2772 "bison_parser.tab.c"
        break;

    case YYSYMBOL_set_statement: /* set_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).set_stmt)); }
#line 2778 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2784 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2790 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2796 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2802 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2808 "bison_parser.tab.c"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2814 "bison_parser.tab.c"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2820 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 173 "bison_parser.y"
                { }
#line 2826 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2832 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 173 "bison_parser.y"
                { }
#line 2838 "bison_parser.tab.c"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2851 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2857 "bison_parser.tab.c"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2863 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2869 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2875 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2881 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2894 "bison_parser.tab.c"
        break;

    case YYSYMBOL_query_list: /* query_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).query_vec)) {
        for (auto ptr : *(((*yyvaluep).query_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).query_vec));
    }
#line 2907 "bison_parser.tab.c"
        break;

    case YYSYMBOL_query_item: /* query_item  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).qval)); }
#line 2913 "bison_parser.tab.c"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2926 "bison_parser.tab.c"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2932 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 173 "bison_parser.y"
                { }
#line 2938 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2944 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2950 "bison_parser.tab.c"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2963 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2976 "bison_parser.tab.c"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2989 "bison_parser.tab.c"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2995 "bison_parser.tab.c"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3001 "bison_parser.tab.c"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3007 "bison_parser.tab.c"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3013 "bison_parser.tab.c"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3019 "bison_parser.tab.c"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3025 "bison_parser.tab.c"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3031 "bison_parser.tab.c"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3037 "bison_parser.tab.c"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3043 "bison_parser.tab.c"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3049 "bison_parser.tab.c"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3055 "bison_parser.tab.c"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3061 "bison_parser.tab.c"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3067 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).window_description)); }
#line 3073 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 3086 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).frame_description)); }
#line 3092 "bison_parser.tab.c"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 173 "bison_parser.y"
                { }
#line 3098 "bison_parser.tab.c"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).frame_bound)); }
#line 3104 "bison_parser.tab.c"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3110 "bison_parser.tab.c"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3116 "bison_parser.tab.c"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 173 "bison_parser.y"
                { }
#line 3122 "bison_parser.tab.c"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 173 "bison_parser.y"
                { }
#line 3128 "bison_parser.tab.c"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 173 "bison_parser.y"
                { }
#line 3134 "bison_parser.tab.c"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3140 "bison_parser.tab.c"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3146 "bison_parser.tab.c"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3152 "bison_parser.tab.c"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3158 "bison_parser.tab.c"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3164 "bison_parser.tab.c"
        break;

    case YYSYMBOL_vector_literal: /* vector_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3170 "bison_parser.tab.c"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3176 "bison_parser.tab.c"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3182 "bison_parser.tab.c"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3188 "bison_parser.tab.c"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3194 "bison_parser.tab.c"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3200 "bison_parser.tab.c"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3206 "bison_parser.tab.c"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3212 "bison_parser.tab.c"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3218 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3224 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3230 "bison_parser.tab.c"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3236 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 187 "bison_parser.y"
                {
      if (((*yyvaluep).table_vec)) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 3249 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3255 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3261 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 174 "bison_parser.y"
                {
      free( (((*yyvaluep).table_name).name) );
      free( (((*yyvaluep).table_name).schema) );
    }
#line 3270 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 186 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 3276 "bison_parser.tab.c"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3282 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3288 "bison_parser.tab.c"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3294 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 3300 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 3306 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 3312 "bison_parser.tab.c"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 3318 "bison_parser.tab.c"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 173 "bison_parser.y"
                { }
#line 3324 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 173 "bison_parser.y"
                { }
#line 3330 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3336 "bison_parser.tab.c"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3342 "bison_parser.tab.c"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3348 "bison_parser.tab.c"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 3354 "bison_parser.tab.c"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3360 "bison_parser.tab.c"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 173 "bison_parser.y"
                { }
#line 3366 "bison_parser.tab.c"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 195 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3372 "bison_parser.tab.c"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 178 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 3385 "bison_parser.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 75 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3493 "bison_parser.tab.c"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 332 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3722 "bison_parser.tab.c"
    break;

  case 3: /* statement_list: statement  */
#line 351 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3733 "bison_parser.tab.c"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 357 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3744 "bison_parser.tab.c"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 364 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3753 "bison_parser.tab.c"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 368 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3762 "bison_parser.tab.c"
    break;

  case 7: /* statement: show_statement  */
#line 372 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3768 "bison_parser.tab.c"
    break;

  case 8: /* statement: import_statement  */
#line 373 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3774 "bison_parser.tab.c"
    break;

  case 9: /* statement: export_statement  */
#line 374 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3780 "bison_parser.tab.c"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 376 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3786 "bison_parser.tab.c"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3792 "bison_parser.tab.c"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3798 "bison_parser.tab.c"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 379 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3804 "bison_parser.tab.c"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 380 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3810 "bison_parser.tab.c"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3816 "bison_parser.tab.c"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 382 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3822 "bison_parser.tab.c"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 383 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3828 "bison_parser.tab.c"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 384 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3834 "bison_parser.tab.c"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 385 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3840 "bison_parser.tab.c"
    break;

  case 20: /* preparable_statement: set_statement  */
#line 386 "bison_parser.y"
                { (yyval.statement) = (yyvsp[0].set_stmt); }
#line 3846 "bison_parser.tab.c"
    break;

  case 21: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 392 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3852 "bison_parser.tab.c"
    break;

  case 22: /* opt_hints: %empty  */
#line 393 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3858 "bison_parser.tab.c"
    break;

  case 23: /* hint_list: hint  */
#line 395 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3867 "bison_parser.tab.c"
    break;

  case 24: /* hint_list: hint_list ',' hint  */
#line 399 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3876 "bison_parser.tab.c"
    break;

  case 25: /* hint: IDENTIFIER  */
#line 404 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3885 "bison_parser.tab.c"
    break;

  case 26: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 408 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3895 "bison_parser.tab.c"
    break;

  case 27: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 418 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3901 "bison_parser.tab.c"
    break;

  case 28: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 419 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3907 "bison_parser.tab.c"
    break;

  case 29: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 420 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3913 "bison_parser.tab.c"
    break;

  case 32: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 428 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3923 "bison_parser.tab.c"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER  */
#line 436 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3932 "bison_parser.tab.c"
    break;

  case 35: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 440 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3942 "bison_parser.tab.c"
    break;

  case 36: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 451 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3953 "bison_parser.tab.c"
    break;

  case 37: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 457 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3965 "bison_parser.tab.c"
    break;

  case 38: /* file_type: IDENTIFIER  */
#line 465 "bison_parser.y"
                       {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3984 "bison_parser.tab.c"
    break;

  case 39: /* file_path: string_literal  */
#line 480 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3993 "bison_parser.tab.c"
    break;

  case 40: /* opt_file_type: WITH FORMAT file_type  */
#line 485 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3999 "bison_parser.tab.c"
    break;

  case 41: /* opt_file_type: %empty  */
#line 486 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 4005 "bison_parser.tab.c"
    break;

  case 42: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 492 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 4016 "bison_parser.tab.c"
    break;

  case 43: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 498 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 4026 "bison_parser.tab.c"
    break;

  case 44: /* show_statement: SHOW TABLES  */
#line 509 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 4032 "bison_parser.tab.c"
    break;

  case 45: /* show_statement: SHOW COLUMNS table_name  */
#line 510 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4042 "bison_parser.tab.c"
    break;

  case 46: /* show_statement: DESCRIBE table_name  */
#line 515 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4052 "bison_parser.tab.c"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 526 "bison_parser.y"
                                                                                         {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 4070 "bison_parser.tab.c"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 539 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 4087 "bison_parser.tab.c"
    break;

  case 49: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 551 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4099 "bison_parser.tab.c"
    break;

  case 50: /* create_statement: CREATE INDEX opt_not_exists ON table_name USING opt_index_name '(' ident_commalist ')' WITH '(' float_index_elem_commalist ')'  */
#line 565 "bison_parser.y"
                                                                                                                                  {
  (yyval.create_stmt) = new CreateStatement(kCreateVectorIndex);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-11].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-9].table_name).name;
  (yyval.create_stmt)->indexName = (yyvsp[-7].sval);
  (yyval.create_stmt)->indexColumns = (yyvsp[-5].str_vec);
  (yyval.create_stmt)->setFloatArrayIndexConstraints((yyvsp[-1].table_index_element_vec));
  delete (yyvsp[-1].table_index_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 4117 "bison_parser.tab.c"
    break;

  case 51: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 578 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4130 "bison_parser.tab.c"
    break;

  case 52: /* opt_not_exists: IF NOT EXISTS  */
#line 587 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 4136 "bison_parser.tab.c"
    break;

  case 53: /* opt_not_exists: %empty  */
#line 588 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4142 "bison_parser.tab.c"
    break;

  case 54: /* table_elem_commalist: table_elem  */
#line 590 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 4151 "bison_parser.tab.c"
    break;

  case 55: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 594 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 4160 "bison_parser.tab.c"
    break;

  case 56: /* table_elem: column_def  */
#line 599 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 4166 "bison_parser.tab.c"
    break;

  case 57: /* table_elem: table_constraint  */
#line 600 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 4172 "bison_parser.tab.c"
    break;

  case 58: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 602 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 4183 "bison_parser.tab.c"
    break;

  case 59: /* float_index_elem_commalist: float_index_elem  */
#line 609 "bison_parser.y"
                                              {
  (yyval.table_index_element_vec) = new std::vector<TableElement*>();
  (yyval.table_index_element_vec)->push_back((yyvsp[0].table_index_element_t));
}
#line 4192 "bison_parser.tab.c"
    break;

  case 60: /* float_index_elem_commalist: float_index_elem_commalist ',' float_index_elem  */
#line 613 "bison_parser.y"
                                                  {
  (yyvsp[-2].table_index_element_vec)->push_back((yyvsp[0].table_index_element_t));
  (yyval.table_index_element_vec) = (yyvsp[-2].table_index_element_vec);
}
#line 4201 "bison_parser.tab.c"
    break;

  case 61: /* float_index_elem: IDENTIFIER '=' INTVAL  */
#line 618 "bison_parser.y"
                                         { (yyval.table_index_element_t) = new VectorIndexDefinition((yyvsp[-2].sval),(yyvsp[0].ival)); }
#line 4207 "bison_parser.tab.c"
    break;

  case 62: /* column_type: BIGINT  */
#line 621 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 4213 "bison_parser.tab.c"
    break;

  case 63: /* column_type: BOOLEAN  */
#line 622 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 4219 "bison_parser.tab.c"
    break;

  case 64: /* column_type: CHAR '(' INTVAL ')'  */
#line 623 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 4225 "bison_parser.tab.c"
    break;

  case 65: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 624 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4231 "bison_parser.tab.c"
    break;

  case 66: /* column_type: VECTOR '(' INTVAL ')'  */
#line 625 "bison_parser.y"
                        {(yyval.column_type_t) = ColumnType{DataType::VECTOR, (yyvsp[-1].ival)};}
#line 4237 "bison_parser.tab.c"
    break;

  case 67: /* column_type: DATE  */
#line 626 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 4243 "bison_parser.tab.c"
    break;

  case 68: /* column_type: DATETIME  */
#line 627 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4249 "bison_parser.tab.c"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 628 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 4258 "bison_parser.tab.c"
    break;

  case 70: /* column_type: DOUBLE  */
#line 632 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 4264 "bison_parser.tab.c"
    break;

  case 71: /* column_type: FLOAT  */
#line 633 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 4270 "bison_parser.tab.c"
    break;

  case 72: /* column_type: INT  */
#line 634 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4276 "bison_parser.tab.c"
    break;

  case 73: /* column_type: INTEGER  */
#line 635 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4282 "bison_parser.tab.c"
    break;

  case 74: /* column_type: LONG  */
#line 636 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 4288 "bison_parser.tab.c"
    break;

  case 75: /* column_type: REAL  */
#line 637 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 4294 "bison_parser.tab.c"
    break;

  case 76: /* column_type: SMALLINT  */
#line 638 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4300 "bison_parser.tab.c"
    break;

  case 77: /* column_type: TEXT  */
#line 639 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4306 "bison_parser.tab.c"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 640 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4312 "bison_parser.tab.c"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 641 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4318 "bison_parser.tab.c"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 642 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4324 "bison_parser.tab.c"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 644 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4330 "bison_parser.tab.c"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 645 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4336 "bison_parser.tab.c"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 647 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4342 "bison_parser.tab.c"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 648 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4348 "bison_parser.tab.c"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 649 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4354 "bison_parser.tab.c"
    break;

  case 86: /* opt_column_constraints: column_constraint_set  */
#line 651 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 4360 "bison_parser.tab.c"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 652 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 4366 "bison_parser.tab.c"
    break;

  case 88: /* column_constraint_set: column_constraint  */
#line 654 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 4375 "bison_parser.tab.c"
    break;

  case 89: /* column_constraint_set: column_constraint_set column_constraint  */
#line 658 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 4384 "bison_parser.tab.c"
    break;

  case 90: /* column_constraint: PRIMARY KEY  */
#line 663 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4390 "bison_parser.tab.c"
    break;

  case 91: /* column_constraint: UNIQUE  */
#line 664 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4396 "bison_parser.tab.c"
    break;

  case 92: /* column_constraint: NULL  */
#line 665 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4402 "bison_parser.tab.c"
    break;

  case 93: /* column_constraint: NOT NULL  */
#line 666 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4408 "bison_parser.tab.c"
    break;

  case 94: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 668 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4414 "bison_parser.tab.c"
    break;

  case 95: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 669 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4420 "bison_parser.tab.c"
    break;

  case 96: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 677 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4431 "bison_parser.tab.c"
    break;

  case 97: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 683 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4442 "bison_parser.tab.c"
    break;

  case 98: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 689 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4452 "bison_parser.tab.c"
    break;

  case 99: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 695 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4462 "bison_parser.tab.c"
    break;

  case 100: /* opt_exists: IF EXISTS  */
#line 701 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4468 "bison_parser.tab.c"
    break;

  case 101: /* opt_exists: %empty  */
#line 702 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4474 "bison_parser.tab.c"
    break;

  case 102: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 709 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4484 "bison_parser.tab.c"
    break;

  case 103: /* alter_action: drop_action  */
#line 715 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4490 "bison_parser.tab.c"
    break;

  case 104: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 717 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4499 "bison_parser.tab.c"
    break;

  case 105: /* delete_statement: DELETE FROM table_name opt_where  */
#line 727 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4510 "bison_parser.tab.c"
    break;

  case 106: /* truncate_statement: TRUNCATE table_name  */
#line 734 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4520 "bison_parser.tab.c"
    break;

  case 107: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 745 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4532 "bison_parser.tab.c"
    break;

  case 108: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 752 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4544 "bison_parser.tab.c"
    break;

  case 109: /* opt_column_list: '(' ident_commalist ')'  */
#line 760 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4550 "bison_parser.tab.c"
    break;

  case 110: /* opt_column_list: %empty  */
#line 761 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4556 "bison_parser.tab.c"
    break;

  case 111: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 768 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4567 "bison_parser.tab.c"
    break;

  case 112: /* update_clause_commalist: update_clause  */
#line 775 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4576 "bison_parser.tab.c"
    break;

  case 113: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 779 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4585 "bison_parser.tab.c"
    break;

  case 114: /* update_clause: IDENTIFIER '=' expr  */
#line 784 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4595 "bison_parser.tab.c"
    break;

  case 115: /* set_statement: SET STRING '.' STRING '.' STRING '=' INTVAL  */
#line 794 "bison_parser.y"
                                                            {
  (yyval.set_stmt) = new SetStatement((yyvsp[-6].sval), (yyvsp[-4].sval), (yyvsp[-2].sval), (yyvsp[0].ival));
 }
#line 4603 "bison_parser.tab.c"
    break;

  case 116: /* select_statement: opt_with_clause select_with_paren  */
#line 802 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4612 "bison_parser.tab.c"
    break;

  case 117: /* select_statement: opt_with_clause select_no_paren  */
#line 806 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4621 "bison_parser.tab.c"
    break;

  case 118: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 810 "bison_parser.y"
                                                                                                 {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4637 "bison_parser.tab.c"
    break;

  case 121: /* select_within_set_operation_no_parentheses: select_clause  */
#line 824 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4643 "bison_parser.tab.c"
    break;

  case 122: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 825 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4656 "bison_parser.tab.c"
    break;

  case 123: /* select_with_paren: '(' select_no_paren ')'  */
#line 834 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4662 "bison_parser.tab.c"
    break;

  case 124: /* select_with_paren: '(' select_with_paren ')'  */
#line 835 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4668 "bison_parser.tab.c"
    break;

  case 125: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 837 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit)) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec)) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4687 "bison_parser.tab.c"
    break;

  case 126: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 851 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4703 "bison_parser.tab.c"
    break;

  case 127: /* set_operator: set_type opt_all  */
#line 863 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4712 "bison_parser.tab.c"
    break;

  case 128: /* set_type: UNION  */
#line 868 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4721 "bison_parser.tab.c"
    break;

  case 129: /* set_type: INTERSECT  */
#line 872 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4730 "bison_parser.tab.c"
    break;

  case 130: /* set_type: EXCEPT  */
#line 876 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4739 "bison_parser.tab.c"
    break;

  case 131: /* opt_all: ALL  */
#line 881 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4745 "bison_parser.tab.c"
    break;

  case 132: /* opt_all: %empty  */
#line 882 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4751 "bison_parser.tab.c"
    break;

  case 133: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 884 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4765 "bison_parser.tab.c"
    break;

  case 134: /* opt_distinct: DISTINCT  */
#line 894 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4771 "bison_parser.tab.c"
    break;

  case 135: /* opt_distinct: %empty  */
#line 895 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4777 "bison_parser.tab.c"
    break;

  case 137: /* opt_from_clause: from_clause  */
#line 899 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4783 "bison_parser.tab.c"
    break;

  case 138: /* opt_from_clause: %empty  */
#line 900 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4789 "bison_parser.tab.c"
    break;

  case 139: /* from_clause: FROM table_ref  */
#line 902 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4795 "bison_parser.tab.c"
    break;

  case 140: /* opt_where: WHERE expr  */
#line 904 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4801 "bison_parser.tab.c"
    break;

  case 141: /* opt_where: %empty  */
#line 905 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4807 "bison_parser.tab.c"
    break;

  case 142: /* opt_group: GROUP BY expr_list opt_having  */
#line 907 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4817 "bison_parser.tab.c"
    break;

  case 143: /* opt_group: %empty  */
#line 912 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4823 "bison_parser.tab.c"
    break;

  case 144: /* opt_having: HAVING expr  */
#line 914 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4829 "bison_parser.tab.c"
    break;

  case 145: /* opt_having: %empty  */
#line 915 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4835 "bison_parser.tab.c"
    break;

  case 146: /* opt_order: ORDER BY order_list  */
#line 917 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4841 "bison_parser.tab.c"
    break;

  case 147: /* opt_order: ORDER BY STRING VECTOR IDENTIFIER '(' INTVAL ')' INTVAL query_list  */
#line 918 "bison_parser.y"
                                                                    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back(new OrderDescription(kOrderSimilarK, (yyvsp[-7].sval), (yyvsp[-5].sval), (yyvsp[-3].ival), (yyvsp[-1].ival), (yyvsp[0].query_vec)));
}
#line 4850 "bison_parser.tab.c"
    break;

  case 148: /* opt_order: %empty  */
#line 922 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4856 "bison_parser.tab.c"
    break;

  case 149: /* query_list: query_list ',' query_item  */
#line 924 "bison_parser.y"
                                       {
  (yyvsp[-2].query_vec)->push_back((yyvsp[0].qval));
  (yyval.query_vec) = (yyvsp[-2].query_vec);
}
#line 4865 "bison_parser.tab.c"
    break;

  case 150: /* query_list: query_item  */
#line 928 "bison_parser.y"
             {
  (yyval.query_vec) = new std::vector<float*>();
  (yyval.query_vec)->push_back((yyvsp[0].qval));
}
#line 4874 "bison_parser.tab.c"
    break;

  case 151: /* query_item: STRING  */
#line 933 "bison_parser.y"
                   { (yyval.qval) = Expr::makeQueryVector((yyvsp[0].sval)); }
#line 4880 "bison_parser.tab.c"
    break;

  case 152: /* order_list: order_desc  */
#line 935 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4889 "bison_parser.tab.c"
    break;

  case 153: /* order_list: order_list ',' order_desc  */
#line 939 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4898 "bison_parser.tab.c"
    break;

  case 154: /* order_desc: expr opt_order_type  */
#line 944 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4904 "bison_parser.tab.c"
    break;

  case 155: /* opt_order_type: ASC  */
#line 946 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4910 "bison_parser.tab.c"
    break;

  case 156: /* opt_order_type: DESC  */
#line 947 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4916 "bison_parser.tab.c"
    break;

  case 157: /* opt_order_type: %empty  */
#line 948 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4922 "bison_parser.tab.c"
    break;

  case 158: /* opt_top: TOP int_literal  */
#line 952 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4928 "bison_parser.tab.c"
    break;

  case 159: /* opt_top: %empty  */
#line 953 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4934 "bison_parser.tab.c"
    break;

  case 160: /* opt_limit: LIMIT expr  */
#line 955 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4940 "bison_parser.tab.c"
    break;

  case 161: /* opt_limit: OFFSET expr  */
#line 956 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4946 "bison_parser.tab.c"
    break;

  case 162: /* opt_limit: LIMIT expr OFFSET expr  */
#line 957 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4952 "bison_parser.tab.c"
    break;

  case 163: /* opt_limit: LIMIT ALL  */
#line 958 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4958 "bison_parser.tab.c"
    break;

  case 164: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 959 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4964 "bison_parser.tab.c"
    break;

  case 165: /* opt_limit: %empty  */
#line 960 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4970 "bison_parser.tab.c"
    break;

  case 166: /* expr_list: expr_alias  */
#line 965 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4979 "bison_parser.tab.c"
    break;

  case 167: /* expr_list: expr_list ',' expr_alias  */
#line 969 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4988 "bison_parser.tab.c"
    break;

  case 168: /* opt_literal_list: literal_list  */
#line 974 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4994 "bison_parser.tab.c"
    break;

  case 169: /* opt_literal_list: %empty  */
#line 975 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5000 "bison_parser.tab.c"
    break;

  case 170: /* literal_list: literal  */
#line 977 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 5009 "bison_parser.tab.c"
    break;

  case 171: /* literal_list: literal_list ',' literal  */
#line 981 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 5018 "bison_parser.tab.c"
    break;

  case 172: /* expr_alias: expr opt_alias  */
#line 986 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 5030 "bison_parser.tab.c"
    break;

  case 178: /* operand: '(' expr ')'  */
#line 996 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 5036 "bison_parser.tab.c"
    break;

  case 188: /* operand: '(' select_no_paren ')'  */
#line 998 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 5044 "bison_parser.tab.c"
    break;

  case 191: /* unary_expr: '-' operand  */
#line 1004 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 5050 "bison_parser.tab.c"
    break;

  case 192: /* unary_expr: NOT operand  */
#line 1005 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 5056 "bison_parser.tab.c"
    break;

  case 193: /* unary_expr: operand ISNULL  */
#line 1006 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 5062 "bison_parser.tab.c"
    break;

  case 194: /* unary_expr: operand IS NULL  */
#line 1007 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 5068 "bison_parser.tab.c"
    break;

  case 195: /* unary_expr: operand IS NOT NULL  */
#line 1008 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 5074 "bison_parser.tab.c"
    break;

  case 197: /* binary_expr: operand '-' operand  */
#line 1010 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 5080 "bison_parser.tab.c"
    break;

  case 198: /* binary_expr: operand '+' operand  */
#line 1011 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 5086 "bison_parser.tab.c"
    break;

  case 199: /* binary_expr: operand '/' operand  */
#line 1012 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 5092 "bison_parser.tab.c"
    break;

  case 200: /* binary_expr: operand '*' operand  */
#line 1013 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 5098 "bison_parser.tab.c"
    break;

  case 201: /* binary_expr: operand '%' operand  */
#line 1014 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 5104 "bison_parser.tab.c"
    break;

  case 202: /* binary_expr: operand '^' operand  */
#line 1015 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 5110 "bison_parser.tab.c"
    break;

  case 203: /* binary_expr: operand LIKE operand  */
#line 1016 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 5116 "bison_parser.tab.c"
    break;

  case 204: /* binary_expr: operand NOT LIKE operand  */
#line 1017 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 5122 "bison_parser.tab.c"
    break;

  case 205: /* binary_expr: operand ILIKE operand  */
#line 1018 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 5128 "bison_parser.tab.c"
    break;

  case 206: /* binary_expr: operand CONCAT operand  */
#line 1019 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 5134 "bison_parser.tab.c"
    break;

  case 207: /* logic_expr: expr AND expr  */
#line 1021 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 5140 "bison_parser.tab.c"
    break;

  case 208: /* logic_expr: expr OR expr  */
#line 1022 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 5146 "bison_parser.tab.c"
    break;

  case 209: /* in_expr: operand IN '(' expr_list ')'  */
#line 1024 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 5152 "bison_parser.tab.c"
    break;

  case 210: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1025 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 5158 "bison_parser.tab.c"
    break;

  case 211: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1026 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 5164 "bison_parser.tab.c"
    break;

  case 212: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1027 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 5170 "bison_parser.tab.c"
    break;

  case 213: /* case_expr: CASE expr case_list END  */
#line 1031 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 5176 "bison_parser.tab.c"
    break;

  case 214: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1032 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 5182 "bison_parser.tab.c"
    break;

  case 215: /* case_expr: CASE case_list END  */
#line 1033 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 5188 "bison_parser.tab.c"
    break;

  case 216: /* case_expr: CASE case_list ELSE expr END  */
#line 1034 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 5194 "bison_parser.tab.c"
    break;

  case 217: /* case_list: WHEN expr THEN expr  */
#line 1036 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5200 "bison_parser.tab.c"
    break;

  case 218: /* case_list: case_list WHEN expr THEN expr  */
#line 1037 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5206 "bison_parser.tab.c"
    break;

  case 219: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1039 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 5212 "bison_parser.tab.c"
    break;

  case 220: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1040 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 5218 "bison_parser.tab.c"
    break;

  case 221: /* comp_expr: operand '=' operand  */
#line 1042 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5224 "bison_parser.tab.c"
    break;

  case 222: /* comp_expr: operand EQUALS operand  */
#line 1043 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5230 "bison_parser.tab.c"
    break;

  case 223: /* comp_expr: operand NOTEQUALS operand  */
#line 1044 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 5236 "bison_parser.tab.c"
    break;

  case 224: /* comp_expr: operand '<' operand  */
#line 1045 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 5242 "bison_parser.tab.c"
    break;

  case 225: /* comp_expr: operand '>' operand  */
#line 1046 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5248 "bison_parser.tab.c"
    break;

  case 226: /* comp_expr: operand LESSEQ operand  */
#line 1047 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5254 "bison_parser.tab.c"
    break;

  case 227: /* comp_expr: operand GREATEREQ operand  */
#line 1048 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5260 "bison_parser.tab.c"
    break;

  case 228: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1052 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5266 "bison_parser.tab.c"
    break;

  case 229: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1053 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5272 "bison_parser.tab.c"
    break;

  case 230: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1057 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5278 "bison_parser.tab.c"
    break;

  case 231: /* opt_window: %empty  */
#line 1058 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 5284 "bison_parser.tab.c"
    break;

  case 232: /* opt_partition: PARTITION BY expr_list  */
#line 1060 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5290 "bison_parser.tab.c"
    break;

  case 233: /* opt_partition: %empty  */
#line 1061 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5296 "bison_parser.tab.c"
    break;

  case 234: /* opt_frame_clause: frame_type frame_bound  */
#line 1066 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5302 "bison_parser.tab.c"
    break;

  case 235: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1067 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5308 "bison_parser.tab.c"
    break;

  case 236: /* opt_frame_clause: %empty  */
#line 1068 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5316 "bison_parser.tab.c"
    break;

  case 237: /* frame_type: RANGE  */
#line 1072 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5322 "bison_parser.tab.c"
    break;

  case 238: /* frame_type: ROWS  */
#line 1073 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5328 "bison_parser.tab.c"
    break;

  case 239: /* frame_type: GROUPS  */
#line 1074 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5334 "bison_parser.tab.c"
    break;

  case 240: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1076 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5340 "bison_parser.tab.c"
    break;

  case 241: /* frame_bound: INTVAL PRECEDING  */
#line 1077 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5346 "bison_parser.tab.c"
    break;

  case 242: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1078 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5352 "bison_parser.tab.c"
    break;

  case 243: /* frame_bound: INTVAL FOLLOWING  */
#line 1079 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5358 "bison_parser.tab.c"
    break;

  case 244: /* frame_bound: CURRENT_ROW  */
#line 1080 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5364 "bison_parser.tab.c"
    break;

  case 245: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1082 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5370 "bison_parser.tab.c"
    break;

  case 246: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1084 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5376 "bison_parser.tab.c"
    break;

  case 247: /* datetime_field: SECOND  */
#line 1086 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5382 "bison_parser.tab.c"
    break;

  case 248: /* datetime_field: MINUTE  */
#line 1087 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5388 "bison_parser.tab.c"
    break;

  case 249: /* datetime_field: HOUR  */
#line 1088 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5394 "bison_parser.tab.c"
    break;

  case 250: /* datetime_field: DAY  */
#line 1089 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5400 "bison_parser.tab.c"
    break;

  case 251: /* datetime_field: MONTH  */
#line 1090 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5406 "bison_parser.tab.c"
    break;

  case 252: /* datetime_field: YEAR  */
#line 1091 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5412 "bison_parser.tab.c"
    break;

  case 253: /* datetime_field_plural: SECONDS  */
#line 1093 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5418 "bison_parser.tab.c"
    break;

  case 254: /* datetime_field_plural: MINUTES  */
#line 1094 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5424 "bison_parser.tab.c"
    break;

  case 255: /* datetime_field_plural: HOURS  */
#line 1095 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5430 "bison_parser.tab.c"
    break;

  case 256: /* datetime_field_plural: DAYS  */
#line 1096 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5436 "bison_parser.tab.c"
    break;

  case 257: /* datetime_field_plural: MONTHS  */
#line 1097 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5442 "bison_parser.tab.c"
    break;

  case 258: /* datetime_field_plural: YEARS  */
#line 1098 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5448 "bison_parser.tab.c"
    break;

  case 261: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1102 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5454 "bison_parser.tab.c"
    break;

  case 262: /* array_index: operand '[' int_literal ']'  */
#line 1104 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5460 "bison_parser.tab.c"
    break;

  case 263: /* between_expr: operand BETWEEN operand AND operand  */
#line 1106 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5466 "bison_parser.tab.c"
    break;

  case 264: /* column_name: IDENTIFIER  */
#line 1108 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5472 "bison_parser.tab.c"
    break;

  case 265: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1109 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5478 "bison_parser.tab.c"
    break;

  case 266: /* column_name: '*'  */
#line 1110 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5484 "bison_parser.tab.c"
    break;

  case 267: /* column_name: IDENTIFIER '.' '*'  */
#line 1111 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5490 "bison_parser.tab.c"
    break;

  case 276: /* vector_literal: VECTOR STRING  */
#line 1115 "bison_parser.y"
                              { (yyval.expr) = Expr::makeVectorLiteral((yyvsp[0].sval)); }
#line 5496 "bison_parser.tab.c"
    break;

  case 277: /* string_literal: STRING  */
#line 1117 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5502 "bison_parser.tab.c"
    break;

  case 278: /* bool_literal: TRUE  */
#line 1119 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5508 "bison_parser.tab.c"
    break;

  case 279: /* bool_literal: FALSE  */
#line 1120 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5514 "bison_parser.tab.c"
    break;

  case 280: /* num_literal: FLOATVAL  */
#line 1122 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5520 "bison_parser.tab.c"
    break;

  case 282: /* int_literal: INTVAL  */
#line 1125 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5526 "bison_parser.tab.c"
    break;

  case 283: /* null_literal: NULL  */
#line 1127 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5532 "bison_parser.tab.c"
    break;

  case 284: /* date_literal: DATE STRING  */
#line 1129 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 5547 "bison_parser.tab.c"
    break;

  case 285: /* interval_literal: int_literal duration_field  */
#line 1140 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5556 "bison_parser.tab.c"
    break;

  case 286: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1144 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 5572 "bison_parser.tab.c"
    break;

  case 287: /* interval_literal: INTERVAL STRING  */
#line 1155 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 5608 "bison_parser.tab.c"
    break;

  case 288: /* param_expr: '?'  */
#line 1187 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5618 "bison_parser.tab.c"
    break;

  case 290: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1196 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5629 "bison_parser.tab.c"
    break;

  case 294: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1205 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5640 "bison_parser.tab.c"
    break;

  case 295: /* table_ref_commalist: table_ref_atomic  */
#line 1212 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5649 "bison_parser.tab.c"
    break;

  case 296: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1216 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5658 "bison_parser.tab.c"
    break;

  case 297: /* table_ref_name: table_name opt_table_alias  */
#line 1221 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5670 "bison_parser.tab.c"
    break;

  case 298: /* table_ref_name_no_alias: table_name  */
#line 1229 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5680 "bison_parser.tab.c"
    break;

  case 299: /* table_name: IDENTIFIER  */
#line 1235 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5689 "bison_parser.tab.c"
    break;

  case 300: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1239 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5698 "bison_parser.tab.c"
    break;

  case 301: /* opt_index_name: IDENTIFIER  */
#line 1244 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5704 "bison_parser.tab.c"
    break;

  case 302: /* opt_index_name: %empty  */
#line 1245 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5710 "bison_parser.tab.c"
    break;

  case 304: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1247 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5716 "bison_parser.tab.c"
    break;

  case 306: /* opt_table_alias: %empty  */
#line 1249 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5722 "bison_parser.tab.c"
    break;

  case 307: /* alias: AS IDENTIFIER  */
#line 1251 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5728 "bison_parser.tab.c"
    break;

  case 308: /* alias: IDENTIFIER  */
#line 1252 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5734 "bison_parser.tab.c"
    break;

  case 310: /* opt_alias: %empty  */
#line 1254 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5740 "bison_parser.tab.c"
    break;

  case 311: /* opt_locking_clause: opt_locking_clause_list  */
#line 1260 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5746 "bison_parser.tab.c"
    break;

  case 312: /* opt_locking_clause: %empty  */
#line 1261 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5752 "bison_parser.tab.c"
    break;

  case 313: /* opt_locking_clause_list: locking_clause  */
#line 1263 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5761 "bison_parser.tab.c"
    break;

  case 314: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1267 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5770 "bison_parser.tab.c"
    break;

  case 315: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1272 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5781 "bison_parser.tab.c"
    break;

  case 316: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1278 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5792 "bison_parser.tab.c"
    break;

  case 317: /* row_lock_mode: UPDATE  */
#line 1285 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5798 "bison_parser.tab.c"
    break;

  case 318: /* row_lock_mode: NO KEY UPDATE  */
#line 1286 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5804 "bison_parser.tab.c"
    break;

  case 319: /* row_lock_mode: SHARE  */
#line 1287 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5810 "bison_parser.tab.c"
    break;

  case 320: /* row_lock_mode: KEY SHARE  */
#line 1288 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5816 "bison_parser.tab.c"
    break;

  case 321: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1290 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5822 "bison_parser.tab.c"
    break;

  case 322: /* opt_row_lock_policy: NOWAIT  */
#line 1291 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5828 "bison_parser.tab.c"
    break;

  case 323: /* opt_row_lock_policy: %empty  */
#line 1292 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5834 "bison_parser.tab.c"
    break;

  case 325: /* opt_with_clause: %empty  */
#line 1298 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5840 "bison_parser.tab.c"
    break;

  case 326: /* with_clause: WITH with_description_list  */
#line 1300 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5846 "bison_parser.tab.c"
    break;

  case 327: /* with_description_list: with_description  */
#line 1302 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5855 "bison_parser.tab.c"
    break;

  case 328: /* with_description_list: with_description_list ',' with_description  */
#line 1306 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5864 "bison_parser.tab.c"
    break;

  case 329: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1311 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5874 "bison_parser.tab.c"
    break;

  case 330: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1321 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5886 "bison_parser.tab.c"
    break;

  case 331: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1328 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5899 "bison_parser.tab.c"
    break;

  case 332: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1336 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    left_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-7].table)->getName()) {
    left_col->table = strdup((yyvsp[-7].table)->getName());
  }
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    right_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-4].table)->getName()) {
    right_col->table = strdup((yyvsp[-4].table)->getName());
  }
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5927 "bison_parser.tab.c"
    break;

  case 333: /* opt_join_type: INNER  */
#line 1360 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5933 "bison_parser.tab.c"
    break;

  case 334: /* opt_join_type: LEFT OUTER  */
#line 1361 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5939 "bison_parser.tab.c"
    break;

  case 335: /* opt_join_type: LEFT  */
#line 1362 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5945 "bison_parser.tab.c"
    break;

  case 336: /* opt_join_type: RIGHT OUTER  */
#line 1363 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5951 "bison_parser.tab.c"
    break;

  case 337: /* opt_join_type: RIGHT  */
#line 1364 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5957 "bison_parser.tab.c"
    break;

  case 338: /* opt_join_type: FULL OUTER  */
#line 1365 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5963 "bison_parser.tab.c"
    break;

  case 339: /* opt_join_type: OUTER  */
#line 1366 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5969 "bison_parser.tab.c"
    break;

  case 340: /* opt_join_type: FULL  */
#line 1367 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5975 "bison_parser.tab.c"
    break;

  case 341: /* opt_join_type: CROSS  */
#line 1368 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5981 "bison_parser.tab.c"
    break;

  case 342: /* opt_join_type: %empty  */
#line 1369 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5987 "bison_parser.tab.c"
    break;

  case 346: /* ident_commalist: IDENTIFIER  */
#line 1380 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5996 "bison_parser.tab.c"
    break;

  case 347: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1384 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 6005 "bison_parser.tab.c"
    break;


#line 6009 "bison_parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1390 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
