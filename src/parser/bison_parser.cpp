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

#line 108 "bison_parser.cpp"

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

#include "bison_parser.h"
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
  YYSYMBOL_INDEX_IVFFLAT = 173,            /* INDEX_IVFFLAT  */
  YYSYMBOL_INDEX_HNSW = 174,               /* INDEX_HNSW  */
  YYSYMBOL_INDEX_IVFPQ = 175,              /* INDEX_IVFPQ  */
  YYSYMBOL_176_ = 176,                     /* '='  */
  YYSYMBOL_EQUALS = 177,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 178,                /* NOTEQUALS  */
  YYSYMBOL_179_ = 179,                     /* '<'  */
  YYSYMBOL_180_ = 180,                     /* '>'  */
  YYSYMBOL_LESS = 181,                     /* LESS  */
  YYSYMBOL_GREATER = 182,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 183,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 184,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 185,                  /* NOTNULL  */
  YYSYMBOL_186_ = 186,                     /* '+'  */
  YYSYMBOL_187_ = 187,                     /* '-'  */
  YYSYMBOL_188_ = 188,                     /* '*'  */
  YYSYMBOL_189_ = 189,                     /* '/'  */
  YYSYMBOL_190_ = 190,                     /* '%'  */
  YYSYMBOL_191_ = 191,                     /* '^'  */
  YYSYMBOL_UMINUS = 192,                   /* UMINUS  */
  YYSYMBOL_193_ = 193,                     /* '['  */
  YYSYMBOL_194_ = 194,                     /* ']'  */
  YYSYMBOL_195_ = 195,                     /* '('  */
  YYSYMBOL_196_ = 196,                     /* ')'  */
  YYSYMBOL_197_ = 197,                     /* '.'  */
  YYSYMBOL_198_ = 198,                     /* ';'  */
  YYSYMBOL_199_ = 199,                     /* ','  */
  YYSYMBOL_200_ = 200,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 201,                 /* $accept  */
  YYSYMBOL_input = 202,                    /* input  */
  YYSYMBOL_statement_list = 203,           /* statement_list  */
  YYSYMBOL_statement = 204,                /* statement  */
  YYSYMBOL_preparable_statement = 205,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 206,                /* opt_hints  */
  YYSYMBOL_hint_list = 207,                /* hint_list  */
  YYSYMBOL_hint = 208,                     /* hint  */
  YYSYMBOL_transaction_statement = 209,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 210,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 211,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 212,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 213,        /* execute_statement  */
  YYSYMBOL_import_statement = 214,         /* import_statement  */
  YYSYMBOL_file_type = 215,                /* file_type  */
  YYSYMBOL_file_path = 216,                /* file_path  */
  YYSYMBOL_opt_file_type = 217,            /* opt_file_type  */
  YYSYMBOL_export_statement = 218,         /* export_statement  */
  YYSYMBOL_show_statement = 219,           /* show_statement  */
  YYSYMBOL_create_statement = 220,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 221,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 222,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 223,               /* table_elem  */
  YYSYMBOL_column_def = 224,               /* column_def  */
  YYSYMBOL_float_index_elem_commalist = 225, /* float_index_elem_commalist  */
  YYSYMBOL_float_index_elem = 226,         /* float_index_elem  */
  YYSYMBOL_column_type = 227,              /* column_type  */
  YYSYMBOL_opt_time_precision = 228,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 229, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 230,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 231,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 232,        /* column_constraint  */
  YYSYMBOL_table_constraint = 233,         /* table_constraint  */
  YYSYMBOL_drop_statement = 234,           /* drop_statement  */
  YYSYMBOL_opt_exists = 235,               /* opt_exists  */
  YYSYMBOL_alter_statement = 236,          /* alter_statement  */
  YYSYMBOL_alter_action = 237,             /* alter_action  */
  YYSYMBOL_drop_action = 238,              /* drop_action  */
  YYSYMBOL_delete_statement = 239,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 240,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 241,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 242,          /* opt_column_list  */
  YYSYMBOL_update_statement = 243,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 244,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 245,            /* update_clause  */
  YYSYMBOL_set_statement = 246,            /* set_statement  */
  YYSYMBOL_select_statement = 247,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 248, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 249, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 250,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 251,          /* select_no_paren  */
  YYSYMBOL_set_operator = 252,             /* set_operator  */
  YYSYMBOL_set_type = 253,                 /* set_type  */
  YYSYMBOL_opt_all = 254,                  /* opt_all  */
  YYSYMBOL_select_clause = 255,            /* select_clause  */
  YYSYMBOL_opt_distinct = 256,             /* opt_distinct  */
  YYSYMBOL_select_list = 257,              /* select_list  */
  YYSYMBOL_opt_from_clause = 258,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 259,              /* from_clause  */
  YYSYMBOL_opt_where = 260,                /* opt_where  */
  YYSYMBOL_opt_group = 261,                /* opt_group  */
  YYSYMBOL_opt_having = 262,               /* opt_having  */
  YYSYMBOL_opt_order = 263,                /* opt_order  */
  YYSYMBOL_index_order_type = 264,         /* index_order_type  */
  YYSYMBOL_query_list = 265,               /* query_list  */
  YYSYMBOL_query_item = 266,               /* query_item  */
  YYSYMBOL_order_list = 267,               /* order_list  */
  YYSYMBOL_order_desc = 268,               /* order_desc  */
  YYSYMBOL_opt_order_type = 269,           /* opt_order_type  */
  YYSYMBOL_opt_top = 270,                  /* opt_top  */
  YYSYMBOL_opt_limit = 271,                /* opt_limit  */
  YYSYMBOL_expr_list = 272,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 273,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 274,             /* literal_list  */
  YYSYMBOL_expr_alias = 275,               /* expr_alias  */
  YYSYMBOL_expr = 276,                     /* expr  */
  YYSYMBOL_operand = 277,                  /* operand  */
  YYSYMBOL_scalar_expr = 278,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 279,               /* unary_expr  */
  YYSYMBOL_binary_expr = 280,              /* binary_expr  */
  YYSYMBOL_logic_expr = 281,               /* logic_expr  */
  YYSYMBOL_in_expr = 282,                  /* in_expr  */
  YYSYMBOL_case_expr = 283,                /* case_expr  */
  YYSYMBOL_case_list = 284,                /* case_list  */
  YYSYMBOL_exists_expr = 285,              /* exists_expr  */
  YYSYMBOL_comp_expr = 286,                /* comp_expr  */
  YYSYMBOL_function_expr = 287,            /* function_expr  */
  YYSYMBOL_opt_window = 288,               /* opt_window  */
  YYSYMBOL_opt_partition = 289,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 290,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 291,               /* frame_type  */
  YYSYMBOL_frame_bound = 292,              /* frame_bound  */
  YYSYMBOL_extract_expr = 293,             /* extract_expr  */
  YYSYMBOL_cast_expr = 294,                /* cast_expr  */
  YYSYMBOL_datetime_field = 295,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 296,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 297,           /* duration_field  */
  YYSYMBOL_array_expr = 298,               /* array_expr  */
  YYSYMBOL_array_index = 299,              /* array_index  */
  YYSYMBOL_between_expr = 300,             /* between_expr  */
  YYSYMBOL_column_name = 301,              /* column_name  */
  YYSYMBOL_literal = 302,                  /* literal  */
  YYSYMBOL_vector_literal = 303,           /* vector_literal  */
  YYSYMBOL_string_literal = 304,           /* string_literal  */
  YYSYMBOL_bool_literal = 305,             /* bool_literal  */
  YYSYMBOL_num_literal = 306,              /* num_literal  */
  YYSYMBOL_int_literal = 307,              /* int_literal  */
  YYSYMBOL_null_literal = 308,             /* null_literal  */
  YYSYMBOL_date_literal = 309,             /* date_literal  */
  YYSYMBOL_interval_literal = 310,         /* interval_literal  */
  YYSYMBOL_param_expr = 311,               /* param_expr  */
  YYSYMBOL_table_ref = 312,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 313,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 314, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 315,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 316,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 317,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 318,               /* table_name  */
  YYSYMBOL_opt_index_name = 319,           /* opt_index_name  */
  YYSYMBOL_table_alias = 320,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 321,          /* opt_table_alias  */
  YYSYMBOL_alias = 322,                    /* alias  */
  YYSYMBOL_opt_alias = 323,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 324,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 325,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 326,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 327,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 328,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 329,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 330,              /* with_clause  */
  YYSYMBOL_with_description_list = 331,    /* with_description_list  */
  YYSYMBOL_with_description = 332,         /* with_description  */
  YYSYMBOL_join_clause = 333,              /* join_clause  */
  YYSYMBOL_opt_join_type = 334,            /* opt_join_type  */
  YYSYMBOL_join_condition = 335,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 336,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 337           /* ident_commalist  */
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
#define YYLAST   986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  201
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  642

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   438


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
       2,     2,     2,     2,     2,     2,     2,   190,     2,     2,
     195,   196,   188,   186,   199,   187,   197,   189,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   198,
     179,   176,   180,   200,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   193,     2,   194,   191,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   177,   178,   181,   182,   183,   184,   185,   192
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   335,   335,   354,   360,   367,   371,   375,   376,   377,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   395,   396,   398,   402,   407,   411,   421,   422,   423,
     425,   425,   431,   437,   439,   443,   454,   460,   468,   483,
     488,   489,   495,   501,   512,   513,   518,   529,   542,   554,
     568,   581,   590,   591,   593,   597,   602,   603,   605,   612,
     616,   621,   624,   625,   626,   627,   628,   629,   630,   631,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   647,   648,   650,   651,   652,   654,   655,   657,   661,
     666,   667,   668,   669,   671,   672,   680,   686,   692,   698,
     704,   705,   712,   718,   720,   730,   737,   748,   755,   763,
     764,   771,   778,   782,   787,   797,   805,   809,   813,   825,
     825,   827,   828,   837,   838,   840,   854,   866,   871,   875,
     879,   884,   885,   887,   898,   899,   901,   903,   904,   906,
     908,   909,   911,   916,   918,   919,   921,   922,   927,   929,
     930,   931,   933,   938,   944,   948,   952,   957,   959,   960,
     961,   965,   966,   968,   969,   970,   971,   972,   973,   978,
     982,   987,   988,   990,   994,   999,  1007,  1007,  1007,  1007,
    1007,  1009,  1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,
    1011,  1011,  1015,  1015,  1017,  1018,  1019,  1020,  1021,  1023,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1034,  1035,  1037,  1038,  1039,  1040,  1044,  1045,  1046,  1047,
    1049,  1050,  1052,  1053,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1065,  1066,  1070,  1071,  1073,  1074,  1079,  1080,  1081,
    1085,  1086,  1087,  1089,  1090,  1091,  1092,  1093,  1095,  1097,
    1099,  1100,  1101,  1102,  1103,  1104,  1106,  1107,  1108,  1109,
    1110,  1111,  1113,  1113,  1115,  1117,  1119,  1121,  1122,  1123,
    1124,  1126,  1126,  1126,  1126,  1126,  1126,  1126,  1126,  1128,
    1130,  1132,  1133,  1135,  1136,  1138,  1140,  1142,  1153,  1157,
    1168,  1200,  1209,  1209,  1216,  1216,  1218,  1218,  1225,  1229,
    1234,  1242,  1248,  1252,  1257,  1258,  1260,  1260,  1262,  1262,
    1264,  1265,  1267,  1267,  1273,  1274,  1276,  1280,  1285,  1291,
    1298,  1299,  1300,  1301,  1303,  1304,  1305,  1311,  1311,  1313,
    1315,  1319,  1324,  1334,  1341,  1349,  1373,  1374,  1375,  1376,
    1377,  1378,  1379,  1380,  1381,  1382,  1384,  1390,  1390,  1393,
    1397
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
  "INDEX_IVFFLAT", "INDEX_HNSW", "INDEX_IVFPQ", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "table_elem_commalist", "table_elem", "column_def",
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
  "index_order_type", "query_list", "query_item", "order_list",
  "order_desc", "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "opt_window", "opt_partition", "opt_frame_clause", "frame_type",
  "frame_bound", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "vector_literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-363)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-348)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     691,    24,    57,    61,    71,    57,   148,    41,    44,   -18,
      57,    66,    20,   190,   163,   252,   261,    11,    11,    11,
     292,   124,  -363,    92,  -363,    92,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   -33,
    -363,   299,   144,  -363,   155,   280,  -363,   227,   227,   227,
      57,   375,    57,   257,  -363,   248,   -33,   269,   -51,   248,
     248,   248,    57,  -363,   273,   214,  -363,   210,  -363,  -363,
    -363,  -363,  -363,   686,  -363,   314,  -363,  -363,   306,    56,
    -363,   156,  -363,   433,    37,   435,   312,   305,    57,    57,
     355,  -363,   347,   249,   442,   399,    57,   253,   254,   450,
     450,   450,   452,    57,    57,  -363,   270,   252,   453,  -363,
     279,   454,   464,  -363,  -363,  -363,   -33,   357,   349,   -33,
      -9,  -363,  -363,  -363,  -363,   473,   476,  -363,   477,  -363,
    -363,  -363,   286,   285,  -363,  -363,  -363,  -363,  -363,   618,
    -363,  -363,  -363,  -363,  -363,  -363,   437,    57,   -58,   249,
     339,  -363,   450,   480,    -5,   310,   -56,  -363,  -363,   393,
    -363,  -363,   373,  -363,   373,   373,  -363,  -363,  -363,  -363,
    -363,   302,   493,  -363,  -363,   339,   418,  -363,  -363,    56,
    -363,  -363,   413,   418,   339,   126,   378,  -363,  -363,   278,
    -363,    37,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   417,   502,
     390,   223,   379,   175,   315,   319,   320,   180,   463,   316,
     467,  -363,   303,    68,   501,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   406,  -363,  -112,   324,  -363,   339,   442,  -363,   481,
    -363,  -363,   470,  -363,   355,  -363,   520,   329,    89,  -363,
     431,   330,  -363,    34,    -9,   -33,   164,   331,  -363,   134,
      -9,    68,   474,    16,    23,  -363,   378,  -363,  -363,  -363,
     530,   439,  -363,   792,   412,   342,   161,  -363,  -363,  -363,
     390,    10,    22,   482,   278,   339,   339,   174,   -46,   345,
     467,   752,   339,   127,   348,   -42,   339,   339,   467,  -363,
     467,   -50,   346,   -49,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   454,
      57,  -363,   540,    37,    68,  -363,   248,   375,  -363,   369,
      37,  -363,   493,    21,   355,  -363,   339,  -363,   543,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,   544,   339,  -363,  -363,
    -363,   378,   339,   339,  -363,   382,   425,  -363,   -84,  -363,
    -363,   358,   450,  -363,  -363,   361,   364,  -363,   365,  -363,
    -363,   366,  -363,  -363,   367,  -363,  -363,  -363,  -363,   368,
    -363,  -363,   135,   370,   480,  -363,   223,  -363,   484,   339,
    -363,  -363,   354,   469,   211,   147,   208,   339,   339,  -363,
     482,   483,   100,  -363,  -363,  -363,   458,   734,   793,   467,
     389,   303,  -363,   466,   396,   793,   793,   793,   793,   392,
     392,   392,   392,   127,   127,  -100,  -100,  -100,   -60,   397,
    -363,  -363,   166,   583,  -363,   584,   177,  -363,   390,  -363,
      97,  -363,   394,  -363,    26,  -363,   522,  -363,  -363,  -363,
     398,  -363,  -363,  -363,    68,    68,  -363,   531,   480,  -363,
     434,  -363,   480,  -363,   589,   593,   597,  -363,   598,   601,
     603,  -363,   486,  -363,  -363,   504,  -363,   135,  -363,   480,
     187,  -363,   419,  -363,   194,  -363,   339,   792,   339,   339,
    -363,   113,   165,   416,  -363,   467,   793,   303,   420,   196,
    -363,  -363,  -363,  -363,  -363,  -363,   424,   513,  -363,  -363,
    -363,   546,   547,   548,   523,    21,   621,  -363,  -363,  -363,
     500,  -363,   544,  -363,    -3,  -363,   200,   436,   440,   201,
     441,   443,   444,  -363,  -363,  -363,   205,  -363,   527,   484,
     -38,   447,    68,   235,  -363,   339,  -363,   752,   448,   212,
    -363,  -363,    26,    21,  -363,  -363,  -363,    21,    99,   451,
     339,  -363,  -363,   515,  -363,  -363,  -363,   632,  -363,  -363,
    -363,  -363,   517,   418,  -363,  -363,  -363,  -363,    68,  -363,
    -363,  -363,  -363,   300,   480,   -27,   457,   449,   339,   265,
     461,   339,   216,   339,  -363,   645,  -363,   330,  -363,  -363,
    -363,   465,    51,    30,    68,  -363,  -363,    68,   488,   230,
    -363,  -363,    75,    50,   104,  -363,  -363,   456,   472,   643,
    -363,   645,  -363,  -363,   538,  -363,  -363,  -363,  -363,  -363,
      50,  -363
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    31,    31,
       0,   348,     3,    22,    19,    22,    18,     8,     9,     7,
      11,    16,    17,    13,    14,    12,    15,    20,    10,     0,
     327,     0,   302,   106,    34,     0,    46,    53,    53,    53,
       0,     0,     0,     0,   301,   101,     0,     0,     0,   101,
     101,   101,     0,    44,     0,   329,   330,     0,    30,    27,
      29,    28,     1,   328,     2,     0,     6,     5,   162,   116,
     117,   148,    98,     0,   172,     0,     0,     0,     0,     0,
     141,    38,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     4,
       0,     0,   135,   129,   130,   128,     0,   132,     0,     0,
     168,   303,   280,   283,   285,     0,     0,   286,     0,   281,
     282,   291,     0,   171,   173,   271,   272,   273,   274,   284,
     275,   276,   277,   278,    33,    32,     0,     0,     0,   110,
       0,   105,     0,     0,     0,     0,   141,   112,   100,     0,
     124,   123,    41,    39,    41,    41,    99,    96,    97,   332,
     331,     0,     0,   161,   134,     0,   148,   120,   119,   121,
     131,   127,     0,   148,     0,     0,   315,   279,   287,   290,
      35,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   288,    52,     0,     0,
     328,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,   269,     0,   140,   176,   183,   184,   185,   178,   180,
     186,   179,   199,   187,   188,   189,   190,   182,   177,   192,
     193,     0,   349,     0,     0,   108,     0,     0,   111,     0,
     102,   103,     0,    43,   141,    42,     0,    25,     0,    23,
     138,   136,   169,   313,   168,     0,   267,   146,   155,   160,
     168,   164,   166,   163,     0,   125,   314,   316,   289,   174,
     305,     0,    49,     0,     0,     0,     0,    54,    56,    57,
     328,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,     0,   194,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,   114,   113,   101,     0,    37,     0,
       0,    21,     0,     0,   141,   137,     0,   311,     0,   312,
     175,   118,   122,   150,   149,   151,     0,     0,   159,   158,
     157,   315,     0,     0,   320,     0,     0,   322,   326,   317,
     304,     0,     0,    79,    73,     0,     0,    75,    85,    76,
      62,     0,    70,    71,     0,    67,    68,    74,    77,    82,
      72,    63,    87,     0,     0,    48,     0,    51,   234,     0,
     268,   270,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,     0,   191,   181,   210,   211,     0,   206,     0,
       0,     0,   197,     0,   209,   208,   224,   225,   226,   227,
     228,   229,   230,   201,   200,   203,   202,   204,   205,     0,
      36,   350,     0,     0,    40,     0,     0,    24,   328,   139,
     292,   294,     0,   296,   309,   295,   143,   170,   310,   154,
     147,   153,   156,   126,   167,   165,   323,     0,     0,   325,
       0,   318,     0,    47,     0,     0,     0,    69,     0,     0,
       0,    78,     0,    91,    92,     0,    58,    86,    88,     0,
       0,    55,     0,   231,     0,   222,     0,     0,     0,     0,
     216,     0,     0,     0,   264,     0,   207,     0,     0,     0,
     198,   265,   107,   104,   115,    26,     0,     0,   344,   336,
     342,   340,   343,   338,     0,     0,     0,   308,   300,   306,
       0,   133,     0,   321,   326,   324,     0,     0,     0,     0,
       0,     0,     0,    90,    93,    89,     0,    95,   236,   234,
       0,     0,   220,     0,   219,     0,   223,   266,     0,     0,
     214,   212,   309,     0,   339,   341,   337,     0,   293,   310,
       0,   152,   319,     0,    66,    65,    84,     0,    80,    64,
      81,    94,     0,   148,   232,   248,   249,   217,   221,   215,
     213,   297,   333,   345,     0,   145,     0,     0,     0,   239,
       0,     0,     0,     0,   142,     0,    83,   235,   240,   241,
     242,     0,     0,     0,   346,   334,   307,   144,     0,     0,
      59,   233,     0,     0,     0,   247,   237,   267,     0,     0,
      50,     0,   246,   244,     0,   245,   243,   335,    61,    60,
       0,   238
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,   586,  -363,   635,  -363,   323,  -363,   293,
    -363,  -363,  -363,  -363,   332,   -93,   160,  -363,  -363,  -363,
     284,  -363,   274,  -363,  -363,    35,   176,  -363,  -363,  -363,
    -363,   184,  -363,  -363,   -45,  -363,  -363,  -363,  -363,  -363,
    -363,   525,  -363,  -363,   428,  -363,  -205,   -75,  -363,    83,
     -55,   -43,  -363,  -363,   -88,   381,  -363,  -363,  -363,  -120,
    -363,  -363,  -174,  -363,  -363,   150,  -363,   326,  -363,  -363,
     -14,  -298,  -363,   -92,   350,  -150,  -208,  -363,  -363,  -363,
    -363,  -363,  -363,   400,  -363,  -363,  -363,   146,  -363,  -363,
    -363,  -362,  -363,  -363,  -144,  -363,  -363,  -363,  -363,  -363,
      63,   -64,  -363,   -82,  -363,  -363,   -90,  -363,  -363,  -363,
    -363,  -363,  -331,   136,  -363,  -363,  -363,     1,  -363,  -363,
     138,   446,  -363,   341,  -363,   427,  -363,   170,  -363,  -363,
    -363,   600,  -363,  -363,  -363,  -363,  -347
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    20,    21,    22,    23,    76,   258,   259,    24,    69,
      25,   145,    26,    27,    92,   162,   253,    28,    29,    30,
      87,   286,   287,   288,   619,   620,   392,   481,   477,   486,
     487,   488,   289,    31,    96,    32,   250,   251,    33,    34,
      35,   154,    36,   156,   157,    37,    38,   176,   177,   178,
      80,   116,   117,   181,    81,   175,   260,   344,   345,   151,
     531,   604,   120,   356,   460,   461,   267,   268,   360,   112,
     186,   261,   132,   133,   262,   263,   224,   225,   226,   227,
     228,   229,   230,   298,   231,   232,   233,   493,   583,   611,
     612,   626,   234,   235,   204,   205,   206,   236,   237,   238,
     239,   240,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   449,   450,   451,   452,   453,    53,   454,   371,   527,
     528,   529,   350,   275,   276,   277,   368,   471,    39,    40,
      65,    66,   455,   524,   615,    74,   243
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     223,    98,   264,    43,   412,   282,    46,   164,   165,   270,
     301,    54,   303,    58,   102,   103,   104,   163,   163,   163,
     134,   173,   174,    42,    42,   400,   603,    78,   179,   347,
     150,   179,   269,   627,   271,   273,   248,   347,   119,   209,
     314,   122,   123,   124,   183,   278,   100,   490,   184,   407,
     468,    90,    41,    93,   419,    78,   622,   622,   422,   241,
      42,   244,   125,   105,    44,   113,   185,   297,   623,   408,
     163,   210,   305,   363,    45,   409,   423,   306,   469,   470,
     314,   306,   420,    52,   331,   397,   101,   332,   364,   148,
     149,   328,   301,   329,   307,    57,   334,   159,   307,   245,
     417,   494,   418,   114,   167,   168,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   534,    79,   509,   517,   536,   517,   279,   126,   213,
     122,   123,   124,   329,   338,   306,   265,   211,    50,    97,
     115,    51,   546,   247,   127,   404,   405,   365,   208,    55,
     403,   125,   307,   306,   414,   526,   415,   416,   585,   469,
     470,   366,    56,   348,   482,   113,   518,   304,   518,    68,
     307,   519,   346,   519,   214,   215,   216,   179,   520,   521,
     520,   521,    62,   213,   122,   123,   124,   306,   367,   169,
     352,   128,   129,   130,   568,   522,   332,   522,   483,  -345,
     523,  -345,   523,   114,   307,   125,   398,   269,    75,   559,
     401,   506,   464,   465,   217,    56,   448,   126,   221,   624,
     624,    47,   625,   625,   456,    63,   283,   358,   214,   215,
     216,    48,   306,   127,   554,   118,   593,   131,   402,   439,
     115,   442,   484,   516,   272,   632,   633,   602,   446,   307,
     351,   218,   284,   306,   359,    64,   361,   501,   502,   498,
     485,   634,    49,    59,    67,   219,   306,   314,   217,   134,
     307,   126,   595,    60,   635,   636,   134,   555,   641,   473,
     128,   129,   130,   307,   306,   341,   285,   127,   342,   296,
     163,   443,    72,   306,   504,   296,  -298,   557,  -299,   346,
     607,   307,    82,   499,    61,   218,   213,   122,   123,   124,
     307,    70,    71,   220,   221,   325,   326,   327,   328,   219,
     329,   222,    73,   408,   254,   255,   131,   517,   125,   500,
     306,   440,    88,    89,   128,   129,   130,   353,   354,   355,
     497,    83,   213,   122,   123,   124,   550,   307,   552,   553,
      84,   214,   215,   216,   306,   503,   587,   395,    86,   291,
     396,   292,   512,    78,   125,   191,   508,   220,   221,   518,
     291,   307,   292,   515,   519,   222,   191,    85,    91,    95,
     131,   520,   521,   547,    94,   600,   332,   214,   215,   216,
     549,   217,   561,   346,   126,   346,   573,   576,   522,   332,
     577,   581,   106,   523,   332,   588,    99,   108,   590,   599,
     127,   346,   616,   107,   110,   332,   266,   122,   123,   124,
     192,   193,   194,   195,   196,   197,   630,   217,   218,   631,
     126,   608,   609,   610,   111,   601,   121,   146,   125,   144,
     147,   150,   219,   152,   153,   155,   127,   158,   309,   160,
     161,   614,   558,   617,   122,   166,   171,   128,   129,   130,
     124,   214,   215,   216,   218,    56,   213,   122,   123,   124,
     213,   122,   123,   124,   172,   180,   174,   187,   219,   182,
     188,   189,   190,   242,   191,   207,   246,   249,   125,   252,
     220,   221,   125,   128,   129,   130,   257,   118,   222,   256,
     274,   217,   280,   131,   126,   281,    15,   330,   290,   302,
     293,   299,   215,   216,   294,   295,   215,   216,   308,   333,
     127,   337,   336,   339,   340,   313,   220,   221,   343,   346,
     357,   362,   314,   370,   222,   372,   393,   394,   218,   131,
     410,   421,    78,   441,   413,   445,   458,   466,   459,   467,
     495,   217,   219,   472,   126,   217,   474,   309,   126,   475,
     476,   478,   479,   480,   492,   489,   496,   128,   129,   130,
     127,  -348,  -348,   510,   127,  -348,  -348,   306,   323,   324,
     325,   326,   327,   328,   507,   329,   513,   419,   300,   329,
     514,   511,   300,   525,   530,   537,   533,   532,   535,   538,
     220,   221,   219,   539,   540,   310,   219,   541,   222,   542,
     543,   544,   556,   131,   548,   563,   560,   128,   129,   130,
     562,   128,   129,   130,   569,   567,   311,   564,   565,   566,
     570,   596,   574,   312,   313,   582,   575,   578,   597,   579,
     580,   314,   315,   586,   589,   606,   594,   598,   618,   638,
     220,   221,   605,   292,   220,   221,   613,   640,   222,   109,
      77,   621,   222,   131,   629,   447,   639,   131,   637,   444,
     491,   545,   399,   551,   212,   335,   628,   316,   317,   318,
     319,   320,   571,   462,   321,   322,  -347,   323,   324,   325,
     326,   327,   328,     1,   329,   584,   457,   406,     1,   592,
     591,     2,   463,   369,   572,     0,     2,   170,     3,   349,
       0,     0,     0,     3,     4,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     5,     0,     0,     6,     7,
       5,     0,     0,     6,     7,     0,     0,     0,     0,     0,
       8,     9,     0,     0,     0,     8,     9,     0,     0,     0,
       0,    10,     0,     0,    11,     0,    10,     0,     0,    11,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,    12,     0,     0,     0,
      13,    12,     0,     0,     0,    13,     0,     0,     0,     0,
     309,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,    14,    15,   373,     0,     0,     0,    15,   309,     0,
       0,     0,     0,    16,     0,     0,   374,   375,    16,     0,
       0,     0,     0,   376,   377,   378,   379,   380,     0,   381,
       0,     0,     0,     0,     0,     0,     0,   382,   310,     0,
       0,     0,     0,     0,     0,    17,    18,    19,     0,   309,
      17,    18,    19,   505,     0,     0,   310,     0,     0,   411,
       0,     0,     0,   383,     0,     0,     0,   313,     0,     0,
       0,     0,     0,     0,   314,   315,     0,   411,     0,     0,
       0,   384,     0,   385,   386,   313,     0,     0,     0,     0,
       0,     0,   314,   315,     0,     0,     0,  -348,   387,     0,
       0,     0,     0,   388,     0,   389,     0,     0,     0,     0,
     316,   317,   318,   319,   320,   390,     0,   321,   322,     0,
     323,   324,   325,   326,   327,   328,   313,   329,   316,   317,
     318,   319,   320,   314,  -348,   321,   322,     0,   323,   324,
     325,   326,   327,   328,     0,   329,     0,     0,     0,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -348,
    -348,  -348,   319,   320,     0,     0,   321,   322,     0,   323,
     324,   325,   326,   327,   328,     0,   329
};

static const yytype_int16 yycheck[] =
{
     150,    56,   176,     2,   302,   210,     5,   100,   101,   183,
     218,    10,   220,    12,    59,    60,    61,    99,   100,   101,
      84,   111,    12,     3,     3,     3,    53,    60,   116,     3,
      86,   119,   182,     3,   184,   185,   156,     3,    81,    97,
     140,     4,     5,     6,   119,   189,    97,   394,    57,    95,
     134,    50,    28,    52,   104,    60,     6,     6,   107,   152,
       3,    66,    25,    62,     3,     9,    75,   217,    17,   115,
     152,   129,   222,    57,     3,   121,   125,   119,   162,   163,
     140,   119,   132,   101,   196,   290,   137,   199,    65,    88,
      89,   191,   300,   193,   136,    12,   246,    96,   136,   154,
     308,   399,   310,    47,   103,   104,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   468,    39,   421,    27,   472,    27,   191,    91,     3,
       4,     5,     6,   193,   254,   119,   179,   195,    97,    56,
      84,    97,   489,   199,   107,   295,   296,   124,   147,    83,
     294,    25,   136,   119,   196,   129,   306,   307,   196,   162,
     163,   138,   195,   129,    29,     9,    69,   222,    69,   158,
     136,    74,   199,    74,    48,    49,    50,   265,    81,    82,
      81,    82,    19,     3,     4,     5,     6,   119,   165,   106,
     265,   154,   155,   156,   525,    98,   199,    98,    63,   102,
     103,   102,   103,    47,   136,    25,   196,   357,   116,   507,
     188,   419,   362,   363,    88,   195,   195,    91,   188,   169,
     169,    73,   172,   172,   344,    62,     3,    93,    48,    49,
      50,    83,   119,   107,   121,    79,   567,   200,   293,   329,
      84,   333,   107,   448,   118,   170,   171,   594,   340,   136,
     264,   125,    29,   119,   120,     3,   270,   407,   408,   112,
     125,   623,   114,    73,     3,   139,   119,   140,    88,   333,
     136,    91,   570,    83,   170,   171,   340,   112,   640,   372,
     154,   155,   156,   136,   119,   196,    63,   107,   199,   115,
     372,   336,     0,   119,   194,   115,   199,   505,   199,   199,
     598,   136,     3,    95,   114,   125,     3,     4,     5,     6,
     136,    18,    19,   187,   188,   188,   189,   190,   191,   139,
     193,   195,   198,   115,   164,   165,   200,    27,    25,   121,
     119,   330,    48,    49,   154,   155,   156,   173,   174,   175,
     129,   197,     3,     4,     5,     6,   496,   136,   498,   499,
     195,    48,    49,    50,   119,   410,   121,   196,   131,   195,
     199,   197,   196,    60,    25,   199,   421,   187,   188,    69,
     195,   136,   197,   196,    74,   195,   199,    97,     3,   131,
     200,    81,    82,   196,   127,    85,   199,    48,    49,    50,
     196,    88,   196,   199,    91,   199,   196,   196,    98,   199,
     199,   196,   129,   103,   199,   555,   137,   197,   196,   583,
     107,   199,   196,   199,   100,   199,     3,     4,     5,     6,
     142,   143,   144,   145,   146,   147,   196,    88,   125,   199,
      91,   166,   167,   168,   128,   135,     3,   125,    25,     4,
     135,    86,   139,    96,   195,     3,   107,    48,    56,   196,
     196,   601,   507,   603,     4,     3,     3,   154,   155,   156,
       6,    48,    49,    50,   125,   195,     3,     4,     5,     6,
       3,     4,     5,     6,   195,   118,    12,     4,   139,   130,
       4,     4,   196,     3,   199,    48,   176,    94,    25,   116,
     187,   188,    25,   154,   155,   156,     3,    79,   195,   197,
     122,    88,    85,   200,    91,     3,   116,   101,   129,   193,
     195,    48,    49,    50,   195,   195,    49,    50,    17,   195,
     107,    51,    41,     3,   195,   133,   187,   188,    97,   199,
     199,    57,   140,     3,   195,    96,   124,   195,   125,   200,
     195,   195,    60,     3,   196,   176,     3,   165,     4,   124,
     196,    88,   139,   195,    91,    88,   195,    56,    91,   195,
     195,   195,   195,   195,    80,   195,    97,   154,   155,   156,
     107,   179,   180,   107,   107,   183,   184,   119,   186,   187,
     188,   189,   190,   191,   195,   193,     3,   104,   125,   193,
       6,   194,   125,   199,    72,     6,    65,   199,   164,     6,
     187,   188,   139,     6,     6,   104,   139,     6,   195,     6,
     124,   107,   196,   200,   195,   102,   196,   154,   155,   156,
     196,   154,   155,   156,     3,   102,   125,    81,    81,    81,
     130,   116,   196,   132,   133,   108,   196,   196,     6,   196,
     196,   140,   141,   196,   196,   196,   195,   130,     3,     6,
     187,   188,   195,   197,   187,   188,   195,   119,   195,    73,
      25,   196,   195,   200,   176,   342,   631,   200,   196,   337,
     396,   487,   291,   497,   149,   247,   613,   176,   177,   178,
     179,   180,   532,   357,   183,   184,     0,   186,   187,   188,
     189,   190,   191,     7,   193,   549,   346,   297,     7,   563,
     562,    15,   361,   276,   534,    -1,    15,   107,    22,   263,
      -1,    -1,    -1,    22,    28,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      39,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    65,    -1,    -1,    68,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      94,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,   110,   116,    11,    -1,    -1,    -1,   116,    56,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    24,    25,   127,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,   104,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,   161,    -1,    56,
     159,   160,   161,   119,    -1,    -1,   104,    -1,    -1,   125,
      -1,    -1,    -1,    71,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,    -1,   125,    -1,    -1,
      -1,    89,    -1,    91,    92,   133,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,    -1,    -1,    -1,   104,   106,    -1,
      -1,    -1,    -1,   111,    -1,   113,    -1,    -1,    -1,    -1,
     176,   177,   178,   179,   180,   123,    -1,   183,   184,    -1,
     186,   187,   188,   189,   190,   191,   133,   193,   176,   177,
     178,   179,   180,   140,   141,   183,   184,    -1,   186,   187,
     188,   189,   190,   191,    -1,   193,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
     177,   178,   179,   180,    -1,    -1,   183,   184,    -1,   186,
     187,   188,   189,   190,   191,    -1,   193
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    28,    39,    42,    43,    54,    55,
      65,    68,    90,    94,   110,   116,   127,   159,   160,   161,
     202,   203,   204,   205,   209,   211,   213,   214,   218,   219,
     220,   234,   236,   239,   240,   241,   243,   246,   247,   329,
     330,    28,     3,   318,     3,     3,   318,    73,    83,   114,
      97,    97,   101,   317,   318,    83,   195,   250,   318,    73,
      83,   114,    19,    62,     3,   331,   332,     3,   158,   210,
     210,   210,     0,   198,   336,   116,   206,   206,    60,   250,
     251,   255,     3,   197,   195,    97,   131,   221,   221,   221,
     318,     3,   215,   318,   127,   131,   235,   250,   251,   137,
      97,   137,   235,   235,   235,   318,   129,   199,   197,   204,
     100,   128,   270,     9,    47,    84,   252,   253,    79,   252,
     263,     3,     4,     5,     6,    25,    91,   107,   154,   155,
     156,   200,   273,   274,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     4,   212,   125,   135,   318,   318,
      86,   260,    96,   195,   242,     3,   244,   245,    48,   318,
     196,   196,   216,   304,   216,   216,     3,   318,   318,   250,
     332,     3,   195,   307,    12,   256,   248,   249,   250,   255,
     118,   254,   130,   248,    57,    75,   271,     4,     4,     4,
     196,   199,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   295,   296,   297,    48,   318,    97,
     129,   195,   242,     3,    48,    49,    50,    88,   125,   139,
     187,   188,   195,   276,   277,   278,   279,   280,   281,   282,
     283,   285,   286,   287,   293,   294,   298,   299,   300,   301,
     302,   216,     3,   337,    66,   251,   176,   199,   260,    94,
     237,   238,   116,   217,   217,   217,   197,     3,   207,   208,
     257,   272,   275,   276,   263,   252,     3,   267,   268,   276,
     263,   276,   118,   276,   122,   324,   325,   326,   295,   302,
      85,     3,   247,     3,    29,    63,   222,   223,   224,   233,
     129,   195,   197,   195,   195,   195,   115,   276,   284,    48,
     125,   277,   193,   277,   251,   276,   119,   136,    17,    56,
     104,   125,   132,   133,   140,   141,   176,   177,   178,   179,
     180,   183,   184,   186,   187,   188,   189,   190,   191,   193,
     101,   196,   199,   195,   276,   245,    41,    51,   260,     3,
     195,   196,   199,    97,   258,   259,   199,     3,   129,   322,
     323,   271,   248,   173,   174,   175,   264,   199,    93,   120,
     269,   271,    57,    57,    65,   124,   138,   165,   327,   326,
       3,   319,    96,    11,    24,    25,    31,    32,    33,    34,
      35,    37,    45,    71,    89,    91,    92,   106,   111,   113,
     123,   157,   227,   124,   195,   196,   199,   247,   196,   256,
       3,   188,   251,   295,   276,   276,   284,    95,   115,   121,
     195,   125,   272,   196,   196,   276,   276,   277,   277,   104,
     132,   195,   107,   125,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   307,
     318,     3,   274,   235,   215,   176,   274,   208,   195,   312,
     313,   314,   315,   316,   318,   333,   260,   275,     3,     4,
     265,   266,   268,   324,   276,   276,   165,   124,   134,   162,
     163,   328,   195,   216,   195,   195,   195,   229,   195,   195,
     195,   228,    29,    63,   107,   125,   230,   231,   232,   195,
     337,   223,    80,   288,   272,   196,    97,   129,   112,    95,
     121,   276,   276,   251,   194,   119,   277,   195,   251,   272,
     107,   194,   196,     3,     6,   196,   247,    27,    69,    74,
      81,    82,    98,   103,   334,   199,   129,   320,   321,   322,
      72,   261,   199,    65,   337,   164,   337,     6,     6,     6,
       6,     6,     6,   124,   107,   232,   337,   196,   195,   196,
     276,   227,   276,   276,   121,   112,   196,   277,   251,   272,
     196,   196,   196,   102,    81,    81,    81,   102,   313,     3,
     130,   266,   328,   196,   196,   196,   196,   199,   196,   196,
     196,   196,   108,   289,   288,   196,   196,   121,   276,   196,
     196,   321,   314,   313,   195,   272,   116,     6,   130,   263,
      85,   135,   337,    53,   262,   195,   196,   272,   166,   167,
     168,   290,   291,   195,   276,   335,   196,   276,     3,   225,
     226,   196,     6,    17,   169,   172,   292,     3,   301,   176,
     196,   199,   170,   171,   292,   170,   171,   196,     6,   226,
     119,   292
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   201,   202,   203,   203,   204,   204,   204,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   209,
     210,   210,   211,   212,   213,   213,   214,   214,   215,   216,
     217,   217,   218,   218,   219,   219,   219,   220,   220,   220,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   225,
     225,   226,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   228,   228,   229,   229,   229,   230,   230,   231,   231,
     232,   232,   232,   232,   233,   233,   234,   234,   234,   234,
     235,   235,   236,   237,   238,   239,   240,   241,   241,   242,
     242,   243,   244,   244,   245,   246,   247,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   252,   253,   253,
     253,   254,   254,   255,   256,   256,   257,   258,   258,   259,
     260,   260,   261,   261,   262,   262,   263,   263,   263,   264,
     264,   264,   265,   265,   266,   267,   267,   268,   269,   269,
     269,   270,   270,   271,   271,   271,   271,   271,   271,   272,
     272,   273,   273,   274,   274,   275,   276,   276,   276,   276,
     276,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   278,   278,   279,   279,   279,   279,   279,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     281,   281,   282,   282,   282,   282,   283,   283,   283,   283,
     284,   284,   285,   285,   286,   286,   286,   286,   286,   286,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   290,
     291,   291,   291,   292,   292,   292,   292,   292,   293,   294,
     295,   295,   295,   295,   295,   295,   296,   296,   296,   296,
     296,   296,   297,   297,   298,   299,   300,   301,   301,   301,
     301,   302,   302,   302,   302,   302,   302,   302,   302,   303,
     304,   305,   305,   306,   306,   307,   308,   309,   310,   310,
     310,   311,   312,   312,   313,   313,   314,   314,   315,   315,
     316,   317,   318,   318,   319,   319,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   326,
     327,   327,   327,   327,   328,   328,   328,   329,   329,   330,
     331,   331,   332,   333,   333,   333,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   335,   336,   336,   337,
     337
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
       2,     0,     4,     0,     2,     0,     3,     5,     0,     1,
       1,     1,     3,     1,     1,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     2,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     6,     0,     3,     0,     2,     5,     0,
       1,     1,     1,     2,     2,     2,     2,     1,     6,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     1,     2,     3,     5,
       1,     3,     1,     2,     2,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
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
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2121 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 174 "bison_parser.y"
                { }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 174 "bison_parser.y"
                { }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).stmt_vec)) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2152 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2158 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2164 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2177 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2190 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2214 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2220 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2226 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 174 "bison_parser.y"
                { }
#line 2232 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2238 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 174 "bison_parser.y"
                { }
#line 2244 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2250 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2256 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2262 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 174 "bison_parser.y"
                { }
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).table_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2281 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2287 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2293 "bison_parser.cpp"
        break;

    case YYSYMBOL_float_index_elem_commalist: /* float_index_elem_commalist  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).table_index_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_index_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_index_element_vec));
    }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_float_index_elem: /* float_index_elem  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table_index_element_t)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 174 "bison_parser.y"
                { }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 174 "bison_parser.y"
                { }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 174 "bison_parser.y"
                { }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 174 "bison_parser.y"
                { }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 174 "bison_parser.y"
                { }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 174 "bison_parser.y"
                { }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 179 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2421 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).update_vec)) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2434 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2440 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_statement: /* set_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).set_stmt)); }
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2458 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2464 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2470 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2476 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2482 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2488 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 174 "bison_parser.y"
                { }
#line 2494 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2500 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 174 "bison_parser.y"
                { }
#line 2506 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2562 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_order_type: /* index_order_type  */
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2568 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_list: /* query_list  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).queries_vec)); }
#line 2574 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_item: /* query_item  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).query_vec)); }
#line 2580 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2593 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2599 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 174 "bison_parser.y"
                { }
#line 2605 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2611 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2617 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2630 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2643 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2710 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2722 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2728 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2734 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).window_description)); }
#line 2740 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2753 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).frame_description)); }
#line 2759 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 174 "bison_parser.y"
                { }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).frame_bound)); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 174 "bison_parser.y"
                { }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 174 "bison_parser.y"
                { }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 174 "bison_parser.y"
                { }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_vector_literal: /* vector_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2855 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2861 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2867 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2873 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2879 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2885 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2891 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2897 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2903 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 188 "bison_parser.y"
                {
      if (((*yyvaluep).table_vec)) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2916 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2922 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2928 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 175 "bison_parser.y"
                {
      free( (((*yyvaluep).table_name).name) );
      free( (((*yyvaluep).table_name).schema) );
    }
#line 2937 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 187 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2943 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2949 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2955 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2961 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2967 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2973 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2979 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2985 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 174 "bison_parser.y"
                { }
#line 2991 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 174 "bison_parser.y"
                { }
#line 2997 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3003 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3009 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 3015 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 3021 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 3027 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 174 "bison_parser.y"
                { }
#line 3033 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 196 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 3039 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 179 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 3052 "bison_parser.cpp"
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

#line 3160 "bison_parser.cpp"

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
#line 335 "bison_parser.y"
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
#line 3389 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 354 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3400 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 360 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3411 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 367 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3420 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 371 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3429 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 375 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3435 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 376 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3441 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3447 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 379 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3453 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 380 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3459 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3465 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 382 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3471 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 383 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3477 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 384 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3483 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 385 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3489 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 386 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3495 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 387 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3501 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 388 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3507 "bison_parser.cpp"
    break;

  case 20: /* preparable_statement: set_statement  */
#line 389 "bison_parser.y"
                { (yyval.statement) = (yyvsp[0].set_stmt); }
#line 3513 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 395 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3519 "bison_parser.cpp"
    break;

  case 22: /* opt_hints: %empty  */
#line 396 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3525 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint  */
#line 398 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3534 "bison_parser.cpp"
    break;

  case 24: /* hint_list: hint_list ',' hint  */
#line 402 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3543 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER  */
#line 407 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3552 "bison_parser.cpp"
    break;

  case 26: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 411 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3562 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 421 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3568 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 422 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3574 "bison_parser.cpp"
    break;

  case 29: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 423 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3580 "bison_parser.cpp"
    break;

  case 32: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 431 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3590 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER  */
#line 439 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3599 "bison_parser.cpp"
    break;

  case 35: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 443 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3609 "bison_parser.cpp"
    break;

  case 36: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 454 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3620 "bison_parser.cpp"
    break;

  case 37: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 460 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3632 "bison_parser.cpp"
    break;

  case 38: /* file_type: IDENTIFIER  */
#line 468 "bison_parser.y"
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
#line 3651 "bison_parser.cpp"
    break;

  case 39: /* file_path: string_literal  */
#line 483 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3660 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: WITH FORMAT file_type  */
#line 488 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3666 "bison_parser.cpp"
    break;

  case 41: /* opt_file_type: %empty  */
#line 489 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3672 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 495 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3683 "bison_parser.cpp"
    break;

  case 43: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 501 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3693 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW TABLES  */
#line 512 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3699 "bison_parser.cpp"
    break;

  case 45: /* show_statement: SHOW COLUMNS table_name  */
#line 513 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3709 "bison_parser.cpp"
    break;

  case 46: /* show_statement: DESCRIBE table_name  */
#line 518 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3719 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 529 "bison_parser.y"
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
#line 3737 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 542 "bison_parser.y"
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
#line 3754 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 554 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3766 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE INDEX opt_not_exists ON table_name USING opt_index_name '(' ident_commalist ')' WITH '(' float_index_elem_commalist ')'  */
#line 568 "bison_parser.y"
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
#line 3784 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 581 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3797 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: IF NOT EXISTS  */
#line 590 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3803 "bison_parser.cpp"
    break;

  case 53: /* opt_not_exists: %empty  */
#line 591 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3809 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem  */
#line 593 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3818 "bison_parser.cpp"
    break;

  case 55: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 597 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3827 "bison_parser.cpp"
    break;

  case 56: /* table_elem: column_def  */
#line 602 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3833 "bison_parser.cpp"
    break;

  case 57: /* table_elem: table_constraint  */
#line 603 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3839 "bison_parser.cpp"
    break;

  case 58: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 605 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3850 "bison_parser.cpp"
    break;

  case 59: /* float_index_elem_commalist: float_index_elem  */
#line 612 "bison_parser.y"
                                              {
  (yyval.table_index_element_vec) = new std::vector<TableElement*>();
  (yyval.table_index_element_vec)->push_back((yyvsp[0].table_index_element_t));
}
#line 3859 "bison_parser.cpp"
    break;

  case 60: /* float_index_elem_commalist: float_index_elem_commalist ',' float_index_elem  */
#line 616 "bison_parser.y"
                                                  {
  (yyvsp[-2].table_index_element_vec)->push_back((yyvsp[0].table_index_element_t));
  (yyval.table_index_element_vec) = (yyvsp[-2].table_index_element_vec);
}
#line 3868 "bison_parser.cpp"
    break;

  case 61: /* float_index_elem: IDENTIFIER '=' INTVAL  */
#line 621 "bison_parser.y"
                                         { (yyval.table_index_element_t) = new VectorIndexDefinition((yyvsp[-2].sval),(yyvsp[0].ival)); }
#line 3874 "bison_parser.cpp"
    break;

  case 62: /* column_type: BIGINT  */
#line 624 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3880 "bison_parser.cpp"
    break;

  case 63: /* column_type: BOOLEAN  */
#line 625 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3886 "bison_parser.cpp"
    break;

  case 64: /* column_type: CHAR '(' INTVAL ')'  */
#line 626 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3892 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 627 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3898 "bison_parser.cpp"
    break;

  case 66: /* column_type: VECTOR '(' INTVAL ')'  */
#line 628 "bison_parser.y"
                        {(yyval.column_type_t) = ColumnType{DataType::VECTOR, (yyvsp[-1].ival)};}
#line 3904 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 629 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3910 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 630 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3916 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 631 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3925 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 635 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3931 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 636 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3937 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 637 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3943 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 638 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3949 "bison_parser.cpp"
    break;

  case 74: /* column_type: LONG  */
#line 639 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3955 "bison_parser.cpp"
    break;

  case 75: /* column_type: REAL  */
#line 640 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3961 "bison_parser.cpp"
    break;

  case 76: /* column_type: SMALLINT  */
#line 641 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3967 "bison_parser.cpp"
    break;

  case 77: /* column_type: TEXT  */
#line 642 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3973 "bison_parser.cpp"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 643 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3979 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 644 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3985 "bison_parser.cpp"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 645 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3991 "bison_parser.cpp"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 647 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3997 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 648 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4003 "bison_parser.cpp"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 650 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4009 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 651 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4015 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 652 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4021 "bison_parser.cpp"
    break;

  case 86: /* opt_column_constraints: column_constraint_set  */
#line 654 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 4027 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 655 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 4033 "bison_parser.cpp"
    break;

  case 88: /* column_constraint_set: column_constraint  */
#line 657 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 4042 "bison_parser.cpp"
    break;

  case 89: /* column_constraint_set: column_constraint_set column_constraint  */
#line 661 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 4051 "bison_parser.cpp"
    break;

  case 90: /* column_constraint: PRIMARY KEY  */
#line 666 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4057 "bison_parser.cpp"
    break;

  case 91: /* column_constraint: UNIQUE  */
#line 667 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4063 "bison_parser.cpp"
    break;

  case 92: /* column_constraint: NULL  */
#line 668 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4069 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: NOT NULL  */
#line 669 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4075 "bison_parser.cpp"
    break;

  case 94: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 671 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4081 "bison_parser.cpp"
    break;

  case 95: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 672 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4087 "bison_parser.cpp"
    break;

  case 96: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 680 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4098 "bison_parser.cpp"
    break;

  case 97: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 686 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4109 "bison_parser.cpp"
    break;

  case 98: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 692 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4119 "bison_parser.cpp"
    break;

  case 99: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 698 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4129 "bison_parser.cpp"
    break;

  case 100: /* opt_exists: IF EXISTS  */
#line 704 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4135 "bison_parser.cpp"
    break;

  case 101: /* opt_exists: %empty  */
#line 705 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4141 "bison_parser.cpp"
    break;

  case 102: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 712 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4151 "bison_parser.cpp"
    break;

  case 103: /* alter_action: drop_action  */
#line 718 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4157 "bison_parser.cpp"
    break;

  case 104: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 720 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4166 "bison_parser.cpp"
    break;

  case 105: /* delete_statement: DELETE FROM table_name opt_where  */
#line 730 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4177 "bison_parser.cpp"
    break;

  case 106: /* truncate_statement: TRUNCATE table_name  */
#line 737 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4187 "bison_parser.cpp"
    break;

  case 107: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 748 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4199 "bison_parser.cpp"
    break;

  case 108: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 755 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4211 "bison_parser.cpp"
    break;

  case 109: /* opt_column_list: '(' ident_commalist ')'  */
#line 763 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4217 "bison_parser.cpp"
    break;

  case 110: /* opt_column_list: %empty  */
#line 764 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4223 "bison_parser.cpp"
    break;

  case 111: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 771 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4234 "bison_parser.cpp"
    break;

  case 112: /* update_clause_commalist: update_clause  */
#line 778 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4243 "bison_parser.cpp"
    break;

  case 113: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 782 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4252 "bison_parser.cpp"
    break;

  case 114: /* update_clause: IDENTIFIER '=' expr  */
#line 787 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4262 "bison_parser.cpp"
    break;

  case 115: /* set_statement: SET IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER '=' INTVAL  */
#line 797 "bison_parser.y"
                                                                        {
  (yyval.set_stmt) = new SetStatement((yyvsp[-6].sval), (yyvsp[-4].sval), (yyvsp[-2].sval), (yyvsp[0].ival));
 }
#line 4270 "bison_parser.cpp"
    break;

  case 116: /* select_statement: opt_with_clause select_with_paren  */
#line 805 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4279 "bison_parser.cpp"
    break;

  case 117: /* select_statement: opt_with_clause select_no_paren  */
#line 809 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4288 "bison_parser.cpp"
    break;

  case 118: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 813 "bison_parser.y"
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
#line 4304 "bison_parser.cpp"
    break;

  case 121: /* select_within_set_operation_no_parentheses: select_clause  */
#line 827 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4310 "bison_parser.cpp"
    break;

  case 122: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 828 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4323 "bison_parser.cpp"
    break;

  case 123: /* select_with_paren: '(' select_no_paren ')'  */
#line 837 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4329 "bison_parser.cpp"
    break;

  case 124: /* select_with_paren: '(' select_with_paren ')'  */
#line 838 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4335 "bison_parser.cpp"
    break;

  case 125: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 840 "bison_parser.y"
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
#line 4354 "bison_parser.cpp"
    break;

  case 126: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 854 "bison_parser.y"
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
#line 4370 "bison_parser.cpp"
    break;

  case 127: /* set_operator: set_type opt_all  */
#line 866 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4379 "bison_parser.cpp"
    break;

  case 128: /* set_type: UNION  */
#line 871 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4388 "bison_parser.cpp"
    break;

  case 129: /* set_type: INTERSECT  */
#line 875 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4397 "bison_parser.cpp"
    break;

  case 130: /* set_type: EXCEPT  */
#line 879 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4406 "bison_parser.cpp"
    break;

  case 131: /* opt_all: ALL  */
#line 884 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4412 "bison_parser.cpp"
    break;

  case 132: /* opt_all: %empty  */
#line 885 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4418 "bison_parser.cpp"
    break;

  case 133: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 887 "bison_parser.y"
                                                                                            {
  // printf("bison: select_clause\n");
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4433 "bison_parser.cpp"
    break;

  case 134: /* opt_distinct: DISTINCT  */
#line 898 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4439 "bison_parser.cpp"
    break;

  case 135: /* opt_distinct: %empty  */
#line 899 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4445 "bison_parser.cpp"
    break;

  case 137: /* opt_from_clause: from_clause  */
#line 903 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4451 "bison_parser.cpp"
    break;

  case 138: /* opt_from_clause: %empty  */
#line 904 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4457 "bison_parser.cpp"
    break;

  case 139: /* from_clause: FROM table_ref  */
#line 906 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4463 "bison_parser.cpp"
    break;

  case 140: /* opt_where: WHERE expr  */
#line 908 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4469 "bison_parser.cpp"
    break;

  case 141: /* opt_where: %empty  */
#line 909 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4475 "bison_parser.cpp"
    break;

  case 142: /* opt_group: GROUP BY expr_list opt_having  */
#line 911 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4485 "bison_parser.cpp"
    break;

  case 143: /* opt_group: %empty  */
#line 916 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4491 "bison_parser.cpp"
    break;

  case 144: /* opt_having: HAVING expr  */
#line 918 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4497 "bison_parser.cpp"
    break;

  case 145: /* opt_having: %empty  */
#line 919 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4503 "bison_parser.cpp"
    break;

  case 146: /* opt_order: ORDER BY order_list  */
#line 921 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4509 "bison_parser.cpp"
    break;

  case 147: /* opt_order: ORDER BY IDENTIFIER index_order_type query_list  */
#line 922 "bison_parser.y"
                                                 {
  // printf("bison: ORDER BY IDENTIFIER index_order_type query_list\n");
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back(new OrderDescription(kOrderSimilarK, (yyvsp[-2].sval), (yyvsp[-1].sval), (yyvsp[0].queries_vec)));
}
#line 4519 "bison_parser.cpp"
    break;

  case 148: /* opt_order: %empty  */
#line 927 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4525 "bison_parser.cpp"
    break;

  case 149: /* index_order_type: INDEX_HNSW  */
#line 929 "bison_parser.y"
                              {(yyval.sval) = (char*)"hnsw";}
#line 4531 "bison_parser.cpp"
    break;

  case 150: /* index_order_type: INDEX_IVFFLAT  */
#line 930 "bison_parser.y"
                {(yyval.sval) = (char*)"ivfflat";}
#line 4537 "bison_parser.cpp"
    break;

  case 151: /* index_order_type: INDEX_IVFPQ  */
#line 931 "bison_parser.y"
              {(yyval.sval) = (char*)"ivfpq";}
#line 4543 "bison_parser.cpp"
    break;

  case 152: /* query_list: query_list ',' query_item  */
#line 933 "bison_parser.y"
                                       {
  // printf("bison: query_list : query_list ',' query_item \n");
  (yyvsp[-2].queries_vec)->append((yyvsp[0].query_vec));
  (yyval.queries_vec) = (yyvsp[-2].queries_vec);
}
#line 4553 "bison_parser.cpp"
    break;

  case 153: /* query_list: query_item  */
#line 938 "bison_parser.y"
             {
  // printf("bison: query_item\n");
  (yyval.queries_vec) = new VectorQueries();
  (yyval.queries_vec)->append((yyvsp[0].query_vec));
}
#line 4563 "bison_parser.cpp"
    break;

  case 154: /* query_item: STRING  */
#line 944 "bison_parser.y"
                   { 
  // printf("bison: query_item: STRING\n");
  (yyval.query_vec) = Expr::makeQueryVector((yyvsp[0].sval)); }
#line 4571 "bison_parser.cpp"
    break;

  case 155: /* order_list: order_desc  */
#line 948 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4580 "bison_parser.cpp"
    break;

  case 156: /* order_list: order_list ',' order_desc  */
#line 952 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4589 "bison_parser.cpp"
    break;

  case 157: /* order_desc: expr opt_order_type  */
#line 957 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4595 "bison_parser.cpp"
    break;

  case 158: /* opt_order_type: ASC  */
#line 959 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4601 "bison_parser.cpp"
    break;

  case 159: /* opt_order_type: DESC  */
#line 960 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4607 "bison_parser.cpp"
    break;

  case 160: /* opt_order_type: %empty  */
#line 961 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4613 "bison_parser.cpp"
    break;

  case 161: /* opt_top: TOP int_literal  */
#line 965 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4619 "bison_parser.cpp"
    break;

  case 162: /* opt_top: %empty  */
#line 966 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4625 "bison_parser.cpp"
    break;

  case 163: /* opt_limit: LIMIT expr  */
#line 968 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4631 "bison_parser.cpp"
    break;

  case 164: /* opt_limit: OFFSET expr  */
#line 969 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4637 "bison_parser.cpp"
    break;

  case 165: /* opt_limit: LIMIT expr OFFSET expr  */
#line 970 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 166: /* opt_limit: LIMIT ALL  */
#line 971 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4649 "bison_parser.cpp"
    break;

  case 167: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 972 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4655 "bison_parser.cpp"
    break;

  case 168: /* opt_limit: %empty  */
#line 973 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4661 "bison_parser.cpp"
    break;

  case 169: /* expr_list: expr_alias  */
#line 978 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4670 "bison_parser.cpp"
    break;

  case 170: /* expr_list: expr_list ',' expr_alias  */
#line 982 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4679 "bison_parser.cpp"
    break;

  case 171: /* opt_literal_list: literal_list  */
#line 987 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4685 "bison_parser.cpp"
    break;

  case 172: /* opt_literal_list: %empty  */
#line 988 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4691 "bison_parser.cpp"
    break;

  case 173: /* literal_list: literal  */
#line 990 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4700 "bison_parser.cpp"
    break;

  case 174: /* literal_list: literal_list ',' literal  */
#line 994 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4709 "bison_parser.cpp"
    break;

  case 175: /* expr_alias: expr opt_alias  */
#line 999 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4721 "bison_parser.cpp"
    break;

  case 181: /* operand: '(' expr ')'  */
#line 1009 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4727 "bison_parser.cpp"
    break;

  case 191: /* operand: '(' select_no_paren ')'  */
#line 1011 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4735 "bison_parser.cpp"
    break;

  case 194: /* unary_expr: '-' operand  */
#line 1017 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4741 "bison_parser.cpp"
    break;

  case 195: /* unary_expr: NOT operand  */
#line 1018 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4747 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: operand ISNULL  */
#line 1019 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4753 "bison_parser.cpp"
    break;

  case 197: /* unary_expr: operand IS NULL  */
#line 1020 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4759 "bison_parser.cpp"
    break;

  case 198: /* unary_expr: operand IS NOT NULL  */
#line 1021 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4765 "bison_parser.cpp"
    break;

  case 200: /* binary_expr: operand '-' operand  */
#line 1023 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4771 "bison_parser.cpp"
    break;

  case 201: /* binary_expr: operand '+' operand  */
#line 1024 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4777 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '/' operand  */
#line 1025 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4783 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '*' operand  */
#line 1026 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4789 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand '%' operand  */
#line 1027 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4795 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand '^' operand  */
#line 1028 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4801 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand LIKE operand  */
#line 1029 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4807 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand NOT LIKE operand  */
#line 1030 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4813 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand ILIKE operand  */
#line 1031 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4819 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand CONCAT operand  */
#line 1032 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4825 "bison_parser.cpp"
    break;

  case 210: /* logic_expr: expr AND expr  */
#line 1034 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4831 "bison_parser.cpp"
    break;

  case 211: /* logic_expr: expr OR expr  */
#line 1035 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4837 "bison_parser.cpp"
    break;

  case 212: /* in_expr: operand IN '(' expr_list ')'  */
#line 1037 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4843 "bison_parser.cpp"
    break;

  case 213: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1038 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4849 "bison_parser.cpp"
    break;

  case 214: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1039 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4855 "bison_parser.cpp"
    break;

  case 215: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1040 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4861 "bison_parser.cpp"
    break;

  case 216: /* case_expr: CASE expr case_list END  */
#line 1044 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4867 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1045 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4873 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE case_list END  */
#line 1046 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4879 "bison_parser.cpp"
    break;

  case 219: /* case_expr: CASE case_list ELSE expr END  */
#line 1047 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4885 "bison_parser.cpp"
    break;

  case 220: /* case_list: WHEN expr THEN expr  */
#line 1049 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4891 "bison_parser.cpp"
    break;

  case 221: /* case_list: case_list WHEN expr THEN expr  */
#line 1050 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4897 "bison_parser.cpp"
    break;

  case 222: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1052 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4903 "bison_parser.cpp"
    break;

  case 223: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1053 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4909 "bison_parser.cpp"
    break;

  case 224: /* comp_expr: operand '=' operand  */
#line 1055 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4915 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand EQUALS operand  */
#line 1056 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4921 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand NOTEQUALS operand  */
#line 1057 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4927 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand '<' operand  */
#line 1058 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4933 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand '>' operand  */
#line 1059 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4939 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand LESSEQ operand  */
#line 1060 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4945 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand GREATEREQ operand  */
#line 1061 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4951 "bison_parser.cpp"
    break;

  case 231: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1065 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4957 "bison_parser.cpp"
    break;

  case 232: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1066 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4963 "bison_parser.cpp"
    break;

  case 233: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1070 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4969 "bison_parser.cpp"
    break;

  case 234: /* opt_window: %empty  */
#line 1071 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4975 "bison_parser.cpp"
    break;

  case 235: /* opt_partition: PARTITION BY expr_list  */
#line 1073 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4981 "bison_parser.cpp"
    break;

  case 236: /* opt_partition: %empty  */
#line 1074 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4987 "bison_parser.cpp"
    break;

  case 237: /* opt_frame_clause: frame_type frame_bound  */
#line 1079 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4993 "bison_parser.cpp"
    break;

  case 238: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1080 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4999 "bison_parser.cpp"
    break;

  case 239: /* opt_frame_clause: %empty  */
#line 1081 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5007 "bison_parser.cpp"
    break;

  case 240: /* frame_type: RANGE  */
#line 1085 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5013 "bison_parser.cpp"
    break;

  case 241: /* frame_type: ROWS  */
#line 1086 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5019 "bison_parser.cpp"
    break;

  case 242: /* frame_type: GROUPS  */
#line 1087 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5025 "bison_parser.cpp"
    break;

  case 243: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1089 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5031 "bison_parser.cpp"
    break;

  case 244: /* frame_bound: INTVAL PRECEDING  */
#line 1090 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5037 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1091 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5043 "bison_parser.cpp"
    break;

  case 246: /* frame_bound: INTVAL FOLLOWING  */
#line 1092 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5049 "bison_parser.cpp"
    break;

  case 247: /* frame_bound: CURRENT_ROW  */
#line 1093 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5055 "bison_parser.cpp"
    break;

  case 248: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1095 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5061 "bison_parser.cpp"
    break;

  case 249: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1097 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5067 "bison_parser.cpp"
    break;

  case 250: /* datetime_field: SECOND  */
#line 1099 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5073 "bison_parser.cpp"
    break;

  case 251: /* datetime_field: MINUTE  */
#line 1100 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5079 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: HOUR  */
#line 1101 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5085 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: DAY  */
#line 1102 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5091 "bison_parser.cpp"
    break;

  case 254: /* datetime_field: MONTH  */
#line 1103 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5097 "bison_parser.cpp"
    break;

  case 255: /* datetime_field: YEAR  */
#line 1104 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5103 "bison_parser.cpp"
    break;

  case 256: /* datetime_field_plural: SECONDS  */
#line 1106 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5109 "bison_parser.cpp"
    break;

  case 257: /* datetime_field_plural: MINUTES  */
#line 1107 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5115 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: HOURS  */
#line 1108 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5121 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: DAYS  */
#line 1109 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5127 "bison_parser.cpp"
    break;

  case 260: /* datetime_field_plural: MONTHS  */
#line 1110 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5133 "bison_parser.cpp"
    break;

  case 261: /* datetime_field_plural: YEARS  */
#line 1111 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5139 "bison_parser.cpp"
    break;

  case 264: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1115 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5145 "bison_parser.cpp"
    break;

  case 265: /* array_index: operand '[' int_literal ']'  */
#line 1117 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5151 "bison_parser.cpp"
    break;

  case 266: /* between_expr: operand BETWEEN operand AND operand  */
#line 1119 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5157 "bison_parser.cpp"
    break;

  case 267: /* column_name: IDENTIFIER  */
#line 1121 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5163 "bison_parser.cpp"
    break;

  case 268: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1122 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5169 "bison_parser.cpp"
    break;

  case 269: /* column_name: '*'  */
#line 1123 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5175 "bison_parser.cpp"
    break;

  case 270: /* column_name: IDENTIFIER '.' '*'  */
#line 1124 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5181 "bison_parser.cpp"
    break;

  case 279: /* vector_literal: VECTOR STRING  */
#line 1128 "bison_parser.y"
                              { (yyval.expr) = Expr::makeVectorLiteral((yyvsp[0].sval)); }
#line 5187 "bison_parser.cpp"
    break;

  case 280: /* string_literal: STRING  */
#line 1130 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5193 "bison_parser.cpp"
    break;

  case 281: /* bool_literal: TRUE  */
#line 1132 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5199 "bison_parser.cpp"
    break;

  case 282: /* bool_literal: FALSE  */
#line 1133 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5205 "bison_parser.cpp"
    break;

  case 283: /* num_literal: FLOATVAL  */
#line 1135 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5211 "bison_parser.cpp"
    break;

  case 285: /* int_literal: INTVAL  */
#line 1138 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5217 "bison_parser.cpp"
    break;

  case 286: /* null_literal: NULL  */
#line 1140 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5223 "bison_parser.cpp"
    break;

  case 287: /* date_literal: DATE STRING  */
#line 1142 "bison_parser.y"
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
#line 5238 "bison_parser.cpp"
    break;

  case 288: /* interval_literal: int_literal duration_field  */
#line 1153 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5247 "bison_parser.cpp"
    break;

  case 289: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1157 "bison_parser.y"
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
#line 5263 "bison_parser.cpp"
    break;

  case 290: /* interval_literal: INTERVAL STRING  */
#line 1168 "bison_parser.y"
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
#line 5299 "bison_parser.cpp"
    break;

  case 291: /* param_expr: '?'  */
#line 1200 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5309 "bison_parser.cpp"
    break;

  case 293: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1209 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5320 "bison_parser.cpp"
    break;

  case 297: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1218 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5331 "bison_parser.cpp"
    break;

  case 298: /* table_ref_commalist: table_ref_atomic  */
#line 1225 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5340 "bison_parser.cpp"
    break;

  case 299: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1229 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5349 "bison_parser.cpp"
    break;

  case 300: /* table_ref_name: table_name opt_table_alias  */
#line 1234 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5361 "bison_parser.cpp"
    break;

  case 301: /* table_ref_name_no_alias: table_name  */
#line 1242 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5371 "bison_parser.cpp"
    break;

  case 302: /* table_name: IDENTIFIER  */
#line 1248 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5380 "bison_parser.cpp"
    break;

  case 303: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1252 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5389 "bison_parser.cpp"
    break;

  case 304: /* opt_index_name: IDENTIFIER  */
#line 1257 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5395 "bison_parser.cpp"
    break;

  case 305: /* opt_index_name: %empty  */
#line 1258 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5401 "bison_parser.cpp"
    break;

  case 307: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1260 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5407 "bison_parser.cpp"
    break;

  case 309: /* opt_table_alias: %empty  */
#line 1262 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5413 "bison_parser.cpp"
    break;

  case 310: /* alias: AS IDENTIFIER  */
#line 1264 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5419 "bison_parser.cpp"
    break;

  case 311: /* alias: IDENTIFIER  */
#line 1265 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5425 "bison_parser.cpp"
    break;

  case 313: /* opt_alias: %empty  */
#line 1267 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5431 "bison_parser.cpp"
    break;

  case 314: /* opt_locking_clause: opt_locking_clause_list  */
#line 1273 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5437 "bison_parser.cpp"
    break;

  case 315: /* opt_locking_clause: %empty  */
#line 1274 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5443 "bison_parser.cpp"
    break;

  case 316: /* opt_locking_clause_list: locking_clause  */
#line 1276 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5452 "bison_parser.cpp"
    break;

  case 317: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1280 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5461 "bison_parser.cpp"
    break;

  case 318: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1285 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5472 "bison_parser.cpp"
    break;

  case 319: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1291 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5483 "bison_parser.cpp"
    break;

  case 320: /* row_lock_mode: UPDATE  */
#line 1298 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5489 "bison_parser.cpp"
    break;

  case 321: /* row_lock_mode: NO KEY UPDATE  */
#line 1299 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5495 "bison_parser.cpp"
    break;

  case 322: /* row_lock_mode: SHARE  */
#line 1300 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5501 "bison_parser.cpp"
    break;

  case 323: /* row_lock_mode: KEY SHARE  */
#line 1301 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5507 "bison_parser.cpp"
    break;

  case 324: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1303 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5513 "bison_parser.cpp"
    break;

  case 325: /* opt_row_lock_policy: NOWAIT  */
#line 1304 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5519 "bison_parser.cpp"
    break;

  case 326: /* opt_row_lock_policy: %empty  */
#line 1305 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5525 "bison_parser.cpp"
    break;

  case 328: /* opt_with_clause: %empty  */
#line 1311 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5531 "bison_parser.cpp"
    break;

  case 329: /* with_clause: WITH with_description_list  */
#line 1313 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5537 "bison_parser.cpp"
    break;

  case 330: /* with_description_list: with_description  */
#line 1315 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5546 "bison_parser.cpp"
    break;

  case 331: /* with_description_list: with_description_list ',' with_description  */
#line 1319 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5555 "bison_parser.cpp"
    break;

  case 332: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1324 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5565 "bison_parser.cpp"
    break;

  case 333: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1334 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5577 "bison_parser.cpp"
    break;

  case 334: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1341 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5590 "bison_parser.cpp"
    break;

  case 335: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1349 "bison_parser.y"
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
#line 5618 "bison_parser.cpp"
    break;

  case 336: /* opt_join_type: INNER  */
#line 1373 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5624 "bison_parser.cpp"
    break;

  case 337: /* opt_join_type: LEFT OUTER  */
#line 1374 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5630 "bison_parser.cpp"
    break;

  case 338: /* opt_join_type: LEFT  */
#line 1375 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5636 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: RIGHT OUTER  */
#line 1376 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5642 "bison_parser.cpp"
    break;

  case 340: /* opt_join_type: RIGHT  */
#line 1377 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5648 "bison_parser.cpp"
    break;

  case 341: /* opt_join_type: FULL OUTER  */
#line 1378 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5654 "bison_parser.cpp"
    break;

  case 342: /* opt_join_type: OUTER  */
#line 1379 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5660 "bison_parser.cpp"
    break;

  case 343: /* opt_join_type: FULL  */
#line 1380 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5666 "bison_parser.cpp"
    break;

  case 344: /* opt_join_type: CROSS  */
#line 1381 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5672 "bison_parser.cpp"
    break;

  case 345: /* opt_join_type: %empty  */
#line 1382 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5678 "bison_parser.cpp"
    break;

  case 349: /* ident_commalist: IDENTIFIER  */
#line 1393 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5687 "bison_parser.cpp"
    break;

  case 350: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1397 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5696 "bison_parser.cpp"
    break;


#line 5700 "bison_parser.cpp"

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

#line 1403 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
