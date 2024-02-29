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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "clol.y"

#include <iostream>
#include "ast.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
 
int semnal=0;
int semnal1=0;
int semnal2=0;
int semnal_functie=0;
int semnal_array_params=0;
int semnal_apel_functie=0;
int ok_clol=0;
int sunt_in_main=0;
int sunt_in_bool_expr=0;

#line 91 "clol.tab.c"

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

#include "clol.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START_CLS = 3,                  /* START_CLS  */
  YYSYMBOL_STOP_CLS = 4,                   /* STOP_CLS  */
  YYSYMBOL_START_GBVARS = 5,               /* START_GBVARS  */
  YYSYMBOL_STOP_GBVARS = 6,                /* STOP_GBVARS  */
  YYSYMBOL_START_GBFNS = 7,                /* START_GBFNS  */
  YYSYMBOL_STOP_GBFNS = 8,                 /* STOP_GBFNS  */
  YYSYMBOL_START_MAIN = 9,                 /* START_MAIN  */
  YYSYMBOL_STOP_MAIN = 10,                 /* STOP_MAIN  */
  YYSYMBOL_CLASS = 11,                     /* CLASS  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_CONST = 13,                     /* CONST  */
  YYSYMBOL_TYPE = 14,                      /* TYPE  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_BOOL = 20,                      /* BOOL  */
  YYSYMBOL_OP = 21,                        /* OP  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_BOOL_OP = 23,                   /* BOOL_OP  */
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_LOGIC_GATE = 25,                /* LOGIC_GATE  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_CLASS_OP = 29,                  /* CLASS_OP  */
  YYSYMBOL_EVAL = 30,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 31,                    /* TYPEOF  */
  YYSYMBOL_PRIO_OP = 32,                   /* PRIO_OP  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* ']'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_val_decl = 42,                  /* val_decl  */
  YYSYMBOL_array_decl = 43,                /* array_decl  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_47_4 = 47,                      /* $@4  */
  YYSYMBOL_array_params = 48,              /* array_params  */
  YYSYMBOL_array_call = 49,                /* array_call  */
  YYSYMBOL_val_assign = 50,                /* val_assign  */
  YYSYMBOL_51_5 = 51,                      /* $@5  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_53_7 = 53,                      /* $@7  */
  YYSYMBOL_operand = 54,                   /* operand  */
  YYSYMBOL_arthm_expr = 55,                /* arthm_expr  */
  YYSYMBOL_bool_operand = 56,              /* bool_operand  */
  YYSYMBOL_bool_expr = 57,                 /* bool_expr  */
  YYSYMBOL_value = 58,                     /* value  */
  YYSYMBOL_if_stmt = 59,                   /* if_stmt  */
  YYSYMBOL_begin_if = 60,                  /* begin_if  */
  YYSYMBOL_end_if = 61,                    /* end_if  */
  YYSYMBOL_while_stmt = 62,                /* while_stmt  */
  YYSYMBOL_begin_while = 63,               /* begin_while  */
  YYSYMBOL_end_while = 64,                 /* end_while  */
  YYSYMBOL_for_stmt = 65,                  /* for_stmt  */
  YYSYMBOL_begin_for = 66,                 /* begin_for  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_end_for = 69,                   /* end_for  */
  YYSYMBOL_fn_call = 70,                   /* fn_call  */
  YYSYMBOL_71_10 = 71,                     /* $@10  */
  YYSYMBOL_72_11 = 72,                     /* $@11  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_74_13 = 74,                     /* $@13  */
  YYSYMBOL_75_14 = 75,                     /* $@14  */
  YYSYMBOL_76_15 = 76,                     /* $@15  */
  YYSYMBOL_params_call = 77,               /* params_call  */
  YYSYMBOL_class_call = 78,                /* class_call  */
  YYSYMBOL_code_block = 79,                /* code_block  */
  YYSYMBOL_statement = 80,                 /* statement  */
  YYSYMBOL_begin_eval = 81,                /* begin_eval  */
  YYSYMBOL_mid_eval = 82,                  /* mid_eval  */
  YYSYMBOL_end_eval = 83,                  /* end_eval  */
  YYSYMBOL_begin_typeof = 84,              /* begin_typeof  */
  YYSYMBOL_mid_typeof = 85,                /* mid_typeof  */
  YYSYMBOL_end_typeof = 86,                /* end_typeof  */
  YYSYMBOL_return_stmt = 87,               /* return_stmt  */
  YYSYMBOL_fn_decl = 88,                   /* fn_decl  */
  YYSYMBOL_begin_fn = 89,                  /* begin_fn  */
  YYSYMBOL_90_16 = 90,                     /* $@16  */
  YYSYMBOL_91_17 = 91,                     /* $@17  */
  YYSYMBOL_end_fn = 92,                    /* end_fn  */
  YYSYMBOL_93_18 = 93,                     /* $@18  */
  YYSYMBOL_params = 94,                    /* params  */
  YYSYMBOL_param = 95,                     /* param  */
  YYSYMBOL_clol = 96,                      /* clol  */
  YYSYMBOL_cls = 97,                       /* cls  */
  YYSYMBOL_cls_decl = 98,                  /* cls_decl  */
  YYSYMBOL_cl_decl = 99,                   /* cl_decl  */
  YYSYMBOL_begin_cl = 100,                 /* begin_cl  */
  YYSYMBOL_101_19 = 101,                   /* $@19  */
  YYSYMBOL_end_cl = 102,                   /* end_cl  */
  YYSYMBOL_gb_vars = 103,                  /* gb_vars  */
  YYSYMBOL_gb_vars_decl = 104,             /* gb_vars_decl  */
  YYSYMBOL_gb_fns = 105,                   /* gb_fns  */
  YYSYMBOL_gb_fns_decl = 106,              /* gb_fns_decl  */
  YYSYMBOL_main = 107,                     /* main  */
  YYSYMBOL_108_20 = 108                    /* $@20  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  275

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    42,    54,    67,    75,    75,    75,   104,
     104,   104,   134,   135,   138,   168,   168,   185,   185,   185,
     192,   200,   201,   209,   217,   230,   231,   239,   244,   245,
     246,   247,   250,   251,   252,   253,   254,   257,   258,   259,
     262,   277,   295,   311,   327,   344,   355,   372,   373,   374,
     378,   381,   384,   387,   390,   393,   396,   399,   399,   400,
     400,   401,   402,   405,   408,   408,   408,   408,   431,   431,
     431,   431,   455,   456,   457,   460,   504,   505,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   519,   522,   532,
     535,   538,   549,   552,   553,   555,   558,   558,   558,   561,
     561,   564,   565,   566,   569,   572,   584,   585,   588,   589,
     592,   595,   595,   606,   607,   608,   609,   612,   613,   616,
     617,   618,   619,   622,   623,   626,   627,   630,   630,   631
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START_CLS",
  "STOP_CLS", "START_GBVARS", "STOP_GBVARS", "START_GBFNS", "STOP_GBFNS",
  "START_MAIN", "STOP_MAIN", "CLASS", "ID", "CONST", "TYPE", "ASSIGN",
  "INT", "FLOAT", "CHAR", "STRING", "BOOL", "OP", "RETURN", "BOOL_OP",
  "NOT", "LOGIC_GATE", "IF", "FOR", "WHILE", "CLASS_OP", "EVAL", "TYPEOF",
  "PRIO_OP", "'['", "']'", "'{'", "'}'", "','", "'('", "')'", "';'",
  "$accept", "val_decl", "array_decl", "$@1", "$@2", "$@3", "$@4",
  "array_params", "array_call", "val_assign", "$@5", "$@6", "$@7",
  "operand", "arthm_expr", "bool_operand", "bool_expr", "value", "if_stmt",
  "begin_if", "end_if", "while_stmt", "begin_while", "end_while",
  "for_stmt", "begin_for", "$@8", "$@9", "end_for", "fn_call", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "params_call", "class_call",
  "code_block", "statement", "begin_eval", "mid_eval", "end_eval",
  "begin_typeof", "mid_typeof", "end_typeof", "return_stmt", "fn_decl",
  "begin_fn", "$@16", "$@17", "end_fn", "$@18", "params", "param", "clol",
  "cls", "cls_decl", "cl_decl", "begin_cl", "$@19", "end_cl", "gb_vars",
  "gb_vars_decl", "gb_fns", "gb_fns_decl", "main", "$@20", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-199)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    17,    64,    54,    84,    56,    85,     0,  -199,   130,
     127,  -199,  -199,   114,  -199,   171,   174,   187,   161,   163,
     165,   204,  -199,   192,   167,   168,   164,   195,   210,   178,
    -199,   208,    79,  -199,     0,     0,     0,   133,   185,   186,
     188,   189,   190,   193,   196,   214,   197,  -199,   204,  -199,
     204,  -199,   204,   198,  -199,  -199,   204,   141,   141,  -199,
     -13,  -199,  -199,  -199,   199,   200,   213,  -199,    96,  -199,
    -199,  -199,     7,    59,   225,   205,  -199,  -199,  -199,   230,
     228,   231,   207,   141,   155,   141,  -199,  -199,  -199,  -199,
      59,  -199,  -199,   211,  -199,   212,  -199,   215,  -199,   234,
     232,  -199,   -17,   -15,    26,  -199,  -199,  -199,    59,   172,
      36,    71,    81,  -199,   227,   233,   101,   108,   216,   227,
     218,  -199,  -199,  -199,  -199,  -199,   195,    59,   237,    68,
    -199,   224,   236,   221,   226,    59,  -199,    23,   122,   247,
     250,   223,   229,    70,  -199,  -199,  -199,  -199,  -199,   235,
     238,  -199,    59,   120,   239,   242,    68,    68,   141,    59,
     240,  -199,   241,  -199,   256,  -199,   243,   133,  -199,  -199,
    -199,  -199,  -199,  -199,   252,   258,   244,   245,   246,  -199,
    -199,    59,   251,   259,   260,   253,   141,   141,   254,    59,
      59,  -199,   248,    68,    68,   141,    59,   261,  -199,  -199,
    -199,  -199,  -199,  -199,   263,   255,  -199,  -199,   236,  -199,
     257,  -199,  -199,  -199,   264,   -14,    -7,  -199,  -199,   249,
    -199,    66,   262,   265,   266,   267,  -199,   268,  -199,    59,
      59,   269,   104,   104,   270,  -199,  -199,  -199,  -199,  -199,
      59,  -199,  -199,  -199,  -199,    99,   214,   272,   273,   276,
     274,   275,  -199,    59,  -199,   278,   277,   271,   279,   282,
     280,  -199,   284,    59,  -199,  -199,   286,  -199,   287,   288,
    -199,  -199,  -199,  -199,  -199
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     107,     0,     0,   118,     0,     0,     0,     0,     1,     0,
     124,   111,   106,     0,   108,     0,     0,     0,     0,     0,
       0,    77,   110,     0,     0,     0,     0,     0,   129,     0,
     109,     0,     2,   116,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    77,    82,
      77,    83,    77,     0,    17,    99,    77,     0,     0,    95,
       2,   119,   120,   117,     0,     0,     0,   125,     0,   127,
     105,   112,     0,     0,     0,     0,   113,   114,   115,     0,
       0,     0,     0,     0,     0,     0,    87,    90,    78,    79,
       0,    80,    50,     0,    53,     0,    56,     0,    86,     0,
      94,    76,    45,    40,    41,    42,    43,    44,     0,     0,
      49,     0,    46,    37,    88,    35,    47,    48,     0,    91,
       0,   121,   122,    96,   123,   126,     0,     0,     0,     0,
       3,     0,   103,    75,     0,     0,    65,     0,    15,     0,
       0,     0,     0,     0,    20,    52,    55,    63,    18,     0,
       0,    34,     0,     0,     0,    35,     0,     0,     0,     0,
       0,    84,     0,    85,     0,     4,     0,    24,    22,    23,
      27,    21,    26,    25,     5,     0,     0,   101,     0,    14,
      16,    74,     0,     0,     0,     2,     0,     0,     0,     0,
       0,   100,    34,     0,     0,     0,     0,    28,    30,    38,
      32,    89,    92,   128,     0,     0,   104,    97,   103,    69,
      72,    66,    51,    75,     0,     0,     0,    54,    19,     0,
      36,    28,    30,    38,    32,     0,     6,     0,   102,    74,
      74,     0,     0,     0,     0,    29,    31,    39,    33,     9,
       0,    98,    70,    73,    67,    24,    27,     0,    21,    25,
       0,    21,    93,     0,     7,    12,     0,     0,     0,     0,
       0,    10,     0,     0,    71,    61,     0,    62,     0,     0,
       8,    13,    58,    60,    11
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,    47,    65,  -199,  -199,  -199,  -199,  -198,   -21,   -83,
    -199,  -199,  -199,  -104,  -106,  -199,   -39,   -66,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,   -11,
    -199,  -199,  -199,  -199,  -199,  -199,   -49,   -18,   150,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,   -19,  -199,  -199,
    -199,  -199,  -199,    67,  -199,  -199,  -199,  -199,   290,  -199,
    -199,   159,  -199,  -199,  -199,  -199,  -199,  -199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    43,    44,   240,   262,   253,   269,   254,   110,    46,
      81,    99,   189,   111,   112,   113,   114,   115,    47,    48,
      92,    49,    50,    94,    51,    52,   258,   260,    96,   116,
      82,   181,   231,   178,   229,   256,   211,   117,    55,    56,
      57,   118,   161,    58,   120,   163,   150,    20,    21,    75,
     227,    59,   100,   176,   177,     2,     3,     5,     6,     7,
      29,    22,    10,    26,    28,    68,    70,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   142,    73,    54,   -24,   153,   -22,   130,    67,     1,
      53,   158,    79,    15,    16,   -24,    80,   -22,   158,   119,
      74,   -64,   127,   171,   144,   153,   232,    45,     4,    45,
      54,    45,    54,   233,    54,    45,    17,    53,    54,    53,
     128,    53,   151,   155,   137,    53,   143,   -23,   158,   125,
     171,   171,   197,   198,    18,   261,    24,   -27,   -23,     9,
      12,   165,   182,    45,     8,   271,    54,     4,   -27,   180,
     154,   102,    19,    64,    25,   103,   104,   105,   106,   107,
     167,    18,    18,    18,   168,   169,   192,   171,   171,   221,
     222,    65,   156,   200,    73,   158,    11,   129,   157,    19,
      19,    19,   -21,   157,   124,   235,   129,   164,   170,   188,
      66,   173,    74,   -21,   -15,   210,   245,   -96,   172,   199,
     168,   169,   -26,   218,   219,    14,   248,   251,    79,   -25,
     224,   141,    80,   -26,    27,   170,   170,   -64,   173,   173,
     -25,   193,   129,    15,    23,   172,   172,   215,   216,   247,
     250,   183,   194,   102,    30,    80,   223,   103,   104,   105,
     106,   107,    79,   210,   210,   108,    80,   138,   139,   140,
      63,   -64,   170,   170,   255,   173,   173,    15,    23,   109,
     242,   243,   172,   172,   102,    31,    32,   255,   103,   104,
     105,   106,   107,    76,    77,    78,   152,   255,    93,    33,
      95,    34,    97,    35,    60,    36,   101,    61,    62,    66,
     109,   246,   246,    71,   249,   249,    37,    15,    23,    69,
      72,   172,   172,    83,    84,   123,    85,    86,    87,    90,
      38,    39,    40,    88,    41,    42,    89,    91,    98,   121,
     122,   131,   133,   132,   134,   136,   135,   145,   146,   148,
     175,   147,   158,   166,   149,   160,   159,   162,   174,   -68,
     179,   184,   185,   186,   195,   196,   203,   205,    73,   187,
     206,   213,   214,   190,   191,   228,     0,   204,   225,   127,
     201,   202,   208,   207,   209,     0,   212,   220,   234,   217,
     226,   -17,     0,   157,   230,    13,     0,     0,     0,     0,
       0,   236,   239,   241,   237,   238,   265,     0,   244,     0,
     252,   257,   -57,   259,   -59,   263,   264,   267,   266,   268,
     270,   272,   273,     0,   274
};

static const yytype_int16 yycheck[] =
{
      21,    84,    15,    21,    21,   109,    21,    73,    27,     3,
      21,    25,    29,    13,    14,    32,    33,    32,    25,    58,
      33,    38,    15,   129,    90,   129,    40,    48,    11,    50,
      48,    52,    50,    40,    52,    56,    36,    48,    56,    50,
      33,    52,   108,   109,    83,    56,    85,    21,    25,    68,
     156,   157,   156,   157,     7,   253,     9,    21,    32,     5,
       4,   127,    39,    84,     0,   263,    84,    11,    32,   135,
     109,    12,     7,    26,     9,    16,    17,    18,    19,    20,
      12,    34,    35,    36,    16,    17,   152,   193,   194,   193,
     194,    26,    21,   159,    15,    25,    12,    38,    32,    34,
      35,    36,    21,    32,     8,    39,    38,   126,   129,    39,
      14,   129,    33,    32,    15,   181,    12,    38,   129,   158,
      16,    17,    21,   189,   190,    40,   232,   233,    29,    21,
     196,    84,    33,    32,     7,   156,   157,    38,   156,   157,
      32,    21,    38,    13,    14,   156,   157,   186,   187,   232,
     233,    29,    32,    12,    40,    33,   195,    16,    17,    18,
      19,    20,    29,   229,   230,    24,    33,    12,    13,    14,
       6,    38,   193,   194,   240,   193,   194,    13,    14,    38,
     229,   230,   193,   194,    12,    14,    12,   253,    16,    17,
      18,    19,    20,    34,    35,    36,    24,   263,    48,    12,
      50,    40,    52,    40,    12,    40,    56,    40,    40,    14,
      38,   232,   233,    35,   232,   233,    12,    13,    14,     9,
      12,   232,   233,    38,    38,    12,    38,    38,    38,    15,
      26,    27,    28,    40,    30,    31,    40,    40,    40,    40,
      40,    16,    12,    38,    16,    38,    15,    36,    36,    15,
      14,    36,    25,    16,    22,    39,    23,    39,    34,    38,
      34,    14,    12,    40,    25,    23,    10,    15,    15,    40,
      12,    12,    12,    38,    36,   208,    -1,    34,    15,    15,
      40,    40,    37,    39,    38,    -1,    35,    39,    39,    35,
      35,    15,    -1,    32,    37,     5,    -1,    -1,    -1,    -1,
      -1,    39,    35,    35,    39,    39,    35,    -1,    39,    -1,
      40,    39,    39,    39,    39,    37,    39,    35,    39,    39,
      36,    35,    35,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    96,    97,    11,    98,    99,   100,     0,     5,
     103,    12,     4,    99,    40,    13,    14,    36,    42,    43,
      88,    89,   102,    14,    42,    43,   104,     7,   105,   101,
      40,    14,    12,    12,    40,    40,    40,    12,    26,    27,
      28,    30,    31,    42,    43,    49,    50,    59,    60,    62,
      63,    65,    66,    70,    78,    79,    80,    81,    84,    92,
      12,    40,    40,     6,    42,    43,    14,    88,   106,     9,
     107,    35,    12,    15,    33,    90,   102,   102,   102,    29,
      33,    51,    71,    38,    38,    38,    38,    38,    40,    40,
      15,    40,    61,    79,    64,    79,    69,    79,    40,    52,
      93,    79,    12,    16,    17,    18,    19,    20,    24,    38,
      49,    54,    55,    56,    57,    58,    70,    78,    82,    57,
      85,    40,    40,    12,     8,    88,   108,    15,    33,    38,
      58,    16,    38,    12,    16,    15,    38,    57,    12,    13,
      14,    42,    50,    57,    58,    36,    36,    36,    15,    22,
      87,    58,    24,    54,    57,    58,    21,    32,    25,    23,
      39,    83,    39,    86,    88,    58,    16,    12,    16,    17,
      49,    55,    70,    78,    34,    14,    94,    95,    74,    34,
      58,    72,    39,    29,    14,    12,    40,    40,    39,    53,
      38,    36,    58,    21,    32,    25,    23,    54,    54,    57,
      58,    40,    40,    10,    34,    15,    12,    39,    37,    38,
      58,    77,    35,    12,    12,    57,    57,    35,    58,    58,
      39,    54,    54,    57,    58,    15,    35,    91,    94,    75,
      37,    73,    40,    40,    39,    39,    39,    39,    39,    35,
      44,    35,    77,    77,    39,    12,    49,    50,    55,    78,
      50,    55,    40,    46,    48,    58,    76,    39,    67,    39,
      68,    48,    45,    37,    39,    35,    39,    35,    39,    47,
      36,    48,    35,    35,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    43,    44,    45,    43,    46,
      47,    43,    48,    48,    49,    51,    50,    52,    53,    50,
      50,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    55,    56,    56,    56,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    66,    68,
      66,    66,    66,    69,    71,    72,    73,    70,    74,    75,
      76,    70,    77,    77,    77,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    82,    83,
      84,    85,    86,    87,    87,    88,    90,    91,    89,    93,
      92,    94,    94,    94,    95,    96,    97,    97,    98,    98,
      99,   101,   100,   102,   102,   102,   102,   103,   103,   104,
     104,   104,   104,   105,   105,   106,   106,   108,   107,   107
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     5,     5,     0,     0,    11,     0,
       0,    12,     1,     3,     4,     0,     4,     0,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     5,     3,     5,     2,     1,     4,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     2,     2,     5,     2,     2,     0,    10,     0,
      10,     9,     9,     2,     0,     0,     0,     7,     0,     0,
       0,     9,     1,     3,     0,     3,     2,     0,     2,     2,
       2,     1,     1,     1,     3,     3,     2,     2,     1,     2,
       2,     1,     2,     5,     0,     2,     0,     0,     8,     0,
       4,     1,     3,     0,     2,     4,     3,     0,     2,     3,
       2,     0,     4,     3,     3,     3,     2,     3,     0,     2,
       2,     3,     3,     3,     0,     1,     2,     0,     4,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* val_decl: TYPE ID  */
#line 34 "clol.y"
                          { if(search_variables((yyvsp[0].string))==true)
                               {set_tip((yyvsp[-1].string));
                               add_information_variable((yyvsp[0].string),1,0);} 
                            else 
                                {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[0].string), yylineno);
                                  ok_clol=1;}
                            }
#line 1389 "clol.tab.c"
    break;

  case 3: /* val_decl: TYPE ID ASSIGN value  */
#line 42 "clol.y"
                                      {  if(search_variables((yyvsp[-2].string))==true) 
                                             {set_tip((yyvsp[-3].string)); 
                                             add_information_variable((yyvsp[-2].string),1,1);} 
                                        else  
                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[-2].string), yylineno);
                                             ok_clol=1;}
                                        left_type_is((yyvsp[-2].string));
                                        if(right_type_equal_left_type()==false)
                                        {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                        ok_clol=1;}
                                        }
#line 1405 "clol.tab.c"
    break;

  case 4: /* val_decl: CONST TYPE ID ASSIGN value  */
#line 54 "clol.y"
                                            { if(search_variables((yyvsp[-2].string))==true) 
                                                {set_tip((yyvsp[-3].string)); 
                                                 add_information_variable((yyvsp[-2].string),1,1);} 
                                              else 
                                                 {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[-2].string), yylineno);
                                                 ok_clol=1;}
                                                 left_type_is((yyvsp[-2].string));
                                                 if(right_type_equal_left_type()==false)
                                                  {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                  ok_clol=1;}
                                             }
#line 1421 "clol.tab.c"
    break;

  case 5: /* array_decl: TYPE ID '[' INT ']'  */
#line 67 "clol.y"
                                     { if(search_variables((yyvsp[-3].string))==true)
                                          {set_tip((yyvsp[-4].string)); 
                                           add_information_variable((yyvsp[-3].string),1,0);} 
                                        else 
                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[-3].string), yylineno);
                                            ok_clol=1;}
                                             }
#line 1433 "clol.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 75 "clol.y"
                                                {semnal_array_params=1;}
#line 1439 "clol.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 75 "clol.y"
                                                                                      { semnal_array_params=0; }
#line 1445 "clol.tab.c"
    break;

  case 8: /* array_decl: TYPE ID '[' INT ']' ASSIGN '{' $@1 array_params $@2 '}'  */
#line 76 "clol.y"
                                                                {if(search_variables((yyvsp[-9].string))==true)
                                                                    {set_tip((yyvsp[-10].string)); 
                                                                    add_information_variable((yyvsp[-9].string),1,0);
                                                                     int aux=atoi((yyvsp[-7].string));
                                                                    if(nr_of_params_for_array()>aux)
                                                                         { printf("Array ul %s  de la linia %d a primit mai multe valori decat maximul posibil declarat\n",(yyvsp[-9].string), yylineno);
                                                                            ok_clol=1;}
                                                                    make_string_for_array();
                                                                    delete_parametrii_for_array();
                                                                    }
                                                                  else
                                                                     {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[-9].string), yylineno);
                                                                     ok_clol=1;}
                                                                     left_type_is((yyvsp[-9].string));
                                                                 if(right_type_equal_left_type()==false||verificaTipuriConcidente()==false)
                                                                     {  if(verificaTipuriConcidente()==false)
                                                                            {printf("Valorile din array  de  la linia %d nu au aceelasi tip\n",yylineno);
                                                                             delete_tip_parametrii_for_array();
                                                                             ok_clol=1;
                                                                            }
                                                                        else
                                                                        if(right_type_equal_left_type()==false)
                                                                          { printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                                           ok_clol=1;}
                                                                      
                                                                     }
                                                                   }
#line 1477 "clol.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 104 "clol.y"
                                                      {semnal_array_params=1;}
#line 1483 "clol.tab.c"
    break;

  case 10: /* $@4: %empty  */
#line 104 "clol.y"
                                                                                            { semnal_array_params=0; }
#line 1489 "clol.tab.c"
    break;

  case 11: /* array_decl: CONST TYPE ID '[' INT ']' ASSIGN '{' $@3 array_params $@4 '}'  */
#line 105 "clol.y"
                                                                       {if(search_variables((yyvsp[-9].string))==true)
                                                                           {set_tip((yyvsp[-10].string));
                                                                            add_information_variable((yyvsp[-9].string),1,0);
                                                                             int aux=atoi((yyvsp[-7].string));
                                                                             if(nr_of_params_for_array()>aux)
                                                                               {printf("Array ul %s  de la linia %d a primit mai multe valori decat maximul posibil declarat\n",(yyvsp[-10].string), yylineno);
                                                                                ok_clol=1;}                                                                             
                                                                              make_string_for_array();
                                                                              delete_parametrii_for_array(); 
                                                                          }
                                                                        else
                                                                            {printf("Variabila  %s  de la linia %d a fost deja declarata\n",(yyvsp[-9].string),yylineno);
                                                                             ok_clol=1;}
                                                                            left_type_is((yyvsp[-9].string));
                                                                 if(right_type_equal_left_type()==false||verificaTipuriConcidente()==false)
                                                                     {  if(verificaTipuriConcidente()==false)
                                                                            {printf("Valorile din array  de  la linia %d nu au aceelasi tip\n",yylineno);
                                                                             delete_tip_parametrii_for_array();
                                                                             ok_clol=1;
                                                                            }
                                                                        else
                                                                        if(right_type_equal_left_type()==false)
                                                                            {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                                                            ok_clol=1;}
                                                                     }
                                                                       }
#line 1520 "clol.tab.c"
    break;

  case 14: /* array_call: ID '[' INT ']'  */
#line 138 "clol.y"
                                {what_id((yyvsp[-3].string));
                                  if(semnal_array_params==1)
                                  {
                                    params_for_arrays((yyvsp[-3].string)); 
                                    tip_for_arrays (return_type((yyvsp[-3].string)));
                                  }
                                if(semnal==1)
                                       {put_parametrii_1(verify_operand((yyvsp[-3].string))); 
                                       semnal=0;}
                                
                               if(see_if_variable_is_declarated((yyvsp[-3].string))==false)
                                    {if(semnal_functie==1&&see_if_variable_is_parameter((yyvsp[-3].string))==false||semnal_functie==0)
                                       {printf("Variabila  %s folosita  la linia %d nu a fost declarata anterior\n",(yyvsp[-3].string), yylineno); 
                                        ok_clol=1;}
                                    }
                                else 
                                    left_type_is((yyvsp[-3].string));
                                    
                                char* d=verify_operand((yyvsp[-3].string));

                                 if(search_if_are_the_same(d)==true)
                                    put_operand(d);
                               else 
                                    {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",(yyvsp[-3].string), yylineno);
                                    ok_clol=1;}
                                    right_type_is((yyvsp[-3].string)); 
                                    set_current_value((yyvsp[-3].string)); 
                                    }
#line 1553 "clol.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 168 "clol.y"
                    { if(see_if_variable_is_declarated((yyvsp[0].string))==false)
                          {if(semnal_functie==1&&see_if_variable_is_parameter((yyvsp[0].string))==false||semnal_functie==0)
                            { printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",(yyvsp[0].string), yylineno);
                             ok_clol=1;}
                            }
                    }
#line 1564 "clol.tab.c"
    break;

  case 16: /* val_assign: ID $@5 ASSIGN value  */
#line 175 "clol.y"
                        {
                            update_value((yyvsp[-3].string));
                             if(see_if_variable_is_declarated((yyvsp[-3].string))==true)
                             {left_type_is((yyvsp[-3].string));
                             if(right_type_equal_left_type()==false)
                              {printf("Variabila din stanga a expresiei de  la linia %d nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                              ok_clol=1;}
                              else
                                update_value((yyvsp[-3].string));
                        }}
#line 1579 "clol.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 185 "clol.y"
                           {semnal1=1;}
#line 1585 "clol.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 185 "clol.y"
                                               {delete_operand();}
#line 1591 "clol.tab.c"
    break;

  case 19: /* val_assign: class_call $@6 ASSIGN $@7 value  */
#line 185 "clol.y"
                                                                         {if(right_type_equal_left_type()==false)
                                             {printf("Variabila din stanga a expresiei de  la linia %d\n nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                             ok_clol=1;}
                                              else
                                                update_value(what_id_1());
                                                  semnal1=0;
                                                  }
#line 1603 "clol.tab.c"
    break;

  case 20: /* val_assign: array_call ASSIGN value  */
#line 192 "clol.y"
                                          {if(right_type_equal_left_type()==false)
                                            { printf("Variabila din stanga a expresiei de  la linia %d\n nu are aceelasi tip cu expresia din dreapta\n",yylineno);
                                            ok_clol=1;}
                                            else
                                               update_value(what_id_1());
                                            }
#line 1614 "clol.tab.c"
    break;

  case 21: /* operand: arthm_expr  */
#line 200 "clol.y"
                            {(yyval.AST) = (yyvsp[0].AST);}
#line 1620 "clol.tab.c"
    break;

  case 22: /* operand: INT  */
#line 201 "clol.y"
                     {char a[10]="int";
                     if(search_if_are_the_same(a)==true) 
                         put_operand(a);
                     else 
                          {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",(yyvsp[0].string), yylineno);
                          ok_clol=1;}
                     (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));
                          }
#line 1633 "clol.tab.c"
    break;

  case 23: /* operand: FLOAT  */
#line 209 "clol.y"
                       {char b[10]="float";
                         if(search_if_are_the_same(b)==true) 
                            put_operand(b);
                         else
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",(yyvsp[0].string), yylineno);
                             ok_clol=1;}
                         (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));
                             }
#line 1646 "clol.tab.c"
    break;

  case 24: /* operand: ID  */
#line 217 "clol.y"
                    {if(see_if_variable_is_declarated((yyvsp[0].string))==false)
                      {if(semnal_functie==1&&see_if_variable_is_parameter((yyvsp[0].string))==false||semnal_functie==0)
                        {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",(yyvsp[0].string), yylineno);
                        ok_clol=1;}}
                    else 
                       { char* c=verify_operand((yyvsp[0].string));
                         if(search_if_are_the_same(c)==true)
                            put_operand(c); 
                         else 
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",(yyvsp[0].string), yylineno);
                             ok_clol=1;}}
                    (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));
                             }
#line 1664 "clol.tab.c"
    break;

  case 25: /* operand: class_call  */
#line 230 "clol.y"
                            {(yyval.AST) = Init(nullptr, nullptr, (char*)"null");}
#line 1670 "clol.tab.c"
    break;

  case 26: /* operand: fn_call  */
#line 231 "clol.y"
                         {char* g=put_operand_from_arthm_vector();
                         if(search_if_are_the_same(g)==true)
                            put_operand(g); 
                         else 
                             {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",put_operand_name_from_arthm_vector(), yylineno);
                             ok_clol=1;}
                         (yyval.AST) = Init(nullptr, nullptr, (char*)"null");
                             }
#line 1683 "clol.tab.c"
    break;

  case 27: /* operand: array_call  */
#line 239 "clol.y"
                            {(yyval.AST) = Init(nullptr, nullptr, (char*)"null");}
#line 1689 "clol.tab.c"
    break;

  case 28: /* arthm_expr: operand OP operand  */
#line 244 "clol.y"
                                      {(yyval.AST) = Init((yyvsp[-2].AST), (yyvsp[0].AST), (yyvsp[-1].string));}
#line 1695 "clol.tab.c"
    break;

  case 29: /* arthm_expr: '(' operand OP operand ')'  */
#line 245 "clol.y"
                                            {(yyval.AST) = Init((yyvsp[-3].AST), (yyvsp[-1].AST), (yyvsp[-2].string));}
#line 1701 "clol.tab.c"
    break;

  case 30: /* arthm_expr: operand PRIO_OP operand  */
#line 246 "clol.y"
                                           {(yyval.AST) = Init((yyvsp[-2].AST), (yyvsp[0].AST), (yyvsp[-1].string));}
#line 1707 "clol.tab.c"
    break;

  case 31: /* arthm_expr: '(' operand PRIO_OP operand ')'  */
#line 247 "clol.y"
                                                  {(yyval.AST) = Init((yyvsp[-3].AST), (yyvsp[-1].AST), (yyvsp[-2].string));}
#line 1713 "clol.tab.c"
    break;

  case 32: /* bool_operand: value BOOL_OP value  */
#line 250 "clol.y"
                                     {(yyval.AST) = Init((yyvsp[-2].AST), (yyvsp[0].AST), (yyvsp[-1].string));}
#line 1719 "clol.tab.c"
    break;

  case 33: /* bool_operand: '(' value BOOL_OP value ')'  */
#line 251 "clol.y"
                                             {(yyval.AST) = Init((yyvsp[-3].AST), (yyvsp[-1].AST), (yyvsp[-2].string));}
#line 1725 "clol.tab.c"
    break;

  case 34: /* bool_operand: NOT value  */
#line 252 "clol.y"
                           {(yyval.AST) = Init((yyvsp[0].AST), nullptr, (yyvsp[-1].string));}
#line 1731 "clol.tab.c"
    break;

  case 35: /* bool_operand: value  */
#line 253 "clol.y"
                       {(yyval.AST) = (yyvsp[0].AST);}
#line 1737 "clol.tab.c"
    break;

  case 36: /* bool_operand: '(' NOT value ')'  */
#line 254 "clol.y"
                                   {(yyval.AST) = Init((yyvsp[-1].AST), nullptr, (yyvsp[-2].string));}
#line 1743 "clol.tab.c"
    break;

  case 37: /* bool_expr: bool_operand  */
#line 257 "clol.y"
                              {(yyval.AST) = (yyvsp[0].AST);}
#line 1749 "clol.tab.c"
    break;

  case 38: /* bool_expr: bool_expr LOGIC_GATE bool_expr  */
#line 258 "clol.y"
                                                {(yyval.AST) = Init((yyvsp[-2].AST), (yyvsp[0].AST), (yyvsp[-1].string));}
#line 1755 "clol.tab.c"
    break;

  case 39: /* bool_expr: '(' bool_expr LOGIC_GATE bool_expr ')'  */
#line 259 "clol.y"
                                                        {(yyval.AST) = Init((yyvsp[-3].AST), (yyvsp[-1].AST), (yyvsp[-2].string));}
#line 1761 "clol.tab.c"
    break;

  case 40: /* value: INT  */
#line 262 "clol.y"
                     {    if(semnal_array_params==1)
                            {
                               params_for_arrays((yyvsp[0].string));  
                               tip_for_arrays ((char *)"int");
                            }
                        if(semnal_apel_functie==0)
                         set_current_value((yyvsp[0].string));
                        else
                          set_current_value((char*)"return_unknown");
                        right_type_is((char*)"int");
                        if(return_ok_params_call()==1)
                            put_parametrii((char *)"int"); 
                            
                        (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));    
                            }
#line 1781 "clol.tab.c"
    break;

  case 41: /* value: FLOAT  */
#line 277 "clol.y"
                       { 
                          if(semnal_array_params==1)
                            {
                               params_for_arrays((yyvsp[0].string));
                               tip_for_arrays ((char *)"float");
    
                            }
                         if(semnal_apel_functie==0)
                         set_current_value((yyvsp[0].string));
                         else
                          set_current_value((char*)"return_unknown");
                         right_type_is((char*)"float");

                         if(return_ok_params_call()==1) 
                             put_parametrii((char *)"float"); 
                             
                          (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));
                             }
#line 1804 "clol.tab.c"
    break;

  case 42: /* value: CHAR  */
#line 295 "clol.y"
                      { if(semnal_array_params==1)
                            {
                               params_for_arrays((yyvsp[0].string));
                               tip_for_arrays ((char *)"char");
    
                            }
                         if(semnal_apel_functie==0)
                         set_current_value((yyvsp[0].string));
                         else
                          set_current_value((char*)"return_unknown");
                        right_type_is((char*)"char");
                         if(return_ok_params_call()==1) 
                             put_parametrii((char *)"char"); 
                             
                          (yyval.AST) = Init(nullptr, nullptr, (char*)"null");
                             }
#line 1825 "clol.tab.c"
    break;

  case 43: /* value: STRING  */
#line 311 "clol.y"
                        { if(semnal_array_params==1)
                            {
                               params_for_arrays((yyvsp[0].string)); 
                               tip_for_arrays ((char *)"string");
   
                            }
                         if(semnal_apel_functie==0)
                         set_current_value((yyvsp[0].string));
                         else
                          set_current_value((char*)"return_unknown");
                          right_type_is((char*)"string");
                           if(return_ok_params_call()==1) 
                             put_parametrii((char *)"string"); 
                             
                             (yyval.AST) = Init(nullptr, nullptr, (char*)"null");
                             }
#line 1846 "clol.tab.c"
    break;

  case 44: /* value: BOOL  */
#line 327 "clol.y"
                      {  if(semnal_array_params==1)
                            {
                               params_for_arrays((yyvsp[0].string)); 
                               tip_for_arrays ((char *)"bool");


                            }
                            if(semnal_apel_functie==0)
                                set_current_value((yyvsp[0].string)); 
                            else
                            set_current_value((char*)"return_unknown");
                             right_type_is((char*)"bool");
                             if(return_ok_params_call()==1)  
                             put_parametrii((char *)"bool");
                             
                            (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string)); 
                             }
#line 1868 "clol.tab.c"
    break;

  case 45: /* value: ID  */
#line 344 "clol.y"
                    {if(see_if_variable_is_declarated((yyvsp[0].string))==false)
                      {if(semnal_functie==1&&see_if_variable_is_parameter((yyvsp[0].string))==false||semnal_functie==0)
                       {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",(yyvsp[0].string), yylineno);
                       ok_clol=1;}}
                       right_type_is_id((yyvsp[0].string));
                       
                       if(return_ok_params_call()==1) 
                          put_parametrii_1((yyvsp[0].string)); 
                       
                       (yyval.AST) = Init(nullptr, nullptr, (yyvsp[0].string));
                       }
#line 1884 "clol.tab.c"
    break;

  case 46: /* value: arthm_expr  */
#line 355 "clol.y"
                             {
                             if(search_if_are_ALL_the_same()==true) 
                                right_type_arthm(); 
                              set_current_value((char *)"undefined");
                             if(return_ok_params_call()==1)
                                 put_parametrii(right_type_arthm_1()) ;
                             delete_operand();
                             if(sunt_in_bool_expr){
                                (yyval.AST) = (yyvsp[0].AST);
                             }
                             else if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator((yyvsp[0].AST));
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                             }
                             }
#line 1906 "clol.tab.c"
    break;

  case 47: /* value: fn_call  */
#line 372 "clol.y"
                           {(yyval.AST) = Init(nullptr, nullptr, (char*)"null");}
#line 1912 "clol.tab.c"
    break;

  case 48: /* value: class_call  */
#line 373 "clol.y"
                            {delete_operand(); (yyval.AST) = Init(nullptr, nullptr, (char*)"null");}
#line 1918 "clol.tab.c"
    break;

  case 49: /* value: array_call  */
#line 374 "clol.y"
                             {(yyval.AST) = Init(nullptr, nullptr, (char*)"null");}
#line 1924 "clol.tab.c"
    break;

  case 57: /* $@8: %empty  */
#line 399 "clol.y"
                                                               {delete_operand();}
#line 1930 "clol.tab.c"
    break;

  case 59: /* $@9: %empty  */
#line 400 "clol.y"
                                                                 {delete_operand();}
#line 1936 "clol.tab.c"
    break;

  case 64: /* $@10: %empty  */
#line 408 "clol.y"
                    {if(semnal==1) {put_parametrii_1(verify_return_type((yyvsp[0].string))); semnal=0;}}
#line 1942 "clol.tab.c"
    break;

  case 65: /* $@11: %empty  */
#line 408 "clol.y"
                                                                                              {ok_params_call(1); semnal=1; semnal_apel_functie=1;}
#line 1948 "clol.tab.c"
    break;

  case 66: /* $@12: %empty  */
#line 408 "clol.y"
                                                                                                                                                                  { semnal_apel_functie=0; ok_params_call(0); semnal=0;}
#line 1954 "clol.tab.c"
    break;

  case 67: /* fn_call: ID $@10 '(' $@11 params_call $@12 ')'  */
#line 409 "clol.y"
                                             {if(see_if_function_is_declarated((yyvsp[-6].string))==false) 
                                                 { printf("Apelul %s de functie  la linia %d foloseste o functie nedefinita\n",(yyvsp[-6].string), yylineno); 
                                                 ok_clol=1;}
                                              else 
                                                  {char* f=verify_return_type((yyvsp[-6].string));
                                                   right_type_function((yyvsp[-6].string));
                                                   
                                                
                                               if(type_parameters_equal_type_call_parameters_1((yyvsp[-6].string))==false)
                                                    {printf("Apelul de functie %s de la linia %d nu are suficienti parametrii\n",(yyvsp[-6].string), yylineno); 
                                                    ok_clol=1;}
                                                else  
                                                    {
                                                         if(type_parameters_equal_type_call_parameters((yyvsp[-6].string))==false)
                                                           {printf("Apelul de functie %s de la linia %d contine parametrii ce nu corespund tipului dat la declarare\n",(yyvsp[-6].string), yylineno); 
                                                           ok_clol=1;}

                                                    }}
                                              delete_parametrii();
                                              add_fn_to_arthm_vector((yyvsp[-6].string));
                                              }
#line 1980 "clol.tab.c"
    break;

  case 68: /* $@13: %empty  */
#line 431 "clol.y"
                                 {if(semnal==1) {put_parametrii_1(verify_return_type((yyvsp[0].string))); semnal=0;}}
#line 1986 "clol.tab.c"
    break;

  case 69: /* $@14: %empty  */
#line 431 "clol.y"
                                                                                                           {ok_params_call(1); semnal=1;}
#line 1992 "clol.tab.c"
    break;

  case 70: /* $@15: %empty  */
#line 431 "clol.y"
                                                                                                                                                        { ok_params_call(0); semnal=0;}
#line 1998 "clol.tab.c"
    break;

  case 71: /* fn_call: ID CLASS_OP ID $@13 '(' $@14 params_call $@15 ')'  */
#line 432 "clol.y"
                                             {if(see_if_function_is_declarated((yyvsp[-6].string))==false) 
                                                  {printf("Apelul %s de functie  la linia %d foloseste o functie nedefinita\n",(yyvsp[-6].string), yylineno); 
                                                  ok_clol=1;}
                                              else 
                                                  {char* f=verify_return_type((yyvsp[-6].string));
                                                   right_type_function((yyvsp[-6].string));
                                                   
                                                
                                               if(type_parameters_equal_type_call_parameters_1((yyvsp[-6].string))==false)
                                                    {printf("Apelul de functie %s de la linia %d nu are suficienti parametrii\n",(yyvsp[-6].string), yylineno); 
                                                    ok_clol=1;}
                                                else  
                                                    {
                                                         if(type_parameters_equal_type_call_parameters((yyvsp[-6].string))==false)
                                                           {printf("Apelul de functie %s de la linia %d contine parametrii ce nu corespund tipului dat la declarare\n",(yyvsp[-6].string), yylineno); 
                                                           ok_clol=1;}

                                                    }}
                                              delete_parametrii();
                                              add_fn_to_arthm_vector((yyvsp[-6].string));
                                              }
#line 2024 "clol.tab.c"
    break;

  case 75: /* class_call: ID CLASS_OP ID  */
#line 460 "clol.y"
                                 {    what_id((yyvsp[0].string));
                                      if(semnal_array_params==1)
                                       {
                                          params_for_arrays(return_value((yyvsp[0].string)));
                                          tip_for_arrays (return_type((yyvsp[0].string)));
    
                                       }
                                      if(verify_if_variable_exist_in_class((yyvsp[-2].string),(yyvsp[0].string))==false||verify_if_function_exist_in_class((yyvsp[-2].string),(yyvsp[0].string))==false)
                                        {  if(verify_if_variable_exist_in_class((yyvsp[-2].string),(yyvsp[0].string))==false)
                                              {printf("Variabila %s folosita  la linia %d nu appartine clasei %s\n",(yyvsp[0].string), yylineno,(yyvsp[-2].string));
                                              ok_clol=1;}
                                           if(verify_if_function_exist_in_class((yyvsp[-2].string),(yyvsp[0].string))==false)
                                             {printf("Functia %s folosita  la linia %d nu appartine clasei %s\n",(yyvsp[0].string),yylineno,(yyvsp[-2].string)); 
                                             ok_clol=1;}
                                        }
                                    else
                                     {if(semnal==1)
                                       {put_parametrii_1(verify_operand((yyvsp[0].string))); 
                                       semnal=0;}
                                    if(see_if_variable_is_declarated((yyvsp[0].string))==false)
                                     {  
                                          if(semnal_functie==1&&see_if_variable_is_parameter((yyvsp[0].string))==false||semnal_functie==0)
                                         {printf("Variabila %s folosita  la linia %d nu a fost declarata anterior\n",(yyvsp[0].string), yylineno); 
                                         ok_clol=1;}
                                     }
                                    else 
                                   { char* e=verify_operand((yyvsp[0].string)); 
                                     if(semnal1==0)
                                       left_type_is((yyvsp[0].string));
                                     else 
                                       right_type_is_id((yyvsp[0].string));
                                     
                                     if(search_if_are_the_same(e)==true)
                                         put_operand(e); 
                                     else 
                                         {printf("Operandul %s din expresia artimetica  de la linia %d nu are acelasi tip ca celelalte variabile\n",(yyvsp[0].string), yylineno);
                                         ok_clol=1;}
                                       
                                      }
                                     }
                                   
                                 }
#line 2071 "clol.tab.c"
    break;

  case 87: /* begin_eval: EVAL '('  */
#line 519 "clol.y"
                          {sunt_in_bool_expr=1;}
#line 2077 "clol.tab.c"
    break;

  case 88: /* mid_eval: bool_expr  */
#line 523 "clol.y"
                            {if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator((yyvsp[0].AST));
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                                sunt_in_bool_expr=0;
                             }}
#line 2089 "clol.tab.c"
    break;

  case 90: /* begin_typeof: TYPEOF '('  */
#line 535 "clol.y"
                            {sunt_in_bool_expr=1;}
#line 2095 "clol.tab.c"
    break;

  case 91: /* mid_typeof: bool_expr  */
#line 539 "clol.y"
                            {if(sunt_in_main && !ok_clol){
                                //afisare($1);
                                std::string response = procesator((yyvsp[0].AST));
                                set_current_value((char*)response.c_str());
                                printf("Value of expression at line %d is %s\n", yylineno, response.c_str());
                                printf("TypeOf expression at line %d is %s\n", yylineno, TypeOf(response));
                                sunt_in_bool_expr=0;
                             }}
#line 2108 "clol.tab.c"
    break;

  case 96: /* $@16: %empty  */
#line 558 "clol.y"
                         {where_am_i((yyvsp[0].string));}
#line 2114 "clol.tab.c"
    break;

  case 97: /* $@17: %empty  */
#line 558 "clol.y"
                                                          {add_information_function((yyvsp[-4].string),(yyvsp[-5].string)); semnal_functie=1; name_for_actual_function((yyvsp[-4].string));}
#line 2120 "clol.tab.c"
    break;

  case 99: /* $@18: %empty  */
#line 561 "clol.y"
                            {where_am_i_stop();}
#line 2126 "clol.tab.c"
    break;

  case 100: /* end_fn: code_block $@18 return_stmt '}'  */
#line 561 "clol.y"
                                                                 {semnal_functie=0;}
#line 2132 "clol.tab.c"
    break;

  case 103: /* params: %empty  */
#line 566 "clol.y"
                             {parameters();}
#line 2138 "clol.tab.c"
    break;

  case 104: /* param: TYPE ID  */
#line 569 "clol.y"
                         {add_parameters((yyvsp[0].string),(yyvsp[-1].string));}
#line 2144 "clol.tab.c"
    break;

  case 105: /* clol: cls gb_vars gb_fns main  */
#line 572 "clol.y"
                                         {
                          if(ok_clol==0){
                            print1();
                            print();
                            printf("The programme is correct!\n");
                          }
                          else{
                            clear_table();
                          }
                          }
#line 2159 "clol.tab.c"
    break;

  case 110: /* cl_decl: begin_cl end_cl  */
#line 592 "clol.y"
                                 {where_am_i_stop(); class_now((char*)"(null)");}
#line 2165 "clol.tab.c"
    break;

  case 111: /* $@19: %empty  */
#line 595 "clol.y"
                          { set_actual_name_class((yyvsp[0].string));
                            where_am_i((yyvsp[0].string));
                            class_now((yyvsp[0].string));
                            if(search_variables((yyvsp[0].string))==true) 
                               add_information_variable((yyvsp[0].string),0,0); 
                            else 
                               {printf("Clasa  %s a fost deja declarata la linia %d\n",(yyvsp[0].string), yylineno);  
                               ok_clol=1;}
                            }
#line 2179 "clol.tab.c"
    break;

  case 116: /* end_cl: '}' ID  */
#line 609 "clol.y"
                        {reset_name_class((yyvsp[0].string));}
#line 2185 "clol.tab.c"
    break;

  case 127: /* $@20: %empty  */
#line 630 "clol.y"
                            {sunt_in_main=1;}
#line 2191 "clol.tab.c"
    break;


#line 2195 "clol.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 634 "clol.y"

void yyerror(const char* error){
     printf("error: %s at line:%d\n", error, yylineno);
}
int main(int argc, char** argv)
{
     yyin=fopen(argv[1],"r");
     yyparse();
} 
