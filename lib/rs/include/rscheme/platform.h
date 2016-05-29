/* config.h.  Generated from config.h.in by configure.  */
#ifndef _H_RSCHEME_PLATFORM
#define _H_RSCHEME_PLATFORM


/* The following definitions are re-written by configure. */

/* rewritten to be PLATFORM_FOO where FOO is the platform name,
   like AIX, WINNT, LINUX, etc.
*/

#define PLATFORM_IOS 1

/* possible architectures (CPU types) we know about... */

#define PLATFORM_ARCH_PPC     0
#define PLATFORM_ARCH_I386    0
#define PLATFORM_ARCH_MIPS    0
#define PLATFORM_ARCH_SPARC   0
#define PLATFORM_ARCH_M68K    0
#define PLATFORM_ARCH_ALPHA   0
#define PLATFORM_ARCH_S390    0
#define PLATFORM_ARCH_X86_64  0
#define PLATFORM_ARCH_ARM 1
#define PLATFORM_ARCH_UNKNOWN 0
 
/* The GNU C compiler lets you compute "goto" targets. Parts of the
   RScheme byte-code interpreter can take advantage of this feature.
   The resulting binary is slightly larger, and slightly faster. 
   Set this to 0 if you can't use computed gotos, or want a slightly 
   smaller, and slightly slower executable. */
#define USE_COMPUTED_GOTO 1
 
#define SPRINTF_RETURNS_INT 1

/* 
 *  Headers... 
 */
#define HAVE_DB3_DB_185_H 0
#define HAVE_DB_DB_H 0
#define HAVE_DB_H 1
#define HAVE_DIRENT_H 1
#define HAVE_ALLOCA_H 1
#define HAVE_SYS_DIR_H 0
#define HAVE_SYS_NDIR_H 0
#define HAVE_UNISTD_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_EXECINFO_H 1
#define HAVE_VM_VM_PARAM_H 0
#define HAVE_UVM_UVM_PARAM_H 0


/* 
 *  Typedefs and structures... 
 */

#define HAVE_LONG_LONG 1
#define HAVE_SOCKLEN_T 1
#define HAVE_STRUCT_TIMEVAL 1

/* 
 *  Functions... 
 */

#define HAVE_CHDIR 1
#define HAVE_ERAND48 1
#define HAVE_FGETLN 1
#define HAVE_FLOCK 1
#define HAVE_GETCWD 1
#define HAVE_GETENV 1
#define HAVE_GETRUSAGE 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GETWD 1
#define HAVE_LIBDL 1
#define HAVE_LOCKF 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
#define HAVE_MKDIR 1
#define HAVE_NDIR_H 0
#define HAVE_NTOHL 1
#define HAVE_NTOHS 1
#define HAVE_RANDOM 1
#define HAVE_SETITIMER 1
#define HAVE_STAT 1
#define HAVE_STRERROR 1
#define HAVE_SYMLINK 1
#define HAVE_USLEEP 1
#define HAVE_WAIT 1
#define HAVE_WAITPID 1
#define HAVE_ALLOCA 1
#define HAVE_ROUND 1
#define HAVE_NEAREST 0
#define HAVE_BACKTRACE 1

/*
 *   Other variables...
 */

#define CPP_SUPPORTS_ISYSTEM 0

#define NTOH_PROTO_OK 0
#define USE_NETINET_FOR_NTOH_PROTO 1
#define USE_POSIX_SIGNALS 1


#define TRACE_SIGNAL_LATENCY 0
#define UTF_PROCESS_CODE 0
#define PROFILING_HOOKS 0
#define ACCUM_GF_CACHE_HISTOGRAM 0
#define ACCUM_BYTECODE_CORRELATION 0
#define USE_PPC_CLOCK        0
#define USE_i586_CLOCK       0          /* determined at config time */
#define USE_TIMEOFDAY_CLOCK  1

/* on w/--enable-read-barrier 
 * (STILL UNDER DEVELOPMENT!)
 */
#define INCLUDE_READ_BARRIER 0
/* on w/--enable-full-numeric-tower
 * (requires the GNU MP library)
 * (STILL UNDER DEVELOPMENT!)
 */
#define FULL_NUMERIC_TOWER 0

#define INCLUDE_PSTORE_UNMAPPER 0

/*  configuration flags to tell iolib/stdiox.c
 *  how to implement fcanget()
 */

#define FCANGET_DO_SELECT 1
#define FCANGET_USE_IO_READ_PTR    0   /* strm->_io_read_ptr etc ; GNU libc */
#define FCANGET_USE_CNT            0   /* strm->_cnt ; AIX and others */
#define FCANGET_USE_R 1

/* Turning on DEBUG_BCI enables the use of the `-bcitrace' flag.
   Having it enabled is a big slowdown, but is often necessary when
   trying to diagnose failures in the startup and initialization
   code.  Turned on by configure when `--enable-debug' is on.
*/

#define DEBUG_BCI 0

/* #undef WORDS_BIGENDIAN */

/* #if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7) */
#if 0
typedef 	 int  INT_32 __attribute__((__mode__(__SI__)));
typedef unsigned int UINT_32 __attribute__((__mode__(__SI__)));
typedef 	 int  INT_16 __attribute__((__mode__(__HI__)));
typedef unsigned int UINT_16 __attribute__((__mode__(__HI__)));
typedef 	 int  INT_8  __attribute__((__mode__(__QI__)));
typedef unsigned int UINT_8  __attribute__((__mode__(__QI__)));
#else
typedef unsigned long UINT_32;
typedef unsigned short UINT_16;
typedef unsigned char UINT_8;

typedef long INT_32;
typedef short INT_16;
typedef signed char INT_8;
#endif

/* kludgey, esp. considering that UINT_32 is really 64-bits on the alpha */

typedef unsigned int XUINT_32;  /* 32 bits even on alpha */

#if PLATFORM_ARCH_S390
typedef INT_64   DItype;
#endif

/* these get configured: */

#define SIZEOF_UNSIGNED_SHORT 2
#define SIZEOF_UNSIGNED 4
#define SIZEOF_UNSIGNED_LONG 8
#define SIZEOF_UNSIGNED_LONG_LONG  (8)

#define WORD_IS_32_BITS  (SIZEOF_UNSIGNED_LONG == 4)
#define WORD_SIZE_BITS   (SIZEOF_UNSIGNED_LONG*8)

typedef double IEEE_64;
typedef float IEEE_32;

#ifdef WORDS_BIGENDIAN
#define PLATFORM_IS_BIG_ENDIAN

#define HOST_TO_BIG_ENDIAN_16(x)      (x)
#define HOST_TO_BIG_ENDIAN_32(x)      (x)
#define HOST_TO_BIG_ENDIAN_IEEE_64(x) (x)

#define BIG_ENDIAN_TO_HOST_16(x)      (x)
#define BIG_ENDIAN_TO_HOST_32(x)      (x)
#define BIG_ENDIAN_TO_HOST_IEEE_64(x) (x)

#else
#define PLATFORM_IS_LITTLE_ENDIAN

extern IEEE_32 ntohf( IEEE_32 flt );
extern IEEE_32 htonf( IEEE_32 flt );

extern IEEE_64 ntohd( IEEE_64 dbl );
extern IEEE_64 htond( IEEE_64 dbl );

#if USE_NETINET_FOR_NTOH_PROTO
# include <netinet/in.h>
#else
# if NTOH_PROTO_OK
extern unsigned long int ntohl( unsigned long int );
extern unsigned short int ntohs( unsigned short int );
# endif
#endif

#define HOST_TO_BIG_ENDIAN_16(x)      ntohs(x)
#define HOST_TO_BIG_ENDIAN_32(x)      ntohl(x)
#define HOST_TO_BIG_ENDIAN_IEEE_32(x) htonf(x)
#define HOST_TO_BIG_ENDIAN_IEEE_64(x) htond(x)

#define BIG_ENDIAN_TO_HOST_16(x)      ntohs(x)
#define BIG_ENDIAN_TO_HOST_32(x)      ntohl(x)
#define BIG_ENDIAN_TO_HOST_IEEE_32(x) ntohf(x)
#define BIG_ENDIAN_TO_HOST_IEEE_64(x) ntohd(x)

#endif

#endif /* _RSCHEME_PLATFORM */
