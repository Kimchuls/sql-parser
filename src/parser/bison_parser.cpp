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
  YYSYMBOL_column_type = 222,              /* column_type  */
  YYSYMBOL_opt_time_precision = 223,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 224, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 225,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 226,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 227,        /* column_constraint  */
  YYSYMBOL_table_constraint = 228,         /* table_constraint  */
  YYSYMBOL_drop_statement = 229,           /* drop_statement  */
  YYSYMBOL_opt_exists = 230,               /* opt_exists  */
  YYSYMBOL_alter_statement = 231,          /* alter_statement  */
  YYSYMBOL_alter_action = 232,             /* alter_action  */
  YYSYMBOL_drop_action = 233,              /* drop_action  */
  YYSYMBOL_delete_statement = 234,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 235,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 236,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 237,          /* opt_column_list  */
  YYSYMBOL_update_statement = 238,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 239,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 240,            /* update_clause  */
  YYSYMBOL_select_statement = 241,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 242, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 243, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 244,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 245,          /* select_no_paren  */
  YYSYMBOL_set_operator = 246,             /* set_operator  */
  YYSYMBOL_set_type = 247,                 /* set_type  */
  YYSYMBOL_opt_all = 248,                  /* opt_all  */
  YYSYMBOL_select_clause = 249,            /* select_clause  */
  YYSYMBOL_opt_distinct = 250,             /* opt_distinct  */
  YYSYMBOL_select_list = 251,              /* select_list  */
  YYSYMBOL_opt_from_clause = 252,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 253,              /* from_clause  */
  YYSYMBOL_opt_where = 254,                /* opt_where  */
  YYSYMBOL_opt_group = 255,                /* opt_group  */
  YYSYMBOL_opt_having = 256,               /* opt_having  */
  YYSYMBOL_opt_order = 257,                /* opt_order  */
  YYSYMBOL_order_list = 258,               /* order_list  */
  YYSYMBOL_order_desc = 259,               /* order_desc  */
  YYSYMBOL_opt_order_type = 260,           /* opt_order_type  */
  YYSYMBOL_opt_top = 261,                  /* opt_top  */
  YYSYMBOL_opt_limit = 262,                /* opt_limit  */
  YYSYMBOL_expr_list = 263,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 264,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 265,             /* literal_list  */
  YYSYMBOL_expr_alias = 266,               /* expr_alias  */
  YYSYMBOL_expr = 267,                     /* expr  */
  YYSYMBOL_operand = 268,                  /* operand  */
  YYSYMBOL_scalar_expr = 269,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 270,               /* unary_expr  */
  YYSYMBOL_binary_expr = 271,              /* binary_expr  */
  YYSYMBOL_logic_expr = 272,               /* logic_expr  */
  YYSYMBOL_in_expr = 273,                  /* in_expr  */
  YYSYMBOL_case_expr = 274,                /* case_expr  */
  YYSYMBOL_case_list = 275,                /* case_list  */
  YYSYMBOL_exists_expr = 276,              /* exists_expr  */
  YYSYMBOL_comp_expr = 277,                /* comp_expr  */
  YYSYMBOL_function_expr = 278,            /* function_expr  */
  YYSYMBOL_opt_window = 279,               /* opt_window  */
  YYSYMBOL_opt_partition = 280,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 281,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 282,               /* frame_type  */
  YYSYMBOL_frame_bound = 283,              /* frame_bound  */
  YYSYMBOL_extract_expr = 284,             /* extract_expr  */
  YYSYMBOL_cast_expr = 285,                /* cast_expr  */
  YYSYMBOL_datetime_field = 286,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 287,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 288,           /* duration_field  */
  YYSYMBOL_array_expr = 289,               /* array_expr  */
  YYSYMBOL_array_index = 290,              /* array_index  */
  YYSYMBOL_between_expr = 291,             /* between_expr  */
  YYSYMBOL_column_name = 292,              /* column_name  */
  YYSYMBOL_literal = 293,                  /* literal  */
  YYSYMBOL_vector_literal = 294,           /* vector_literal  */
  YYSYMBOL_string_literal = 295,           /* string_literal  */
  YYSYMBOL_bool_literal = 296,             /* bool_literal  */
  YYSYMBOL_num_literal = 297,              /* num_literal  */
  YYSYMBOL_int_literal = 298,              /* int_literal  */
  YYSYMBOL_null_literal = 299,             /* null_literal  */
  YYSYMBOL_date_literal = 300,             /* date_literal  */
  YYSYMBOL_interval_literal = 301,         /* interval_literal  */
  YYSYMBOL_param_expr = 302,               /* param_expr  */
  YYSYMBOL_table_ref = 303,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 304,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 305, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 306,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 307,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 308,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 309,               /* table_name  */
  YYSYMBOL_opt_index_name = 310,           /* opt_index_name  */
  YYSYMBOL_table_alias = 311,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 312,          /* opt_table_alias  */
  YYSYMBOL_alias = 313,                    /* alias  */
  YYSYMBOL_opt_alias = 314,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 315,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 316,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 317,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 318,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 319,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 320,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 321,              /* with_clause  */
  YYSYMBOL_with_description_list = 322,    /* with_description_list  */
  YYSYMBOL_with_description = 323,         /* with_description  */
  YYSYMBOL_join_clause = 324,              /* join_clause  */
  YYSYMBOL_opt_join_type = 325,            /* opt_join_type  */
  YYSYMBOL_join_condition = 326,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 327,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 328           /* ident_commalist  */
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  198
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  338
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

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
       0,   322,   322,   341,   347,   354,   358,   362,   363,   364,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     381,   382,   384,   388,   393,   397,   407,   408,   409,   411,
     411,   417,   423,   425,   429,   440,   446,   454,   469,   474,
     475,   481,   487,   498,   499,   504,   515,   528,   540,   547,
     554,   563,   564,   566,   570,   575,   576,   578,   585,   586,
     587,   588,   589,   590,   591,   592,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   608,   609,   611,
     612,   613,   615,   616,   618,   622,   627,   628,   629,   630,
     632,   633,   641,   647,   653,   659,   665,   666,   673,   679,
     681,   691,   698,   709,   716,   724,   725,   732,   739,   743,
     748,   758,   762,   766,   778,   778,   780,   781,   790,   791,
     793,   807,   819,   824,   828,   832,   837,   838,   840,   850,
     851,   853,   855,   856,   858,   860,   861,   863,   868,   870,
     871,   873,   874,   876,   880,   885,   887,   888,   889,   893,
     894,   896,   897,   898,   899,   900,   901,   906,   910,   915,
     916,   918,   922,   927,   935,   935,   935,   935,   935,   937,
     938,   938,   938,   938,   938,   938,   938,   938,   939,   939,
     943,   943,   945,   946,   947,   948,   949,   951,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   962,   963,
     965,   966,   967,   968,   972,   973,   974,   975,   977,   978,
     980,   981,   983,   984,   985,   986,   987,   988,   989,   993,
     994,   998,   999,  1001,  1002,  1007,  1008,  1009,  1013,  1014,
    1015,  1017,  1018,  1019,  1020,  1021,  1023,  1025,  1027,  1028,
    1029,  1030,  1031,  1032,  1034,  1035,  1036,  1037,  1038,  1039,
    1041,  1041,  1043,  1045,  1047,  1049,  1050,  1051,  1052,  1054,
    1054,  1054,  1054,  1054,  1054,  1054,  1054,  1056,  1058,  1060,
    1061,  1063,  1064,  1066,  1068,  1070,  1081,  1085,  1096,  1128,
    1137,  1137,  1144,  1144,  1146,  1146,  1153,  1157,  1162,  1170,
    1176,  1180,  1185,  1186,  1188,  1188,  1190,  1190,  1192,  1193,
    1195,  1195,  1201,  1202,  1204,  1208,  1213,  1219,  1226,  1227,
    1228,  1229,  1231,  1232,  1233,  1239,  1239,  1241,  1243,  1247,
    1252,  1262,  1269,  1277,  1301,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,  1309,  1310,  1312,  1318,  1318,  1321,  1325
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
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "opt_window", "opt_partition", "opt_frame_clause",
  "frame_type", "frame_bound", "extract_expr", "cast_expr",
  "datetime_field", "datetime_field_plural", "duration_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "vector_literal", "string_literal", "bool_literal", "num_literal",
  "int_literal", "null_literal", "date_literal", "interval_literal",
  "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "opt_index_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_locking_clause",
  "opt_locking_clause_list", "locking_clause", "row_lock_mode",
  "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-526)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-336)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     622,    50,    66,    84,   109,    66,   100,    -2,    40,    76,
      66,    19,    21,   103,    27,   162,    49,    49,    49,   248,
       2,  -526,   114,  -526,   114,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,   -31,  -526,   252,
     102,  -526,    86,   204,  -526,   174,   174,   174,    66,   304,
      66,   208,  -526,   195,   -31,   194,   -38,   195,   195,   195,
      66,  -526,   212,   183,  -526,  -526,  -526,  -526,  -526,  -526,
     617,  -526,   243,  -526,  -526,   222,    62,  -526,    54,  -526,
     379,    56,   384,   269,   408,    66,    66,   336,  -526,   327,
     232,   422,   380,    66,   234,   237,   427,   427,   427,   429,
      66,    66,  -526,   241,   162,  -526,   246,   433,   428,  -526,
    -526,  -526,   -31,   323,   312,   -31,    11,  -526,  -526,  -526,
    -526,   441,   442,  -526,   449,  -526,  -526,  -526,   250,   258,
    -526,  -526,  -526,  -526,  -526,   436,  -526,  -526,  -526,  -526,
    -526,  -526,   407,  -526,   321,   -50,   232,   360,  -526,   427,
     458,   186,   291,   -43,  -526,  -526,   371,  -526,  -526,   352,
    -526,   352,   352,  -526,  -526,  -526,  -526,  -526,   466,  -526,
    -526,   360,   391,  -526,  -526,    62,  -526,  -526,   360,   391,
     360,   154,   351,  -526,  -526,   231,  -526,    56,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,    66,   469,   358,    45,   348,     1,
     286,   287,   288,   215,   410,   296,   356,  -526,   265,   -70,
     435,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,   386,  -526,    51,
     297,  -526,   360,   422,  -526,   447,  -526,  -526,   443,  -526,
     336,  -526,   298,    92,  -526,   395,   300,  -526,    33,    11,
     -31,   301,  -526,   115,    11,   -70,   445,    20,    10,  -526,
     351,  -526,  -526,  -526,   311,   397,  -526,   715,   382,   315,
      99,  -526,  -526,  -526,   358,     8,    38,   471,   231,   360,
     360,   147,   -39,   317,   356,   706,   360,    41,   341,   -26,
     360,   360,   356,  -526,   356,   -52,   344,    64,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   433,    66,  -526,   530,    56,   -70,  -526,
     195,   304,  -526,    56,  -526,   466,    23,   336,  -526,   360,
    -526,   535,  -526,  -526,  -526,  -526,   360,  -526,  -526,  -526,
     351,   360,   360,  -526,   378,   423,  -526,   124,  -526,   458,
     427,  -526,  -526,   354,   359,  -526,   362,  -526,  -526,   363,
    -526,  -526,   364,  -526,  -526,  -526,  -526,   366,  -526,  -526,
      25,   367,   458,  -526,    45,  -526,   470,   360,  -526,  -526,
     368,   465,    63,   155,    75,   360,   360,  -526,   471,   459,
     -11,  -526,  -526,  -526,   450,   668,   728,   356,   381,   265,
    -526,   463,   387,   728,   728,   728,   728,   342,   342,   342,
     342,    41,    41,    48,    48,    48,   -83,   399,  -526,  -526,
     123,   568,  -526,   125,  -526,   358,  -526,   230,  -526,   376,
    -526,    37,  -526,   519,  -526,  -526,  -526,  -526,   -70,   -70,
    -526,   527,   458,  -526,   432,  -526,   127,  -526,   587,   591,
     593,  -526,   594,   595,   597,  -526,   480,  -526,  -526,   498,
    -526,    25,  -526,   458,   131,  -526,   414,  -526,   149,  -526,
     360,   715,   360,   360,  -526,   120,   161,   420,  -526,   356,
     728,   265,   421,   156,  -526,  -526,  -526,  -526,  -526,   434,
     524,  -526,  -526,  -526,   547,   549,   550,   531,    23,   631,
    -526,  -526,  -526,   505,  -526,  -526,  -112,  -526,  -526,   448,
     453,   187,   454,   455,   456,  -526,  -526,  -526,   191,  -526,
     528,   470,    32,   460,   -70,   181,  -526,   360,  -526,   706,
     461,   193,  -526,  -526,    37,    23,  -526,  -526,  -526,    23,
     402,   446,   360,  -526,  -526,  -526,  -526,   634,  -526,  -526,
    -526,  -526,   512,   391,  -526,  -526,  -526,  -526,   -70,  -526,
    -526,  -526,  -526,   439,   458,   -22,   462,   360,   235,   451,
     360,   199,   360,  -526,  -526,   300,  -526,  -526,  -526,   464,
      22,    39,   -70,  -526,  -526,   -70,  -526,   177,    15,   197,
    -526,  -526,   457,   473,  -526,  -526,   533,  -526,  -526,  -526,
      15,  -526
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     336,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   315,     0,
     290,   102,    33,     0,    45,    52,    52,    52,     0,     0,
       0,     0,   289,    97,     0,     0,     0,    97,    97,    97,
       0,    43,     0,   317,   318,    29,    26,    28,    27,     1,
     316,     2,     0,     6,     5,   150,   111,   112,   142,    94,
       0,   160,     0,     0,   293,     0,     0,   136,    37,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     4,     0,     0,   130,   124,
     125,   123,     0,   127,     0,     0,   156,   291,   268,   271,
     273,     0,     0,   274,     0,   269,   270,   279,     0,   159,
     161,   259,   260,   261,   262,   272,   263,   264,   265,   266,
      32,    31,     0,   292,     0,     0,   106,     0,   101,     0,
       0,     0,     0,   136,   108,    96,     0,   119,   118,    40,
      38,    40,    40,    95,    92,    93,   320,   319,     0,   149,
     129,     0,   142,   115,   114,   116,   126,   122,     0,   142,
       0,     0,   303,   267,   275,   278,    34,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   276,    51,     0,     0,   316,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,   257,     0,   135,
     164,   171,   172,   173,   166,   168,   174,   167,   187,   175,
     176,   177,   178,   170,   165,   180,   181,     0,   337,     0,
       0,   104,     0,     0,   107,     0,    98,    99,     0,    42,
     136,    41,    24,     0,    22,   133,   131,   157,   301,   156,
       0,   141,   143,   148,   156,   152,   154,   151,     0,   120,
     302,   304,   277,   162,     0,     0,    48,     0,     0,     0,
       0,    53,    55,    56,   316,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,   182,     0,     0,
       0,     0,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,     0,   110,   109,
      97,     0,    36,     0,    20,     0,     0,   136,   132,     0,
     299,     0,   300,   163,   113,   117,     0,   147,   146,   145,
     303,     0,     0,   308,     0,     0,   310,   314,   305,     0,
       0,    75,    69,     0,     0,    71,    81,    72,    58,     0,
      66,    67,     0,    63,    64,    70,    73,    78,    68,    59,
      83,     0,     0,    47,     0,    50,   222,     0,   256,   258,
       0,     0,     0,     0,     0,     0,     0,   206,     0,     0,
       0,   179,   169,   198,   199,     0,   194,     0,     0,     0,
     185,     0,   197,   196,   212,   213,   214,   215,   216,   217,
     218,   189,   188,   191,   190,   192,   193,     0,    35,   338,
       0,     0,    39,     0,    23,   316,   134,   280,   282,     0,
     284,   297,   283,   138,   158,   298,   144,   121,   155,   153,
     311,     0,     0,   313,     0,   306,     0,    46,     0,     0,
       0,    65,     0,     0,     0,    74,     0,    87,    88,     0,
      57,    82,    84,     0,     0,    54,     0,   219,     0,   210,
       0,     0,     0,     0,   204,     0,     0,     0,   252,     0,
     195,     0,     0,     0,   186,   253,   103,   100,    25,     0,
       0,   332,   324,   330,   328,   331,   326,     0,     0,     0,
     296,   288,   294,     0,   128,   309,   314,   312,    49,     0,
       0,     0,     0,     0,     0,    86,    89,    85,     0,    91,
     224,   222,     0,     0,   208,     0,   207,     0,   211,   254,
       0,     0,   202,   200,   297,     0,   327,   329,   325,     0,
     281,   298,     0,   307,    62,    61,    80,     0,    76,    60,
      77,    90,     0,   142,   220,   236,   237,   205,   209,   203,
     201,   285,   321,   333,     0,   140,     0,     0,   227,     0,
       0,     0,     0,   137,    79,   223,   228,   229,   230,     0,
       0,     0,   334,   322,   295,   139,   221,     0,     0,     0,
     235,   225,   255,     0,   234,   232,     0,   233,   231,   323,
       0,   226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -526,  -526,  -526,   588,  -526,   638,  -526,   328,  -526,   340,
    -526,  -526,  -526,  -526,   337,   -79,   256,  -526,  -526,  -526,
     350,  -526,   283,  -526,   188,  -526,  -526,  -526,  -526,   202,
    -526,  -526,   -53,  -526,  -526,  -526,  -526,  -526,  -526,   529,
    -526,  -526,   431,  -192,   -88,  -526,    46,   -54,   -34,  -526,
    -526,   -82,   385,  -526,  -526,  -526,  -115,  -526,  -526,  -170,
    -526,   332,  -526,  -526,    30,  -293,  -526,   -51,   345,  -146,
    -191,  -526,  -526,  -526,  -526,  -526,  -526,   388,  -526,  -526,
    -526,   150,  -526,  -526,  -526,  -525,  -526,  -526,  -148,  -526,
    -526,  -526,  -526,  -526,    89,   -73,  -526,   -85,  -526,  -526,
     -91,  -526,  -526,  -526,  -526,  -526,  -404,   138,  -526,  -526,
    -526,     5,  -526,  -526,   142,   430,  -526,   339,  -526,   424,
    -526,   175,  -526,  -526,  -526,   589,  -526,  -526,  -526,  -526,
    -337
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   253,   254,    23,    66,
      24,   141,    25,    26,    89,   159,   249,    27,    28,    29,
      84,   280,   281,   282,   380,   465,   461,   470,   471,   472,
     283,    30,    93,    31,   246,   247,    32,    33,    34,   151,
      35,   153,   154,    36,   172,   173,   174,    77,   112,   113,
     177,    78,   171,   255,   337,   338,   148,   514,   583,   116,
     261,   262,   349,   108,   182,   256,   128,   129,   257,   258,
     220,   221,   222,   223,   224,   225,   226,   292,   227,   228,
     229,   477,   563,   589,   590,   601,   230,   231,   200,   201,
     202,   232,   233,   234,   235,   236,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   436,   437,   438,   439,   440,
      51,   441,   144,   510,   511,   512,   343,   269,   270,   271,
     357,   455,    37,    38,    63,    64,   442,   507,   593,    71,
     239
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   219,   259,   400,    99,   100,   101,    41,   130,   264,
      44,   160,   160,   160,   276,    52,   169,    56,   161,   162,
     170,   597,   456,   295,    40,   297,    40,   179,   597,    75,
     175,   582,   263,   175,   265,   267,   340,   272,   244,   598,
     340,   388,   602,   147,   115,   474,    60,   205,   277,   300,
     453,   454,   407,    87,   466,    90,   395,   308,    55,    97,
     118,   119,   120,   109,   160,   102,   301,   291,   180,    40,
     237,   109,   299,   606,   278,   353,   396,   352,    39,   206,
     408,   121,   397,    76,   326,   611,   181,    42,   467,    61,
     145,   146,   385,   300,   478,    48,   328,   241,   156,    98,
      94,   110,    53,   295,   550,   164,   165,   323,   279,   110,
     301,   405,    43,   406,   273,   516,   493,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   468,   114,   354,   332,   528,    49,   111,   300,
     391,   260,   207,   392,   393,   573,   111,   122,   355,   166,
     469,   300,   300,   243,   403,   404,   301,   209,   118,   119,
     120,    54,   341,   123,   298,    62,   509,   402,   301,   301,
     483,   410,   345,    45,   339,   356,    57,    50,   175,   121,
     488,   308,   300,    46,   599,   339,    58,   600,   308,   411,
     396,   599,   481,   285,   600,   286,   484,    70,   541,   301,
     263,   386,   210,   211,   212,   448,   449,    65,   347,   274,
     124,   125,   126,    54,    47,   435,   490,    59,   209,   118,
     119,   120,   443,   389,   217,   565,   319,   320,   321,   322,
      72,   323,   427,   390,   300,   348,   322,   581,   323,   300,
     121,   536,   213,   499,   325,   122,    75,   326,    69,   485,
     486,   301,   240,   127,   130,    79,   301,   500,   452,   575,
     130,   123,   290,   210,   211,   212,   300,   482,   209,   118,
     119,   120,   266,   537,   300,   160,   430,   431,    81,   214,
     300,   457,   433,   301,   585,   334,   453,   454,   335,   344,
     121,   301,   383,   215,   350,   384,    80,   301,   539,   501,
     300,    82,   567,   213,   502,    83,   122,    88,   124,   125,
     126,   503,   504,   210,   211,   212,   496,   301,   498,   187,
     518,   187,   123,   326,   529,    75,    92,   326,   505,   428,
     290,    96,  -333,   506,   532,    91,   534,   535,   216,   217,
     214,   103,   531,   106,   487,   339,   218,   604,   605,   543,
     107,   127,   339,   213,   215,   492,   122,    67,    68,   209,
     118,   119,   120,   209,   118,   119,   120,   607,   608,   124,
     125,   126,   123,   188,   189,   190,   191,   192,   193,   104,
     556,   121,   117,   557,   561,   121,   570,   326,   140,   339,
     214,   568,   594,   578,   142,   326,    85,    86,   303,   216,
     217,   586,   587,   588,   215,   211,   212,   218,   210,   211,
     212,   143,   127,   209,   118,   119,   120,   250,   251,   124,
     125,   126,   147,   149,   150,   152,  -286,   157,   155,   500,
     158,   118,   163,    54,   592,   121,   595,   540,   168,   120,
     170,   176,   178,   186,   213,   183,   184,   122,   213,   216,
     217,   122,   302,   185,   187,   203,   204,   218,   293,   211,
     212,   238,   127,   123,   242,   245,   500,   123,   248,   252,
     114,   501,   275,   268,    15,   307,   502,   284,   287,   288,
     289,   294,   308,   503,   504,   214,   296,   324,   330,   327,
     333,   303,   336,   360,   331,   215,   339,   346,   213,   215,
     505,   122,   351,   359,  -333,   506,   381,   382,   501,   398,
     124,   125,   126,   502,   124,   125,   126,   123,  -336,  -336,
     503,   504,  -336,  -336,   579,   317,   318,   319,   320,   321,
     322,    75,   323,   429,   401,   294,   409,   505,   445,   304,
     216,   217,   506,   450,   216,   217,   458,   451,   218,   215,
     476,   459,   218,   127,   460,   462,   463,   127,   464,   473,
     305,   479,   480,   407,   124,   125,   126,   306,   307,   300,
     494,   497,   508,   491,   580,   308,   309,   323,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     495,   513,   515,   519,   216,   217,   517,   520,  -287,   521,
     522,   523,   218,   524,   525,   526,   530,   127,   310,   311,
     312,   313,   314,   538,   542,   315,   316,  -335,   317,   318,
     319,   320,   321,   322,     1,   323,   545,   544,   546,     1,
     547,   548,     2,   549,   551,   552,   562,     2,   574,     3,
     576,   554,   577,   591,     3,     4,   555,   558,   559,   560,
       4,   286,   610,   566,   569,   584,     5,   596,   105,     6,
       7,     5,    74,   434,     6,     7,   609,   475,   432,   533,
     387,     8,     9,   527,   329,   208,     8,     9,   446,   394,
     603,   564,    10,   572,   444,    11,   571,    10,   342,   447,
      11,   553,     0,   167,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    13,    12,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,   303,     0,   361,    14,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,    15,   362,
     363,     0,     0,     0,     0,     0,   364,   365,   366,   367,
     368,     0,   369,     0,     0,     0,     0,     0,     0,     0,
     370,     0,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,     0,    16,    17,    18,     0,
       0,    16,    17,    18,   303,     0,   371,   489,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,     0,     0,
       0,   307,     0,     0,   372,     0,   373,   374,   308,   309,
     304,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,     0,     0,   376,     0,   377,     0,
       0,   399,  -336,     0,     0,     0,     0,     0,   378,   307,
       0,   310,   311,   312,   313,   314,   308,   309,   315,   316,
       0,   317,   318,   319,   320,   321,   322,     0,   323,     0,
       0,   307,     0,     0,     0,     0,     0,     0,   308,  -336,
       0,     0,   379,     0,     0,     0,     0,     0,     0,   310,
     311,   312,   313,   314,     0,     0,   315,   316,     0,   317,
     318,   319,   320,   321,   322,     0,   323,     0,     0,     0,
       0,  -336,  -336,  -336,   313,   314,     0,     0,   315,   316,
       0,   317,   318,   319,   320,   321,   322,     0,   323
};

static const yytype_int16 yycheck[] =
{
      54,   147,   172,   296,    57,    58,    59,     2,    81,   179,
       5,    96,    97,    98,   206,    10,   107,    12,    97,    98,
      12,     6,   359,   214,     3,   216,     3,   115,     6,    60,
     112,    53,   178,   115,   180,   181,     3,   185,   153,    17,
       3,     3,     3,    86,    78,   382,    19,    97,     3,   119,
     162,   163,   104,    48,    29,    50,    95,   140,    12,    97,
       4,     5,     6,     9,   149,    60,   136,   213,    57,     3,
     149,     9,   218,   598,    29,    65,   115,    57,    28,   129,
     132,    25,   121,    37,   196,   610,    75,     3,    63,    62,
      85,    86,   284,   119,   387,    97,   242,   151,    93,   137,
      54,    47,    83,   294,   508,   100,   101,   190,    63,    47,
     136,   302,     3,   304,   187,   452,   409,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   107,    79,   124,   250,   473,    97,    84,   119,
     288,   175,   192,   289,   290,   549,    84,    91,   138,   103,
     125,   119,   119,   196,   300,   301,   136,     3,     4,     5,
       6,   192,   129,   107,   218,     3,   129,   193,   136,   136,
      95,   107,   260,    73,   196,   165,    73,   101,   260,    25,
     191,   140,   119,    83,   169,   196,    83,   172,   140,   125,
     115,   169,   129,   192,   172,   194,   121,   195,   491,   136,
     346,   193,    48,    49,    50,   351,   352,   158,    93,   204,
     154,   155,   156,   192,   114,   192,   407,   114,     3,     4,
       5,     6,   337,   185,   185,   193,   185,   186,   187,   188,
     116,   190,   323,   287,   119,   120,   188,   574,   190,   119,
      25,   121,    88,   435,   193,    91,    60,   196,     0,   395,
     396,   136,    66,   197,   327,     3,   136,    27,   134,   552,
     333,   107,   115,    48,    49,    50,   119,   112,     3,     4,
       5,     6,   118,   112,   119,   360,   327,   330,   192,   125,
     119,   360,   333,   136,   577,   193,   162,   163,   196,   259,
      25,   136,   193,   139,   264,   196,   194,   136,   489,    69,
     119,    97,   121,    88,    74,   131,    91,     3,   154,   155,
     156,    81,    82,    48,    49,    50,   193,   136,   193,   196,
     193,   196,   107,   196,   193,    60,   131,   196,    98,   324,
     115,   137,   102,   103,   480,   127,   482,   483,   184,   185,
     125,   129,   193,   100,   398,   196,   192,   170,   171,   193,
     128,   197,   196,    88,   139,   409,    91,    17,    18,     3,
       4,     5,     6,     3,     4,     5,     6,   170,   171,   154,
     155,   156,   107,   142,   143,   144,   145,   146,   147,   196,
     193,    25,     3,   196,   193,    25,   193,   196,     4,   196,
     125,   537,   193,   563,   125,   196,    46,    47,    56,   184,
     185,   166,   167,   168,   139,    49,    50,   192,    48,    49,
      50,     3,   197,     3,     4,     5,     6,   161,   162,   154,
     155,   156,    86,    96,   192,     3,   196,   193,    48,    27,
     193,     4,     3,   192,   580,    25,   582,   491,   192,     6,
      12,   118,   130,   193,    88,     4,     4,    91,    88,   184,
     185,    91,    17,     4,   196,    48,   135,   192,    48,    49,
      50,     3,   197,   107,   173,    94,    27,   107,   116,     3,
      79,    69,     3,   122,   116,   133,    74,   129,   192,   192,
     192,   125,   140,    81,    82,   125,   190,   101,    41,   192,
     192,    56,    97,    96,    51,   139,   196,   196,    88,   139,
      98,    91,    57,   192,   102,   103,   124,   192,    69,   192,
     154,   155,   156,    74,   154,   155,   156,   107,   176,   177,
      81,    82,   180,   181,    85,   183,   184,   185,   186,   187,
     188,    60,   190,     3,   193,   125,   192,    98,     3,   104,
     184,   185,   103,   165,   184,   185,   192,   124,   192,   139,
      80,   192,   192,   197,   192,   192,   192,   197,   192,   192,
     125,   193,    97,   104,   154,   155,   156,   132,   133,   119,
     107,     3,   196,   192,   135,   140,   141,   190,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     191,    72,    65,     6,   184,   185,   164,     6,   196,     6,
       6,     6,   192,     6,   124,   107,   192,   197,   173,   174,
     175,   176,   177,   193,   193,   180,   181,     0,   183,   184,
     185,   186,   187,   188,     7,   190,   102,   193,    81,     7,
      81,    81,    15,   102,     3,   130,   108,    15,   192,    22,
       6,   193,   130,   192,    22,    28,   193,   193,   193,   193,
      28,   194,   119,   193,   193,   193,    39,   193,    70,    42,
      43,    39,    24,   335,    42,    43,   193,   384,   331,   481,
     285,    54,    55,   471,   243,   146,    54,    55,   346,   291,
     591,   531,    65,   545,   339,    68,   544,    65,   258,   350,
      68,   516,    -1,   104,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    11,   110,    -1,    -1,
      -1,    -1,   110,   116,    -1,    -1,    -1,    -1,   116,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,   159,   160,   161,    -1,
      -1,   159,   160,   161,    56,    -1,    71,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    89,    -1,    91,    92,   140,   141,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,   113,    -1,
      -1,   125,   104,    -1,    -1,    -1,    -1,    -1,   123,   133,
      -1,   173,   174,   175,   176,   177,   140,   141,   180,   181,
      -1,   183,   184,   185,   186,   187,   188,    -1,   190,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,   177,    -1,    -1,   180,   181,    -1,   183,
     184,   185,   186,   187,   188,    -1,   190,    -1,    -1,    -1,
      -1,   173,   174,   175,   176,   177,    -1,    -1,   180,   181,
      -1,   183,   184,   185,   186,   187,   188,    -1,   190
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    28,    39,    42,    43,    54,    55,
      65,    68,    90,    94,   110,   116,   159,   160,   161,   199,
     200,   201,   202,   206,   208,   210,   211,   215,   216,   217,
     229,   231,   234,   235,   236,   238,   241,   320,   321,    28,
       3,   309,     3,     3,   309,    73,    83,   114,    97,    97,
     101,   308,   309,    83,   192,   244,   309,    73,    83,   114,
      19,    62,     3,   322,   323,   158,   207,   207,   207,     0,
     195,   327,   116,   203,   203,    60,   244,   245,   249,     3,
     194,   192,    97,   131,   218,   218,   218,   309,     3,   212,
     309,   127,   131,   230,   244,   245,   137,    97,   137,   230,
     230,   230,   309,   129,   196,   201,   100,   128,   261,     9,
      47,    84,   246,   247,    79,   246,   257,     3,     4,     5,
       6,    25,    91,   107,   154,   155,   156,   197,   264,   265,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
       4,   209,   125,     3,   310,   309,   309,    86,   254,    96,
     192,   237,     3,   239,   240,    48,   309,   193,   193,   213,
     295,   213,   213,     3,   309,   309,   244,   323,   192,   298,
      12,   250,   242,   243,   244,   249,   118,   248,   130,   242,
      57,    75,   262,     4,     4,     4,   193,   196,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     286,   287,   288,    48,   135,    97,   129,   192,   237,     3,
      48,    49,    50,    88,   125,   139,   184,   185,   192,   267,
     268,   269,   270,   271,   272,   273,   274,   276,   277,   278,
     284,   285,   289,   290,   291,   292,   293,   213,     3,   328,
      66,   245,   173,   196,   254,    94,   232,   233,   116,   214,
     214,   214,     3,   204,   205,   251,   263,   266,   267,   257,
     246,   258,   259,   267,   257,   267,   118,   267,   122,   315,
     316,   317,   286,   293,   309,     3,   241,     3,    29,    63,
     219,   220,   221,   228,   129,   192,   194,   192,   192,   192,
     115,   267,   275,    48,   125,   268,   190,   268,   245,   267,
     119,   136,    17,    56,   104,   125,   132,   133,   140,   141,
     173,   174,   175,   176,   177,   180,   181,   183,   184,   185,
     186,   187,   188,   190,   101,   193,   196,   192,   267,   240,
      41,    51,   254,   192,   193,   196,    97,   252,   253,   196,
       3,   129,   313,   314,   262,   242,   196,    93,   120,   260,
     262,    57,    57,    65,   124,   138,   165,   318,   317,   192,
      96,    11,    24,    25,    31,    32,    33,    34,    35,    37,
      45,    71,    89,    91,    92,   106,   111,   113,   123,   157,
     222,   124,   192,   193,   196,   241,   193,   250,     3,   185,
     245,   286,   267,   267,   275,    95,   115,   121,   192,   125,
     263,   193,   193,   267,   267,   268,   268,   104,   132,   192,
     107,   125,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   298,   309,     3,
     265,   230,   212,   265,   205,   192,   303,   304,   305,   306,
     307,   309,   324,   254,   266,     3,   259,   315,   267,   267,
     165,   124,   134,   162,   163,   319,   328,   213,   192,   192,
     192,   224,   192,   192,   192,   223,    29,    63,   107,   125,
     225,   226,   227,   192,   328,   220,    80,   279,   263,   193,
      97,   129,   112,    95,   121,   267,   267,   245,   191,   119,
     268,   192,   245,   263,   107,   191,   193,     3,   193,   241,
      27,    69,    74,    81,    82,    98,   103,   325,   196,   129,
     311,   312,   313,    72,   255,    65,   328,   164,   193,     6,
       6,     6,     6,     6,     6,   124,   107,   227,   328,   193,
     192,   193,   267,   222,   267,   267,   121,   112,   193,   268,
     245,   263,   193,   193,   193,   102,    81,    81,    81,   102,
     304,     3,   130,   319,   193,   193,   193,   196,   193,   193,
     193,   193,   108,   280,   279,   193,   193,   121,   267,   193,
     193,   312,   305,   304,   192,   263,     6,   130,   257,    85,
     135,   328,    53,   256,   193,   263,   166,   167,   168,   281,
     282,   192,   267,   326,   193,   267,   193,     6,    17,   169,
     172,   283,     3,   292,   170,   171,   283,   170,   171,   193,
     119,   283
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   198,   199,   200,   200,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   206,   207,
     207,   208,   209,   210,   210,   211,   211,   212,   213,   214,
     214,   215,   215,   216,   216,   216,   217,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   223,   223,   224,
     224,   224,   225,   225,   226,   226,   227,   227,   227,   227,
     228,   228,   229,   229,   229,   229,   230,   230,   231,   232,
     233,   234,   235,   236,   236,   237,   237,   238,   239,   239,
     240,   241,   241,   241,   242,   242,   243,   243,   244,   244,
     245,   245,   246,   247,   247,   247,   248,   248,   249,   250,
     250,   251,   252,   252,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   260,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   262,   263,   263,   264,
     264,   265,   265,   266,   267,   267,   267,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     269,   269,   270,   270,   270,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   272,   272,
     273,   273,   273,   273,   274,   274,   274,   274,   275,   275,
     276,   276,   277,   277,   277,   277,   277,   277,   277,   278,
     278,   279,   279,   280,   280,   281,   281,   281,   282,   282,
     282,   283,   283,   283,   283,   283,   284,   285,   286,   286,
     286,   286,   286,   286,   287,   287,   287,   287,   287,   287,
     288,   288,   289,   290,   291,   292,   292,   292,   292,   293,
     293,   293,   293,   293,   293,   293,   293,   294,   295,   296,
     296,   297,   297,   298,   299,   300,   301,   301,   301,   302,
     303,   303,   304,   304,   305,   305,   306,   306,   307,   308,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   315,   315,   316,   316,   317,   317,   318,   318,
     318,   318,   319,   319,   319,   320,   320,   321,   322,   322,
     323,   324,   324,   324,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   326,   327,   327,   328,   328
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     3,
       0,     5,     5,     2,     3,     2,     8,     7,     6,     9,
       7,     3,     0,     1,     3,     1,     1,     3,     1,     1,
       4,     4,     4,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     4,     3,     0,     5,
       3,     0,     1,     0,     1,     2,     2,     1,     1,     2,
       5,     4,     4,     4,     3,     4,     2,     0,     5,     1,
       4,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     4,     0,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     6,     0,     3,     0,     2,     5,     0,     1,     1,
       1,     2,     2,     2,     2,     1,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     0,     1,     5,     1,     0,     2,     1,
       1,     0,     1,     0,     1,     2,     3,     5,     1,     3,
       1,     2,     2,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 181 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 181 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 168 "bison_parser.y"
                { }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 168 "bison_parser.y"
                { }
#line 2099 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).stmt_vec)) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2112 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2118 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2124 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2137 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2156 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2162 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2168 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 181 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2174 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2180 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2186 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 168 "bison_parser.y"
                { }
#line 2192 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 181 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2198 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 168 "bison_parser.y"
                { }
#line 2204 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 168 "bison_parser.y"
                { }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).table_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2241 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2247 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 168 "bison_parser.y"
                { }
#line 2259 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 168 "bison_parser.y"
                { }
#line 2265 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2271 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 168 "bison_parser.y"
                { }
#line 2277 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 168 "bison_parser.y"
                { }
#line 2283 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 168 "bison_parser.y"
                { }
#line 2289 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2295 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2301 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 168 "bison_parser.y"
                { }
#line 2307 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2313 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2319 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2325 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2331 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2337 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2343 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 173 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2356 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2362 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).update_vec)) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2375 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2381 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2405 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 168 "bison_parser.y"
                { }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 168 "bison_parser.y"
                { }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2454 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2460 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2466 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2472 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2478 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2484 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2497 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 168 "bison_parser.y"
                { }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2547 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).window_description)); }
#line 2657 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).frame_description)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 168 "bison_parser.y"
                { }
#line 2682 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).frame_bound)); }
#line 2688 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2700 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 168 "bison_parser.y"
                { }
#line 2706 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 168 "bison_parser.y"
                { }
#line 2712 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 168 "bison_parser.y"
                { }
#line 2718 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2724 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2730 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2736 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2742 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2748 "bison_parser.cpp"
        break;

    case YYSYMBOL_vector_literal: /* vector_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2754 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2760 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2766 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2772 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2778 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2784 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2790 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2796 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2802 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2808 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2814 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2820 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 182 "bison_parser.y"
                {
      if (((*yyvaluep).table_vec)) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2833 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2839 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2845 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 169 "bison_parser.y"
                {
      free( (((*yyvaluep).table_name).name) );
      free( (((*yyvaluep).table_name).schema) );
    }
#line 2854 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 181 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2860 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2866 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2872 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2878 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2884 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2890 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2896 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2902 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 168 "bison_parser.y"
                { }
#line 2908 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 168 "bison_parser.y"
                { }
#line 2914 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2920 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2926 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2932 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2938 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2944 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 168 "bison_parser.y"
                { }
#line 2950 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 190 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2956 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 173 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2969 "bison_parser.cpp"
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

#line 3077 "bison_parser.cpp"

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
#line 322 "bison_parser.y"
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
#line 3306 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 341 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3317 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 347 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3328 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 354 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3337 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 358 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3346 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 362 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3352 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 363 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3358 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 364 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3364 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 366 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3370 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 367 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3376 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 368 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3382 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 369 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3388 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 370 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3394 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 371 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3400 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 372 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3406 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 373 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3412 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 374 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3418 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 375 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3424 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 381 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3430 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 382 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3436 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 384 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3445 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 388 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3454 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 393 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3463 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 397 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3473 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 407 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3479 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 408 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3485 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 409 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3491 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 417 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3501 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 425 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3510 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 429 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3520 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 440 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3531 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 446 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3543 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 454 "bison_parser.y"
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
#line 3562 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 469 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3571 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 474 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3577 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 475 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3583 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 481 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3594 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 487 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3604 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW TABLES  */
#line 498 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3610 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW COLUMNS table_name  */
#line 499 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3620 "bison_parser.cpp"
    break;

  case 45: /* show_statement: DESCRIBE table_name  */
#line 504 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3630 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 515 "bison_parser.y"
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
#line 3648 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 528 "bison_parser.y"
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
#line 3665 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 540 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3677 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 547 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3689 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 554 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3702 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: IF NOT EXISTS  */
#line 563 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3708 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: %empty  */
#line 564 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3714 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem  */
#line 566 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3723 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 570 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3732 "bison_parser.cpp"
    break;

  case 55: /* table_elem: column_def  */
#line 575 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3738 "bison_parser.cpp"
    break;

  case 56: /* table_elem: table_constraint  */
#line 576 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3744 "bison_parser.cpp"
    break;

  case 57: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 578 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3755 "bison_parser.cpp"
    break;

  case 58: /* column_type: BIGINT  */
#line 585 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3761 "bison_parser.cpp"
    break;

  case 59: /* column_type: BOOLEAN  */
#line 586 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3767 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHAR '(' INTVAL ')'  */
#line 587 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3773 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 588 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3779 "bison_parser.cpp"
    break;

  case 62: /* column_type: VECTOR '(' INTVAL ')'  */
#line 589 "bison_parser.y"
                        {(yyval.column_type_t) = ColumnType{DataType::VECTOR, (yyvsp[-1].ival)};}
#line 3785 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATE  */
#line 590 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3791 "bison_parser.cpp"
    break;

  case 64: /* column_type: DATETIME  */
#line 591 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3797 "bison_parser.cpp"
    break;

  case 65: /* column_type: DECIMAL opt_decimal_specification  */
#line 592 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3806 "bison_parser.cpp"
    break;

  case 66: /* column_type: DOUBLE  */
#line 596 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3812 "bison_parser.cpp"
    break;

  case 67: /* column_type: FLOAT  */
#line 597 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3818 "bison_parser.cpp"
    break;

  case 68: /* column_type: INT  */
#line 598 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3824 "bison_parser.cpp"
    break;

  case 69: /* column_type: INTEGER  */
#line 599 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3830 "bison_parser.cpp"
    break;

  case 70: /* column_type: LONG  */
#line 600 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3836 "bison_parser.cpp"
    break;

  case 71: /* column_type: REAL  */
#line 601 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3842 "bison_parser.cpp"
    break;

  case 72: /* column_type: SMALLINT  */
#line 602 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3848 "bison_parser.cpp"
    break;

  case 73: /* column_type: TEXT  */
#line 603 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3854 "bison_parser.cpp"
    break;

  case 74: /* column_type: TIME opt_time_precision  */
#line 604 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3860 "bison_parser.cpp"
    break;

  case 75: /* column_type: TIMESTAMP  */
#line 605 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3866 "bison_parser.cpp"
    break;

  case 76: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 606 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3872 "bison_parser.cpp"
    break;

  case 77: /* opt_time_precision: '(' INTVAL ')'  */
#line 608 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3878 "bison_parser.cpp"
    break;

  case 78: /* opt_time_precision: %empty  */
#line 609 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3884 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 611 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3890 "bison_parser.cpp"
    break;

  case 80: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 612 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3896 "bison_parser.cpp"
    break;

  case 81: /* opt_decimal_specification: %empty  */
#line 613 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3902 "bison_parser.cpp"
    break;

  case 82: /* opt_column_constraints: column_constraint_set  */
#line 615 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3908 "bison_parser.cpp"
    break;

  case 83: /* opt_column_constraints: %empty  */
#line 616 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3914 "bison_parser.cpp"
    break;

  case 84: /* column_constraint_set: column_constraint  */
#line 618 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3923 "bison_parser.cpp"
    break;

  case 85: /* column_constraint_set: column_constraint_set column_constraint  */
#line 622 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3932 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: PRIMARY KEY  */
#line 627 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3938 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: UNIQUE  */
#line 628 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3944 "bison_parser.cpp"
    break;

  case 88: /* column_constraint: NULL  */
#line 629 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3950 "bison_parser.cpp"
    break;

  case 89: /* column_constraint: NOT NULL  */
#line 630 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3956 "bison_parser.cpp"
    break;

  case 90: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 632 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3962 "bison_parser.cpp"
    break;

  case 91: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 633 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3968 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 641 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3979 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 647 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3990 "bison_parser.cpp"
    break;

  case 94: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 653 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4000 "bison_parser.cpp"
    break;

  case 95: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 659 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4010 "bison_parser.cpp"
    break;

  case 96: /* opt_exists: IF EXISTS  */
#line 665 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4016 "bison_parser.cpp"
    break;

  case 97: /* opt_exists: %empty  */
#line 666 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4022 "bison_parser.cpp"
    break;

  case 98: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 673 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4032 "bison_parser.cpp"
    break;

  case 99: /* alter_action: drop_action  */
#line 679 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4038 "bison_parser.cpp"
    break;

  case 100: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 681 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4047 "bison_parser.cpp"
    break;

  case 101: /* delete_statement: DELETE FROM table_name opt_where  */
#line 691 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4058 "bison_parser.cpp"
    break;

  case 102: /* truncate_statement: TRUNCATE table_name  */
#line 698 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4068 "bison_parser.cpp"
    break;

  case 103: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 709 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4080 "bison_parser.cpp"
    break;

  case 104: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 716 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4092 "bison_parser.cpp"
    break;

  case 105: /* opt_column_list: '(' ident_commalist ')'  */
#line 724 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4098 "bison_parser.cpp"
    break;

  case 106: /* opt_column_list: %empty  */
#line 725 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4104 "bison_parser.cpp"
    break;

  case 107: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 732 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4115 "bison_parser.cpp"
    break;

  case 108: /* update_clause_commalist: update_clause  */
#line 739 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4124 "bison_parser.cpp"
    break;

  case 109: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 743 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4133 "bison_parser.cpp"
    break;

  case 110: /* update_clause: IDENTIFIER '=' expr  */
#line 748 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4143 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_with_paren  */
#line 758 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4152 "bison_parser.cpp"
    break;

  case 112: /* select_statement: opt_with_clause select_no_paren  */
#line 762 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4161 "bison_parser.cpp"
    break;

  case 113: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 766 "bison_parser.y"
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
#line 4177 "bison_parser.cpp"
    break;

  case 116: /* select_within_set_operation_no_parentheses: select_clause  */
#line 780 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4183 "bison_parser.cpp"
    break;

  case 117: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 781 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4196 "bison_parser.cpp"
    break;

  case 118: /* select_with_paren: '(' select_no_paren ')'  */
#line 790 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4202 "bison_parser.cpp"
    break;

  case 119: /* select_with_paren: '(' select_with_paren ')'  */
#line 791 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4208 "bison_parser.cpp"
    break;

  case 120: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 793 "bison_parser.y"
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
#line 4227 "bison_parser.cpp"
    break;

  case 121: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 807 "bison_parser.y"
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
#line 4243 "bison_parser.cpp"
    break;

  case 122: /* set_operator: set_type opt_all  */
#line 819 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4252 "bison_parser.cpp"
    break;

  case 123: /* set_type: UNION  */
#line 824 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4261 "bison_parser.cpp"
    break;

  case 124: /* set_type: INTERSECT  */
#line 828 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4270 "bison_parser.cpp"
    break;

  case 125: /* set_type: EXCEPT  */
#line 832 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4279 "bison_parser.cpp"
    break;

  case 126: /* opt_all: ALL  */
#line 837 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4285 "bison_parser.cpp"
    break;

  case 127: /* opt_all: %empty  */
#line 838 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4291 "bison_parser.cpp"
    break;

  case 128: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 840 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4305 "bison_parser.cpp"
    break;

  case 129: /* opt_distinct: DISTINCT  */
#line 850 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4311 "bison_parser.cpp"
    break;

  case 130: /* opt_distinct: %empty  */
#line 851 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4317 "bison_parser.cpp"
    break;

  case 132: /* opt_from_clause: from_clause  */
#line 855 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4323 "bison_parser.cpp"
    break;

  case 133: /* opt_from_clause: %empty  */
#line 856 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4329 "bison_parser.cpp"
    break;

  case 134: /* from_clause: FROM table_ref  */
#line 858 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4335 "bison_parser.cpp"
    break;

  case 135: /* opt_where: WHERE expr  */
#line 860 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4341 "bison_parser.cpp"
    break;

  case 136: /* opt_where: %empty  */
#line 861 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4347 "bison_parser.cpp"
    break;

  case 137: /* opt_group: GROUP BY expr_list opt_having  */
#line 863 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4357 "bison_parser.cpp"
    break;

  case 138: /* opt_group: %empty  */
#line 868 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4363 "bison_parser.cpp"
    break;

  case 139: /* opt_having: HAVING expr  */
#line 870 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4369 "bison_parser.cpp"
    break;

  case 140: /* opt_having: %empty  */
#line 871 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4375 "bison_parser.cpp"
    break;

  case 141: /* opt_order: ORDER BY order_list  */
#line 873 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4381 "bison_parser.cpp"
    break;

  case 142: /* opt_order: %empty  */
#line 874 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4387 "bison_parser.cpp"
    break;

  case 143: /* order_list: order_desc  */
#line 876 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4396 "bison_parser.cpp"
    break;

  case 144: /* order_list: order_list ',' order_desc  */
#line 880 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4405 "bison_parser.cpp"
    break;

  case 145: /* order_desc: expr opt_order_type  */
#line 885 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4411 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: ASC  */
#line 887 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4417 "bison_parser.cpp"
    break;

  case 147: /* opt_order_type: DESC  */
#line 888 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4423 "bison_parser.cpp"
    break;

  case 148: /* opt_order_type: %empty  */
#line 889 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4429 "bison_parser.cpp"
    break;

  case 149: /* opt_top: TOP int_literal  */
#line 893 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4435 "bison_parser.cpp"
    break;

  case 150: /* opt_top: %empty  */
#line 894 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4441 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: LIMIT expr  */
#line 896 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4447 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: OFFSET expr  */
#line 897 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4453 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT expr OFFSET expr  */
#line 898 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4459 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: LIMIT ALL  */
#line 899 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4465 "bison_parser.cpp"
    break;

  case 155: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 900 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4471 "bison_parser.cpp"
    break;

  case 156: /* opt_limit: %empty  */
#line 901 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4477 "bison_parser.cpp"
    break;

  case 157: /* expr_list: expr_alias  */
#line 906 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4486 "bison_parser.cpp"
    break;

  case 158: /* expr_list: expr_list ',' expr_alias  */
#line 910 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4495 "bison_parser.cpp"
    break;

  case 159: /* opt_literal_list: literal_list  */
#line 915 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4501 "bison_parser.cpp"
    break;

  case 160: /* opt_literal_list: %empty  */
#line 916 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4507 "bison_parser.cpp"
    break;

  case 161: /* literal_list: literal  */
#line 918 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4516 "bison_parser.cpp"
    break;

  case 162: /* literal_list: literal_list ',' literal  */
#line 922 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4525 "bison_parser.cpp"
    break;

  case 163: /* expr_alias: expr opt_alias  */
#line 927 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4537 "bison_parser.cpp"
    break;

  case 169: /* operand: '(' expr ')'  */
#line 937 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4543 "bison_parser.cpp"
    break;

  case 179: /* operand: '(' select_no_paren ')'  */
#line 939 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4551 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: '-' operand  */
#line 945 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4557 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: NOT operand  */
#line 946 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4563 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand ISNULL  */
#line 947 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4569 "bison_parser.cpp"
    break;

  case 185: /* unary_expr: operand IS NULL  */
#line 948 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4575 "bison_parser.cpp"
    break;

  case 186: /* unary_expr: operand IS NOT NULL  */
#line 949 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4581 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '-' operand  */
#line 951 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4587 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '+' operand  */
#line 952 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4593 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '/' operand  */
#line 953 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4599 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '*' operand  */
#line 954 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4605 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand '%' operand  */
#line 955 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4611 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand '^' operand  */
#line 956 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4617 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand LIKE operand  */
#line 957 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4623 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand NOT LIKE operand  */
#line 958 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4629 "bison_parser.cpp"
    break;

  case 196: /* binary_expr: operand ILIKE operand  */
#line 959 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4635 "bison_parser.cpp"
    break;

  case 197: /* binary_expr: operand CONCAT operand  */
#line 960 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4641 "bison_parser.cpp"
    break;

  case 198: /* logic_expr: expr AND expr  */
#line 962 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4647 "bison_parser.cpp"
    break;

  case 199: /* logic_expr: expr OR expr  */
#line 963 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4653 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand IN '(' expr_list ')'  */
#line 965 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4659 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 966 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4665 "bison_parser.cpp"
    break;

  case 202: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 967 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4671 "bison_parser.cpp"
    break;

  case 203: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 968 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4677 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE expr case_list END  */
#line 972 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4683 "bison_parser.cpp"
    break;

  case 205: /* case_expr: CASE expr case_list ELSE expr END  */
#line 973 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4689 "bison_parser.cpp"
    break;

  case 206: /* case_expr: CASE case_list END  */
#line 974 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4695 "bison_parser.cpp"
    break;

  case 207: /* case_expr: CASE case_list ELSE expr END  */
#line 975 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4701 "bison_parser.cpp"
    break;

  case 208: /* case_list: WHEN expr THEN expr  */
#line 977 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4707 "bison_parser.cpp"
    break;

  case 209: /* case_list: case_list WHEN expr THEN expr  */
#line 978 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4713 "bison_parser.cpp"
    break;

  case 210: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 980 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4719 "bison_parser.cpp"
    break;

  case 211: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 981 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4725 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand '=' operand  */
#line 983 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4731 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand EQUALS operand  */
#line 984 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4737 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand NOTEQUALS operand  */
#line 985 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4743 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand '<' operand  */
#line 986 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4749 "bison_parser.cpp"
    break;

  case 216: /* comp_expr: operand '>' operand  */
#line 987 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4755 "bison_parser.cpp"
    break;

  case 217: /* comp_expr: operand LESSEQ operand  */
#line 988 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4761 "bison_parser.cpp"
    break;

  case 218: /* comp_expr: operand GREATEREQ operand  */
#line 989 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4767 "bison_parser.cpp"
    break;

  case 219: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 993 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4773 "bison_parser.cpp"
    break;

  case 220: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 994 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4779 "bison_parser.cpp"
    break;

  case 221: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 998 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4785 "bison_parser.cpp"
    break;

  case 222: /* opt_window: %empty  */
#line 999 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4791 "bison_parser.cpp"
    break;

  case 223: /* opt_partition: PARTITION BY expr_list  */
#line 1001 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4797 "bison_parser.cpp"
    break;

  case 224: /* opt_partition: %empty  */
#line 1002 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4803 "bison_parser.cpp"
    break;

  case 225: /* opt_frame_clause: frame_type frame_bound  */
#line 1007 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4809 "bison_parser.cpp"
    break;

  case 226: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1008 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4815 "bison_parser.cpp"
    break;

  case 227: /* opt_frame_clause: %empty  */
#line 1009 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4823 "bison_parser.cpp"
    break;

  case 228: /* frame_type: RANGE  */
#line 1013 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 4829 "bison_parser.cpp"
    break;

  case 229: /* frame_type: ROWS  */
#line 1014 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 4835 "bison_parser.cpp"
    break;

  case 230: /* frame_type: GROUPS  */
#line 1015 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 4841 "bison_parser.cpp"
    break;

  case 231: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1017 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 4847 "bison_parser.cpp"
    break;

  case 232: /* frame_bound: INTVAL PRECEDING  */
#line 1018 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 4853 "bison_parser.cpp"
    break;

  case 233: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1019 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 4859 "bison_parser.cpp"
    break;

  case 234: /* frame_bound: INTVAL FOLLOWING  */
#line 1020 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 4865 "bison_parser.cpp"
    break;

  case 235: /* frame_bound: CURRENT_ROW  */
#line 1021 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 4871 "bison_parser.cpp"
    break;

  case 236: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1023 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4877 "bison_parser.cpp"
    break;

  case 237: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1025 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4883 "bison_parser.cpp"
    break;

  case 238: /* datetime_field: SECOND  */
#line 1027 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4889 "bison_parser.cpp"
    break;

  case 239: /* datetime_field: MINUTE  */
#line 1028 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4895 "bison_parser.cpp"
    break;

  case 240: /* datetime_field: HOUR  */
#line 1029 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4901 "bison_parser.cpp"
    break;

  case 241: /* datetime_field: DAY  */
#line 1030 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4907 "bison_parser.cpp"
    break;

  case 242: /* datetime_field: MONTH  */
#line 1031 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4913 "bison_parser.cpp"
    break;

  case 243: /* datetime_field: YEAR  */
#line 1032 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4919 "bison_parser.cpp"
    break;

  case 244: /* datetime_field_plural: SECONDS  */
#line 1034 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4925 "bison_parser.cpp"
    break;

  case 245: /* datetime_field_plural: MINUTES  */
#line 1035 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4931 "bison_parser.cpp"
    break;

  case 246: /* datetime_field_plural: HOURS  */
#line 1036 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4937 "bison_parser.cpp"
    break;

  case 247: /* datetime_field_plural: DAYS  */
#line 1037 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4943 "bison_parser.cpp"
    break;

  case 248: /* datetime_field_plural: MONTHS  */
#line 1038 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4949 "bison_parser.cpp"
    break;

  case 249: /* datetime_field_plural: YEARS  */
#line 1039 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4955 "bison_parser.cpp"
    break;

  case 252: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1043 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4961 "bison_parser.cpp"
    break;

  case 253: /* array_index: operand '[' int_literal ']'  */
#line 1045 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4967 "bison_parser.cpp"
    break;

  case 254: /* between_expr: operand BETWEEN operand AND operand  */
#line 1047 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4973 "bison_parser.cpp"
    break;

  case 255: /* column_name: IDENTIFIER  */
#line 1049 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4979 "bison_parser.cpp"
    break;

  case 256: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1050 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4985 "bison_parser.cpp"
    break;

  case 257: /* column_name: '*'  */
#line 1051 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4991 "bison_parser.cpp"
    break;

  case 258: /* column_name: IDENTIFIER '.' '*'  */
#line 1052 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4997 "bison_parser.cpp"
    break;

  case 267: /* vector_literal: VECTOR STRING  */
#line 1056 "bison_parser.y"
                              { (yyval.expr) = Expr::makeVectorLiteral((yyvsp[0].sval)); }
#line 5003 "bison_parser.cpp"
    break;

  case 268: /* string_literal: STRING  */
#line 1058 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5009 "bison_parser.cpp"
    break;

  case 269: /* bool_literal: TRUE  */
#line 1060 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5015 "bison_parser.cpp"
    break;

  case 270: /* bool_literal: FALSE  */
#line 1061 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5021 "bison_parser.cpp"
    break;

  case 271: /* num_literal: FLOATVAL  */
#line 1063 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5027 "bison_parser.cpp"
    break;

  case 273: /* int_literal: INTVAL  */
#line 1066 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5033 "bison_parser.cpp"
    break;

  case 274: /* null_literal: NULL  */
#line 1068 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5039 "bison_parser.cpp"
    break;

  case 275: /* date_literal: DATE STRING  */
#line 1070 "bison_parser.y"
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
#line 5054 "bison_parser.cpp"
    break;

  case 276: /* interval_literal: int_literal duration_field  */
#line 1081 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5063 "bison_parser.cpp"
    break;

  case 277: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1085 "bison_parser.y"
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
#line 5079 "bison_parser.cpp"
    break;

  case 278: /* interval_literal: INTERVAL STRING  */
#line 1096 "bison_parser.y"
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
#line 5115 "bison_parser.cpp"
    break;

  case 279: /* param_expr: '?'  */
#line 1128 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5125 "bison_parser.cpp"
    break;

  case 281: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1137 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5136 "bison_parser.cpp"
    break;

  case 285: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1146 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5147 "bison_parser.cpp"
    break;

  case 286: /* table_ref_commalist: table_ref_atomic  */
#line 1153 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5156 "bison_parser.cpp"
    break;

  case 287: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1157 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5165 "bison_parser.cpp"
    break;

  case 288: /* table_ref_name: table_name opt_table_alias  */
#line 1162 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5177 "bison_parser.cpp"
    break;

  case 289: /* table_ref_name_no_alias: table_name  */
#line 1170 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5187 "bison_parser.cpp"
    break;

  case 290: /* table_name: IDENTIFIER  */
#line 1176 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5196 "bison_parser.cpp"
    break;

  case 291: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1180 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5205 "bison_parser.cpp"
    break;

  case 292: /* opt_index_name: IDENTIFIER  */
#line 1185 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5211 "bison_parser.cpp"
    break;

  case 293: /* opt_index_name: %empty  */
#line 1186 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5217 "bison_parser.cpp"
    break;

  case 295: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1188 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5223 "bison_parser.cpp"
    break;

  case 297: /* opt_table_alias: %empty  */
#line 1190 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5229 "bison_parser.cpp"
    break;

  case 298: /* alias: AS IDENTIFIER  */
#line 1192 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5235 "bison_parser.cpp"
    break;

  case 299: /* alias: IDENTIFIER  */
#line 1193 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5241 "bison_parser.cpp"
    break;

  case 301: /* opt_alias: %empty  */
#line 1195 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5247 "bison_parser.cpp"
    break;

  case 302: /* opt_locking_clause: opt_locking_clause_list  */
#line 1201 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5253 "bison_parser.cpp"
    break;

  case 303: /* opt_locking_clause: %empty  */
#line 1202 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5259 "bison_parser.cpp"
    break;

  case 304: /* opt_locking_clause_list: locking_clause  */
#line 1204 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5268 "bison_parser.cpp"
    break;

  case 305: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1208 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5277 "bison_parser.cpp"
    break;

  case 306: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1213 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5288 "bison_parser.cpp"
    break;

  case 307: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1219 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5299 "bison_parser.cpp"
    break;

  case 308: /* row_lock_mode: UPDATE  */
#line 1226 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5305 "bison_parser.cpp"
    break;

  case 309: /* row_lock_mode: NO KEY UPDATE  */
#line 1227 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5311 "bison_parser.cpp"
    break;

  case 310: /* row_lock_mode: SHARE  */
#line 1228 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5317 "bison_parser.cpp"
    break;

  case 311: /* row_lock_mode: KEY SHARE  */
#line 1229 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5323 "bison_parser.cpp"
    break;

  case 312: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1231 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5329 "bison_parser.cpp"
    break;

  case 313: /* opt_row_lock_policy: NOWAIT  */
#line 1232 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5335 "bison_parser.cpp"
    break;

  case 314: /* opt_row_lock_policy: %empty  */
#line 1233 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5341 "bison_parser.cpp"
    break;

  case 316: /* opt_with_clause: %empty  */
#line 1239 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5347 "bison_parser.cpp"
    break;

  case 317: /* with_clause: WITH with_description_list  */
#line 1241 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5353 "bison_parser.cpp"
    break;

  case 318: /* with_description_list: with_description  */
#line 1243 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5362 "bison_parser.cpp"
    break;

  case 319: /* with_description_list: with_description_list ',' with_description  */
#line 1247 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5371 "bison_parser.cpp"
    break;

  case 320: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1252 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5381 "bison_parser.cpp"
    break;

  case 321: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1262 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5393 "bison_parser.cpp"
    break;

  case 322: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1269 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5406 "bison_parser.cpp"
    break;

  case 323: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1277 "bison_parser.y"
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
#line 5434 "bison_parser.cpp"
    break;

  case 324: /* opt_join_type: INNER  */
#line 1301 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5440 "bison_parser.cpp"
    break;

  case 325: /* opt_join_type: LEFT OUTER  */
#line 1302 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5446 "bison_parser.cpp"
    break;

  case 326: /* opt_join_type: LEFT  */
#line 1303 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5452 "bison_parser.cpp"
    break;

  case 327: /* opt_join_type: RIGHT OUTER  */
#line 1304 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5458 "bison_parser.cpp"
    break;

  case 328: /* opt_join_type: RIGHT  */
#line 1305 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5464 "bison_parser.cpp"
    break;

  case 329: /* opt_join_type: FULL OUTER  */
#line 1306 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5470 "bison_parser.cpp"
    break;

  case 330: /* opt_join_type: OUTER  */
#line 1307 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5476 "bison_parser.cpp"
    break;

  case 331: /* opt_join_type: FULL  */
#line 1308 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5482 "bison_parser.cpp"
    break;

  case 332: /* opt_join_type: CROSS  */
#line 1309 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5488 "bison_parser.cpp"
    break;

  case 333: /* opt_join_type: %empty  */
#line 1310 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5494 "bison_parser.cpp"
    break;

  case 337: /* ident_commalist: IDENTIFIER  */
#line 1321 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5503 "bison_parser.cpp"
    break;

  case 338: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1325 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5512 "bison_parser.cpp"
    break;


#line 5516 "bison_parser.cpp"

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

#line 1331 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
