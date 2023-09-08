/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
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

#line 80 "bison_parser.h"

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

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
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

#line 347 "bison_parser.h"

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


#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
