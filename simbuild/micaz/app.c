#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 46 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 66
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 129
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 144
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 263 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 157
__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 127
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 124
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 129
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 153
#line 138
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 155
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 213
#line 173
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 211
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 215
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 230
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 236
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 466
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 483
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x7f3800cb2020, const void *arg_0x7f3800cb2320);
#line 780
__extension__ 
#line 797
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 153
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 181
extern double fabs(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;


extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 250
extern double erfc(double arg_0x7f3800c2a5e0) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
# 189 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 308
#line 301
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 326
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 180
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 245
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 338
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 242
extern int fflush(FILE *__stream);
#line 306
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 356
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 386
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 858
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/opt/tinyos-main/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/opt/tinyos-main/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);

bool sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel);
uint8_t sim_mote_get_radio_channel(int mote);
# 65 "/opt/tinyos-main/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/opt/tinyos-main/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/opt/tinyos-main/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x7f38009cd3a0), 
int (*key_eq_fn)(void *arg_0x7f38009cdb70, void *arg_0x7f38009cde30));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 309U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/opt/tinyos-main/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/opt/tinyos-main/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);










static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 116
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 132
static inline void expand_heap(heap_t *heap);
#line 146
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 160
static void swap(node_t *first, node_t *second);
#line 173
static void down_heap(heap_t *heap, int findex);
#line 199
static void up_heap(heap_t *heap, int findex);
# 44 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/opt/tinyos-main/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 84
#line 73
typedef struct sim_noise_node_t {

  char *key[16];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal[16];
  uint32_t noiseGenTime[16];
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/opt/tinyos-main/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/opt/tinyos-main/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/opt/tinyos-main/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/opt/tinyos-main/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/opt/tinyos-main/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 239 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/opt/tinyos-main/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x7f38007bac00, int arg_0x7f38007bae80);
static double RandomUniform(void );
# 51 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 88
void sim_noise_create_model(uint16_t node_id)   ;
#line 107
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 123
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 206
void sim_noise_dist(uint16_t node_id)   ;
#line 259
void arrangeKey(uint16_t node_id, uint8_t channel)   ;










void makePmfDistr(uint16_t node_id)   ;
#line 298
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id, uint8_t channel)   ;
#line 380
char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)   ;
#line 436
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/opt/tinyos-main/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);

void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn);
uint8_t sim_packet_dsn(sim_packet_t *msg);
# 6 "/opt/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 18 "/opt/tinyos-main/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_uint8_t length;
  nx_uint16_t fcf;
  nx_uint8_t dsn;
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_am_group_t group;


  nxle_uint8_t network;

  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 20
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 36
#line 24
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_uint8_t crc;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) 




tossim_metadata_t;
# 83 "/opt/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/opt/tinyos-main/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/opt/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/opt/tinyos-main/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;




void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)   ;




uint8_t sim_packet_dsn(sim_packet_t *msg)   ;
# 51 "/opt/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 41 "/opt/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4280 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4281 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4282 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4283 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 9 "includes/protocol.h"
enum __nesc_unnamed4284 {
  PROTOCOL_PING = 0, 
  PROTOCOL_PINGREPLY = 1, 
  PROTOCOL_LINKSTATE = 2, 
  PROTOCOL_NAME = 3, 
  PROTOCOL_TCP = 4, 
  PROTOCOL_DV = 5, 
  PROTOCOL_CMD = 99
};
# 10 "includes/CommandMsg.h"
enum __nesc_unnamed4285 {
  CMD_PACKET_HEADER_LENGTH = 3, 
  CMD_PACKET_MAX_PAYLOAD_SIZE = 28 - CMD_PACKET_HEADER_LENGTH
};






#line 16
typedef nx_struct CommandMsg {
  nx_uint16_t dest;
  nx_uint8_t id;
  nx_uint8_t payload[CMD_PACKET_MAX_PAYLOAD_SIZE];
} __attribute__((packed)) CommandMsg;

enum __nesc_unnamed4286 {
  AM_COMMANDMSG = 99
};
# 6 "includes/channels.h"
char COMMAND_CHANNEL[8] = "command";
char GENERAL_CHANNEL[8] = "general";


char NEIGHBOR_CHANNEL[9] = "neighbor";
char FLOODING_CHANNEL[9] = "flooding";


char ROUTING_CHANNEL[8] = "routing";


char TRANSPORT_CHANNEL[10] = "transport";


char APPLICATION_CHANNEL[12] = "application";


char HASHMAP_CHANNEL[8] = "hashmap";
# 12 "includes/packet.h"
enum __nesc_unnamed4287 {
  PACKET_HEADER_LENGTH = 8, 
  PACKET_MAX_PAYLOAD_SIZE = 28 - PACKET_HEADER_LENGTH, 
  MAX_TTL = 15
};









#line 19
typedef nx_struct pack {
  nx_uint16_t dest;
  nx_uint16_t src;
  nx_uint16_t seq;
  nx_uint8_t TTL;
  nx_uint8_t protocol;
  nx_uint8_t payload[PACKET_MAX_PAYLOAD_SIZE];
} __attribute__((packed)) pack;
#line 39
enum __nesc_unnamed4288 {
  AM_PACK = 6
};
# 25 "/opt/tinyos-main/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4289 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4290 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/opt/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4291 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/opt/tinyos-main/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4292 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4293 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4294 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4295 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4296 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4297 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4298 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4299 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4300 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4301 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4302 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/opt/tinyos-main/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4303 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/opt/tinyos-main/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 4 "/opt/tinyos-main/tos/chips/cc2420/sim/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 58
#line 52
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 78
#line 60
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 83
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 108
#line 94
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_int8_t crc;
  nx_int8_t ack;
  nx_int8_t timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 




cc2420_metadata_t;





#line 111
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 144
enum __nesc_unnamed4304 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4305 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 7 "/opt/tinyos-main/tos/lib/tossim/sim_lqi.h"
#line 4
typedef struct lqi_dist {
  uint8_t lqi;
  double cdf;
} lqi_dist_t;





#line 9
typedef struct snr_lqi {
  double snr;
  uint8_t numLqi;
  lqi_dist_t *lqi;
} snr_lqi_t;

lqi_dist_t snr24[8] = { { 108, 49.5481927711 }, { 102, 49.9397590361 }, { 103, 50.9036144578 }, { 101, 51.0542168675 }, { 106, 63.7951807229 }, { 107, 92.3192771084 }, { 104, 94.2168674699 }, { 105, 100.0 } };
lqi_dist_t snr25[10] = { { 98, 0.0320204931156 }, { 108, 48.9593339737 }, { 102, 49.1514569324 }, { 103, 49.8879282741 }, { 100, 49.9199487672 }, { 101, 49.9839897534 }, { 106, 64.3932116555 }, { 107, 93.5638808838 }, { 104, 95.58117195 }, { 105, 100.0 } };
lqi_dist_t snr26[8] = { { 108, 49.9569583931 }, { 102, 50.3586800574 }, { 103, 51.1047345768 }, { 101, 51.1334289813 }, { 106, 63.6441893831 }, { 107, 93.68723099 }, { 104, 95.4662840746 }, { 105, 100.0 } };
lqi_dist_t snr27[9] = { { 108, 51.0854243022 }, { 102, 51.2545813363 }, { 103, 51.7056667606 }, { 100, 51.7338595997 }, { 101, 51.7620524387 }, { 106, 64.223287285 }, { 107, 94.051310967 }, { 104, 96.1093882154 }, { 105, 100.0 } };
lqi_dist_t snr20[10] = { { 99, 0.0332667997339 }, { 108, 37.9906852961 }, { 102, 38.5562208916 }, { 103, 40.0864936793 }, { 100, 40.119760479 }, { 101, 40.252827678 }, { 106, 56.3872255489 }, { 107, 89.5542248836 }, { 104, 92.7811044578 }, { 105, 100.0 } };
lqi_dist_t snr21[9] = { { 108, 40.3826787513 }, { 102, 40.953340047 }, { 103, 41.9268210809 }, { 100, 42.061094327 }, { 101, 42.2289358845 }, { 106, 58.4424303458 }, { 107, 89.7616649883 }, { 104, 92.2457200403 }, { 105, 100.0 } };
lqi_dist_t snr22[9] = { { 108, 44.0018966335 }, { 102, 44.4760550024 }, { 103, 45.4243717402 }, { 100, 45.4717875771 }, { 101, 45.6377430062 }, { 106, 60.6685633001 }, { 107, 90.9198672357 }, { 104, 93.6699857752 }, { 105, 100.0 } };
lqi_dist_t snr23[9] = { { 108, 46.3674104826 }, { 102, 46.8085106383 }, { 103, 47.6647638817 }, { 100, 47.7166580176 }, { 101, 47.8204462896 }, { 106, 61.6761805916 }, { 107, 91.64504411 }, { 104, 93.8764919564 }, { 105, 100.0 } };
lqi_dist_t snr28[8] = { { 108, 51.1636636637 }, { 102, 51.4264264264 }, { 103, 51.9144144144 }, { 100, 52.027027027 }, { 106, 64.3393393393 }, { 107, 94.3318318318 }, { 104, 96.2837837838 }, { 105, 100.0 } };
lqi_dist_t snr29[8] = { { 108, 53.434225844 }, { 102, 53.7834691502 }, { 103, 54.4819557625 }, { 101, 54.5401629802 }, { 106, 65.9487776484 }, { 107, 94.3538998836 }, { 104, 95.983701979 }, { 105, 100.0 } };
lqi_dist_t snr0[25] = { { 82, 7.20720720721 }, { 63, 8.10810810811 }, { 64, 10.8108108108 }, { 66, 12.6126126126 }, { 69, 16.2162162162 }, { 68, 19.8198198198 }, { 83, 24.3243243243 }, { 80, 28.8288288288 }, { 81, 34.2342342342 }, { 86, 36.9369369369 }, { 87, 37.8378378378 }, { 84, 40.5405405405 }, { 85, 42.3423423423 }, { 77, 50.4504504505 }, { 76, 60.3603603604 }, { 75, 65.7657657658 }, { 74, 72.0720720721 }, { 73, 74.7747747748 }, { 72, 78.3783783784 }, { 71, 81.0810810811 }, { 70, 81.981981982 }, { 92, 82.8828828829 }, { 79, 90.990990991 }, { 78, 99.0990990991 }, { 52, 100.0 } };
lqi_dist_t snr3[45] = { { 62, 0.0711743772242 }, { 67, 0.391459074733 }, { 60, 0.462633451957 }, { 102, 0.569395017794 }, { 88, 5.62277580071 }, { 89, 10.3558718861 }, { 64, 10.5693950178 }, { 65, 10.7473309609 }, { 66, 10.9964412811 }, { 69, 11.5658362989 }, { 82, 17.0818505338 }, { 83, 22.8825622776 }, { 80, 27.7224199288 }, { 81, 32.4555160142 }, { 86, 37.9003558719 }, { 87, 42.9893238434 }, { 84, 47.9359430605 }, { 85, 53.4163701068 }, { 92, 56.6903914591 }, { 79, 60.7117437722 }, { 104, 60.7473309609 }, { 78, 64.9822064057 }, { 68, 65.6583629893 }, { 99, 66.4412811388 }, { 98, 67.0462633452 }, { 75, 70.0 }, { 74, 71.6370106762 }, { 73, 73.5231316726 }, { 72, 75.0177935943 }, { 71, 76.2989323843 }, { 70, 76.975088968 }, { 91, 80.462633452 }, { 90, 84.2348754448 }, { 100, 84.590747331 }, { 101, 84.6619217082 }, { 95, 86.1209964413 }, { 94, 88.3629893238 }, { 97, 89.3950177936 }, { 96, 90.8540925267 }, { 77, 94.590747331 }, { 59, 94.6263345196 }, { 76, 97.3309608541 }, { 61, 97.4021352313 }, { 93, 99.8932384342 }, { 63, 100.0 } };
lqi_dist_t snr2[42] = { { 67, 1.42984807864 }, { 60, 1.51921358356 }, { 68, 2.32350312779 }, { 88, 4.7363717605 }, { 89, 7.14924039321 }, { 64, 7.86416443253 }, { 65, 8.57908847185 }, { 66, 9.29401251117 }, { 69, 12.0643431635 }, { 82, 18.1411974978 }, { 83, 24.3967828418 }, { 80, 29.2225201072 }, { 81, 33.8695263628 }, { 93, 34.763181412 }, { 87, 38.1590705987 }, { 84, 43.4316353887 }, { 85, 48.436103664 }, { 86, 51.8319928508 }, { 97, 51.9213583557 }, { 96, 52.2788203753 }, { 77, 58.3556747096 }, { 76, 64.164432529 }, { 75, 67.7390527256 }, { 74, 72.3860589812 }, { 73, 75.6032171582 }, { 72, 78.4629133155 }, { 71, 81.8588025022 }, { 70, 83.6461126005 }, { 91, 84.8078641644 }, { 90, 86.6845397676 }, { 100, 86.7739052726 }, { 92, 88.2037533512 }, { 95, 88.5612153709 }, { 94, 88.7399463807 }, { 79, 93.3869526363 }, { 78, 98.927613941 }, { 59, 99.0169794459 }, { 98, 99.1063449508 }, { 56, 99.1957104558 }, { 61, 99.4638069705 }, { 62, 99.7319034853 }, { 63, 100.0 } };
lqi_dist_t snr5[46] = { { 67, 0.153468385513 }, { 102, 1.01289134438 }, { 88, 6.1387354205 }, { 89, 11.6942909761 }, { 64, 11.9091467158 }, { 65, 11.9398403929 }, { 66, 11.97053407 }, { 103, 12.5230202578 }, { 100, 14.4260282382 }, { 83, 18.3241252302 }, { 80, 20.9023941068 }, { 81, 23.6955187231 }, { 86, 28.2688766114 }, { 87, 32.9957028852 }, { 84, 36.4333947207 }, { 85, 40.730509515 }, { 101, 41.9582565991 }, { 63, 42.0196439533 }, { 79, 44.1375076734 }, { 106, 44.1682013505 }, { 82, 47.0841006753 }, { 104, 47.3910374463 }, { 96, 51.6574585635 }, { 68, 51.9950890117 }, { 78, 53.8060159607 }, { 99, 56.0773480663 }, { 98, 59.4536525476 }, { 75, 60.8041743401 }, { 74, 61.4487415592 }, { 73, 61.97053407 }, { 72, 62.6764886433 }, { 71, 63.2903621854 }, { 70, 63.5972989564 }, { 91, 68.9993861265 }, { 90, 74.6777163904 }, { 93, 79.8956414979 }, { 92, 85.8809085328 }, { 95, 90.0859422959 }, { 94, 94.2909760589 }, { 97, 97.6672805402 }, { 105, 97.7593615715 }, { 77, 98.9257213014 }, { 76, 99.7851442603 }, { 56, 99.8158379374 }, { 61, 99.8465316145 }, { 69, 100.0 } };
lqi_dist_t snr7[45] = { { 67, 0.0192012288786 }, { 102, 5.04992319508 }, { 88, 8.25652841782 }, { 89, 12.1927803379 }, { 64, 12.2119815668 }, { 65, 12.2311827957 }, { 66, 12.2503840246 }, { 103, 16.9162826421 }, { 100, 22.1966205837 }, { 83, 24.3855606759 }, { 80, 25.5184331797 }, { 81, 27.1505376344 }, { 86, 30.222734255 }, { 87, 33.2373271889 }, { 84, 35.4070660522 }, { 85, 37.6920122888 }, { 101, 43.1643625192 }, { 63, 43.1835637481 }, { 79, 44.2396313364 }, { 106, 44.8732718894 }, { 82, 46.1789554531 }, { 107, 46.2749615975 }, { 104, 49.5007680492 }, { 105, 51.3248847926 }, { 78, 52.380952381 }, { 99, 57.2196620584 }, { 98, 62.1543778802 }, { 75, 62.5 }, { 74, 62.7112135177 }, { 73, 62.9992319508 }, { 72, 63.2680491551 }, { 71, 63.3448540707 }, { 70, 63.4792626728 }, { 91, 67.7995391705 }, { 90, 72.1006144393 }, { 93, 76.3056835637 }, { 92, 80.2995391705 }, { 95, 84.8502304147 }, { 94, 89.1321044547 }, { 97, 93.9132104455 }, { 96, 98.732718894 }, { 77, 99.366359447 }, { 59, 99.3855606759 }, { 76, 99.9615975422 }, { 69, 100.0 } };
lqi_dist_t snr6[45] = { { 67, 0.128238009746 }, { 102, 3.35983585535 }, { 88, 6.82226211849 }, { 89, 10.0538599641 }, { 64, 10.1820979738 }, { 65, 10.3103359836 }, { 66, 10.4642215953 }, { 103, 12.8238009746 }, { 82, 15.1064375481 }, { 83, 17.5173121313 }, { 80, 19.4152346756 }, { 81, 21.9286996666 }, { 86, 24.4934598615 }, { 93, 28.5714285714 }, { 84, 30.7771223391 }, { 85, 33.7778917671 }, { 101, 37.4967940498 }, { 79, 39.2151833804 }, { 95, 44.3959989741 }, { 87, 46.8325211593 }, { 104, 47.986663247 }, { 105, 48.473967684 }, { 68, 48.6535008977 }, { 78, 50.2436522185 }, { 99, 55.5270582201 }, { 98, 60.2462169787 }, { 75, 61.2977686586 }, { 74, 62.144139523 }, { 73, 62.9905103873 }, { 72, 63.8112336497 }, { 71, 64.2472428828 }, { 70, 64.4780713003 }, { 91, 68.0430879713 }, { 90, 71.5055142344 }, { 100, 76.6093870223 }, { 92, 80.3795845088 }, { 106, 80.4821749166 }, { 94, 85.4321620928 }, { 97, 91.5106437548 }, { 96, 96.9222877661 }, { 77, 98.2816106694 }, { 76, 99.6665811747 }, { 61, 99.7178763786 }, { 62, 99.7435239805 }, { 69, 100.0 } };
lqi_dist_t snr8[34] = { { 102, 6.99633699634 }, { 88, 9.06593406593 }, { 89, 11.0073260073 }, { 103, 17.9304029304 }, { 82, 18.2783882784 }, { 83, 18.7912087912 }, { 80, 19.0476190476 }, { 81, 19.2857142857 }, { 86, 20.3663003663 }, { 87, 22.0146520147 }, { 84, 22.7106227106 }, { 85, 23.6813186813 }, { 101, 31.0805860806 }, { 79, 31.1721611722 }, { 106, 33.0769230769 }, { 107, 33.2967032967 }, { 104, 39.1941391941 }, { 105, 43.3882783883 }, { 78, 43.4615384615 }, { 100, 50.293040293 }, { 99, 57.2527472527 }, { 98, 64.0842490842 }, { 75, 64.1208791209 }, { 74, 64.1391941392 }, { 91, 67.3626373626 }, { 90, 70.4761904762 }, { 93, 74.4505494505 }, { 92, 77.9120879121 }, { 95, 83.4249084249 }, { 94, 88.3882783883 }, { 97, 94.1025641026 }, { 96, 99.8901098901 }, { 77, 99.9816849817 }, { 76, 100.0 } };
lqi_dist_t snr11[20] = { { 91, 0.0598444045482 }, { 92, 0.179533213645 }, { 108, 0.239377618193 }, { 95, 0.957510472771 }, { 93, 1.25673249551 }, { 94, 1.7354877319 }, { 99, 6.40335128665 }, { 98, 8.73728306403 }, { 96, 9.99401555955 }, { 97, 11.6696588869 }, { 88, 11.7295032914 }, { 90, 11.7594254937 }, { 102, 24.7755834829 }, { 103, 40.9634949132 }, { 100, 47.0676241771 }, { 101, 55.5954518253 }, { 106, 65.4398563734 }, { 107, 67.9533213645 }, { 104, 84.5302214243 }, { 105, 100.0 } };
lqi_dist_t snr10[26] = { { 102, 10.8441850022 }, { 88, 11.2258643916 }, { 89, 11.5401885945 }, { 103, 23.3497979344 }, { 100, 32.8244274809 }, { 83, 32.8693309385 }, { 86, 32.9591378536 }, { 87, 33.2734620566 }, { 84, 33.3857207005 }, { 85, 33.4979793444 }, { 101, 43.578805568 }, { 79, 43.6012572968 }, { 106, 47.4854063763 }, { 107, 48.1814099686 }, { 104, 57.7009429726 }, { 105, 65.626403233 }, { 99, 74.5172878312 }, { 98, 81.2079030085 }, { 91, 81.9712617872 }, { 90, 82.5774584643 }, { 93, 84.1041760216 }, { 92, 85.4737314773 }, { 95, 88.6394252357 }, { 94, 90.7498877414 }, { 97, 96.273013022 }, { 96, 100.0 } };
lqi_dist_t snr13[13] = { { 96, 0.0612745098039 }, { 99, 0.816993464052 }, { 98, 1.14379084967 }, { 108, 2.51225490196 }, { 97, 2.61437908497 }, { 102, 7.96568627451 }, { 103, 16.5645424837 }, { 100, 17.7696078431 }, { 101, 20.1593137255 }, { 106, 45.5882352941 }, { 107, 63.8684640523 }, { 104, 78.8807189542 }, { 105, 100.0 } };
lqi_dist_t snr12[16] = { { 108, 0.241911097672 }, { 95, 0.423344420925 }, { 93, 0.483822195343 }, { 94, 0.514061082552 }, { 99, 1.96552766858 }, { 98, 2.6912609616 }, { 96, 2.81221651043 }, { 97, 3.26579981857 }, { 102, 10.9767160568 }, { 103, 23.4351375869 }, { 100, 26.0659207741 }, { 101, 30.9948593892 }, { 106, 51.1944360448 }, { 107, 60.5080133051 }, { 104, 78.7420622921 }, { 105, 100.0 } };
lqi_dist_t snr15[11] = { { 99, 0.064116264159 }, { 98, 0.085488352212 }, { 108, 6.79632400085 }, { 102, 8.20688181235 }, { 103, 11.8615088694 }, { 100, 12.2462064544 }, { 101, 12.9728574482 }, { 106, 39.0468048728 }, { 107, 75.1870057705 }, { 104, 83.1160504381 }, { 105, 100.0 } };
lqi_dist_t snr14[14] = { { 96, 0.0368935620734 }, { 93, 0.0553403431101 }, { 99, 0.239808153477 }, { 98, 0.442722744881 }, { 108, 3.37576092972 }, { 97, 3.41265449179 }, { 102, 6.32724589559 }, { 103, 12.543811105 }, { 100, 13.3185759085 }, { 101, 14.7389780483 }, { 106, 41.8926397344 }, { 107, 69.9501936912 }, { 104, 81.0367090943 }, { 105, 100.0 } };
lqi_dist_t snr17[11] = { { 99, 0.0569962952408 }, { 98, 0.071245369051 }, { 108, 24.5654032488 }, { 102, 25.2208606441 }, { 103, 27.0732402394 }, { 100, 27.2014819037 }, { 101, 27.6004559704 }, { 106, 47.976631519 }, { 107, 87.1900826446 }, { 104, 91.1655742377 }, { 105, 100.0 } };
lqi_dist_t snr16[11] = { { 99, 0.0779271381259 }, { 98, 0.116890707189 }, { 108, 15.0983830119 }, { 102, 16.0335086694 }, { 103, 18.9362945646 }, { 100, 19.0726670563 }, { 101, 19.4038573933 }, { 106, 41.3987921294 }, { 107, 81.9793493084 }, { 104, 87.6680303916 }, { 105, 100.0 } };
lqi_dist_t snr19[10] = { { 99, 0.0210039907582 }, { 108, 35.1816845201 }, { 102, 35.622768326 }, { 103, 37.0930476791 }, { 100, 37.1560596513 }, { 101, 37.3871035497 }, { 106, 53.8542323041 }, { 107, 88.615837009 }, { 104, 91.8504515858 }, { 105, 100.0 } };
lqi_dist_t snr18[11] = { { 99, 0.0137080191912 }, { 98, 0.0274160383825 }, { 108, 30.4043865661 }, { 102, 31.1583276217 }, { 103, 32.7484578478 }, { 100, 32.8169979438 }, { 101, 32.9403701165 }, { 106, 50.6374228924 }, { 107, 88.2933516107 }, { 104, 91.8026045236 }, { 105, 100.0 } };
lqi_dist_t snr31[3] = { { 108, 52.9411764706 }, { 106, 70.5882352941 }, { 107, 100.0 } };
lqi_dist_t snr30[7] = { { 108, 55.9880239521 }, { 103, 56.4371257485 }, { 101, 56.5868263473 }, { 106, 69.6107784431 }, { 107, 94.4610778443 }, { 104, 96.2574850299 }, { 105, 100.0 } };

snr_lqi_t allSnr[29] = { { 24, 8, snr24 }, { 25, 10, snr25 }, { 26, 8, snr26 }, { 27, 9, snr27 }, { 20, 10, snr20 }, { 21, 9, snr21 }, { 22, 9, snr22 }, { 23, 9, snr23 }, { 28, 8, snr28 }, { 29, 8, snr29 }, { 0, 25, snr0 }, { 3, 45, snr3 }, { 2, 42, snr2 }, { 5, 46, snr5 }, { 7, 45, snr7 }, { 6, 45, snr6 }, { 8, 34, snr8 }, { 11, 20, snr11 }, { 10, 26, snr10 }, { 13, 13, snr13 }, { 12, 16, snr12 }, { 15, 11, snr15 }, { 14, 14, snr14 }, { 17, 11, snr17 }, { 16, 11, snr16 }, { 19, 10, snr19 }, { 18, 11, snr18 }, { 31, 3, snr31 }, { 30, 7, snr30 } };
uint8_t allSnr_len = 29;
# 5 "/opt/tinyos-main/tos/lib/tossim/sim_lqi.c"
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin);
#line 19
uint8_t sim_lqi_generate(double SNR)   ;
# 12 "includes/command.h"
enum __nesc_unnamed4306 {
  CMD_PING = 0, 
  CMD_NEIGHBOR_DUMP = 1, 
  CMD_LINKSTATE_DUMP = 2, 
  CMD_ROUTETABLE_DUMP = 3, 

  CMD_TEST_CLIENT = 4, 
  CMD_TEST_SERVER = 5, 


  CMD_ROOM_HOST = 7, 
  CMD_ROOM_CLI = 8, 

  CMD_KILL = 6, 
  CMD_ERROR = 9
};

enum __nesc_unnamed4307 {
  CMD_LENGTH = 1
};
# 8 "includes/sendInfo.h"
enum __nesc_unnamed4308 {
  SEND_BUFFER_SIZE = 128
};





#line 12
typedef struct sendInfo {
  pack packet;
  uint16_t src;
  uint16_t dest;
} sendInfo;
# 4 "lib/interfaces/../../includes/socket.h"
enum __nesc_unnamed4309 {
  MAX_NUM_OF_SOCKETS = 10, 
  ROOT_SOCKET_ADDR = 255, 
  ROOT_SOCKET_PORT = 255, 
  SOCKET_BUFFER_SIZE = 128
};

enum socket_state {
  CLOSED = 1, 
  LISTEN = 2, 
  ESTABLISHED = 3, 
  SYN_SENT = 4, 
  SYN_RCVD = 5, 
  FIN_WAIT_1 = 6, 
  CLOSE_WAIT = 7, 
  FIN_WAIT_2 = 8, 
  LAST_ACK = 9, 
  TIME_WAIT = 10
};


typedef nx_uint8_t nx_socket_port_t;
typedef uint8_t socket_port_t;





#line 29
typedef nx_struct socket_addr_t {
  nx_socket_port_t port;
  nx_uint16_t addr;
} __attribute__((packed)) socket_addr_t;



typedef uint8_t socket_t;
#line 61
#line 41
typedef struct socket_store_t {
  uint8_t flag;
  enum socket_state state;
  socket_port_t src;
  socket_addr_t dest;


  uint8_t sendBuff[SOCKET_BUFFER_SIZE];
  uint8_t lastWritten;
  uint8_t lastAck;
  uint8_t lastSent;


  uint8_t rcvdBuff[SOCKET_BUFFER_SIZE];
  uint8_t lastRead;
  uint8_t lastRcvd;
  uint8_t nextExpected;

  uint16_t RTT;
  uint8_t effectiveWindow;
} socket_store_t;
# 6 "lib/modules/../../includes/am_types.h"
enum __nesc_unnamed4310 {
  AM_FLOODING = 10
};
# 52 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4311 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4312 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4313 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4314 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4315 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4316 {

  uint8_t flat;
  struct __nesc_unnamed4317 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4318 {

  uint8_t flat;
  struct __nesc_unnamed4319 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4320 {

  uint8_t flat;
  struct __nesc_unnamed4321 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4322 {

  uint8_t flat;
  struct __nesc_unnamed4323 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4324 {

  uint8_t flat;
  struct __nesc_unnamed4325 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4326 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4327 {

  uint8_t flat;
  struct __nesc_unnamed4328 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4329 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4330 {

  uint8_t flat;
  struct __nesc_unnamed4331 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4332 {

  uint8_t flat;
  struct __nesc_unnamed4333 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4334 {

  uint8_t flat;
  struct __nesc_unnamed4335 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4336 {

  uint8_t flat;
  struct __nesc_unnamed4337 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 13 "lib/modules/../../includes/tcp_queue_info.h"
#line 8
typedef struct tcpQueueInfo {
  pack packet;
  uint16_t time;
  uint8_t seq;
  uint8_t socket_id;
} tcpQueueInfo;
typedef uint16_t CpmModelC__ReadRssi__val_t;
typedef uint16_t FloodingP__prior_packets__t;
typedef uint16_t /*FloodingC.HashmapC*/HashmapC__0__t;
typedef /*FloodingC.HashmapC*/HashmapC__0__t /*FloodingC.HashmapC*/HashmapC__0__Hashmap__t;
typedef sendInfo /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__t;
typedef sendInfo */*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t;
typedef TMilli /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Timer0__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum AMQueueP____nesc_unnamed4338 {
  AMQueueP__NUM_CLIENTS = 3U
};
typedef sendInfo /*FloodingC.SimpleSendC.PoolC*/PoolC__1__pool_t;
typedef /*FloodingC.SimpleSendC.PoolC*/PoolC__1__pool_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t;
typedef /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__t;
typedef sendInfo */*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t;
typedef /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__t;
typedef uint8_t NeighborDiscoveryP__Neighbors__t;
typedef TMilli NeighborDiscoveryP__Timer__precision_tag;
typedef uint8_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t;
typedef /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__t;
typedef sendInfo /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__t;
typedef sendInfo */*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t;
typedef TMilli /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__precision_tag;
typedef sendInfo /*NeighborDiscoveryC.SimpleSendC.PoolC*/PoolC__2__pool_t;
typedef /*NeighborDiscoveryC.SimpleSendC.PoolC*/PoolC__2__pool_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t;
typedef /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__t;
typedef sendInfo */*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t;
typedef /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__t;
typedef uint16_t LinkStateRoutingP__RoutingTable__t;
typedef TMilli LinkStateRoutingP__Timer__precision_tag;
typedef uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__t;
typedef /*LinkStateRoutingC.HashmapC*/HashmapC__2__t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__t;
typedef TMilli IPP__Timer__precision_tag;
typedef pack IPP__Unconfirmed__t;
typedef pack /*IPC.HashmapC*/HashmapC__3__t;
typedef /*IPC.HashmapC*/HashmapC__3__t /*IPC.HashmapC*/HashmapC__3__Hashmap__t;
typedef sendInfo /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__t;
typedef sendInfo */*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t;
typedef TMilli /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__precision_tag;
typedef sendInfo /*IPC.SimpleSendC.PoolC*/PoolC__3__pool_t;
typedef /*IPC.SimpleSendC.PoolC*/PoolC__3__pool_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t;
typedef /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__t;
typedef sendInfo */*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t;
typedef /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__t;
typedef tcpQueueInfo TCPP__sendQueue__t;
typedef TMilli TCPP__events__precision_tag;
typedef TMilli TCPP__Timer__precision_tag;
typedef tcpQueueInfo /*TCPC.sendQueue*/HashmapC__4__t;
typedef /*TCPC.sendQueue*/HashmapC__4__t /*TCPC.sendQueue*/HashmapC__4__Hashmap__t;
typedef TMilli RoomP__Timert__precision_tag;
typedef char *RoomP__clients__t;
typedef char */*RoomC.clients*/HashmapC__5__t;
typedef /*RoomC.clients*/HashmapC__5__t /*RoomC.clients*/HashmapC__5__Hashmap__t;
typedef TMilli ChatCliP__Timer__precision_tag;
typedef message_t CommandHandlerP__Pool__t;
typedef message_t *CommandHandlerP__Queue__t;
typedef message_t /*CommandHandlerC.PoolC*/PoolC__0__pool_t;
typedef /*CommandHandlerC.PoolC*/PoolC__0__pool_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t;
typedef /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__t;
typedef message_t */*CommandHandlerC.QueueC*/QueueC__0__queue_t;
typedef /*CommandHandlerC.QueueC*/QueueC__0__queue_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__t;
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformC__Init__init(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 49 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f380068e020);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 49 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f380068e020);
# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 44 "/opt/tinyos-main/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);


static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP__SimMote__turnOff(void );
#line 48
static void SimMoteP__SimMote__turnOn(void );
#line 43
static long long int SimMoteP__SimMote__getEuid(void );







static error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 46
static bool SimMoteP__SimMote__isOn(void );





static uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 45
static long long int SimMoteP__SimMote__getStartTime(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC__AMSend__send(
# 47 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004c4c70, 
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Snoop__default__receive(
# 49 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004a9a50, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );
#line 94
static void TossimActiveMessageC__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Receive__default__receive(
# 48 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004aae30, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 76
static void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC__Model__shouldAck(message_t *msg);
# 68 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC__AMPacket__address(void );









static am_addr_t TossimActiveMessageC__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC__AMPacket__isForMe(
#line 133
message_t * amsg);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__stopDoneTask__runTask(void );
# 57 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC__Packet__send(int node, message_t *msg, uint8_t len);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__sendDoneTask__runTask(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t TossimPacketModelC__Init__init(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__startDoneTask__runTask(void );
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC__Control__start(void );
# 60 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__receive(message_t *msg);
#line 59
static void TossimPacketModelC__GainRadioModel__acked(message_t *msg);

static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CpmModelC__read_rssi_task__runTask(void );
# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__default__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 48 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC__Model__clearChannel(void );
static void CpmModelC__Model__setPendingTransmission(void );
# 60 "/opt/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void Node__AMControl__startDone(error_t error);
#line 138
static void Node__AMControl__stopDone(error_t error);
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void Node__Boot__booted(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Node__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 6 "lib/interfaces/CommandHandler.nc"
static void Node__CommandHandler__printLinkState(void );
#line 4
static void Node__CommandHandler__printNeighbors(void );




static void Node__CommandHandler__setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2);
#line 8
static void Node__CommandHandler__setTestServer(uint8_t port);

static void Node__CommandHandler__setAppServer(void );
#line 5
static void Node__CommandHandler__printRouteTable(void );
#line 3
static void Node__CommandHandler__ping(uint16_t destination, uint8_t *payload);







static void Node__CommandHandler__setAppClient(uint8_t *payload);
# 4 "lib/interfaces/Flooding.nc"
static void FloodingP__Flooding__send(pack in_pack, uint16_t destination);
static void FloodingP__Flooding__send_down_line(pack in_pack);
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*FloodingC.HashmapC*/HashmapC__0__Hashmap__t /*FloodingC.HashmapC*/HashmapC__0__Hashmap__get(uint32_t key);
#line 11
static void /*FloodingC.HashmapC*/HashmapC__0__Hashmap__insert(uint32_t key, /*FloodingC.HashmapC*/HashmapC__0__Hashmap__t input);
# 4 "lib/interfaces/SimpleSend.nc"
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__SimpleSend__send(pack msg, uint16_t dest);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__fired(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
#line 61
static HplAtm128Timer0AsyncP__Timer0__timer_size HplAtm128Timer0AsyncP__Timer0__get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 67
static void HplAtm128Timer0AsyncP__Timer0__set(HplAtm128Timer0AsyncP__Timer0__timer_size t);
# 44 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 53 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t control);
# 48 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 151 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 144 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950, 
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950, 
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f37ffd59b60, 
# 103 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f37ffd5a940, 
# 67 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f37ffd5a940, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__t * 


/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__get(void );
#line 61
static bool /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__put(
#line 85
/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Init__init(void );
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__t  

/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__head(void );
#line 97
static error_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__enqueue(
#line 93
/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__t  newVal);
#line 72
static uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__maxSize(void );
#line 88
static 
#line 86
/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__t  

/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__empty(void );
#line 65
static uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__size(void );
# 7 "lib/interfaces/NeighborDiscovery.nc"
static uint32_t *NeighborDiscoveryP__NeighborDiscovery__get_Neighbors(uint8_t *num, uint8_t *has_changed);
#line 5
static void NeighborDiscoveryP__NeighborDiscovery__disc_message_recieved(pack in_pack);
static void NeighborDiscoveryP__NeighborDiscovery__print_neighbors(void );
#line 4
static void NeighborDiscoveryP__NeighborDiscovery__boot(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void NeighborDiscoveryP__Timer__fired(void );
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__get(uint32_t key);
#line 12
static void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__remove(uint32_t key);
#line 11
static void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__insert(uint32_t key, /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__t input);





static uint32_t */*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__getKeys(void );
#line 16
static uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__size(void );
# 4 "lib/interfaces/SimpleSend.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__SimpleSend__send(pack msg, uint16_t dest);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__fired(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__t * 


/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__get(void );
#line 61
static bool /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__empty(void );
#line 89
static error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__put(
#line 85
/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Init__init(void );
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__t  

/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__head(void );
#line 97
static error_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__enqueue(
#line 93
/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__t  newVal);
#line 72
static uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__maxSize(void );
#line 88
static 
#line 86
/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__t  

/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__empty(void );
#line 65
static uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__size(void );
# 2 "lib/interfaces/LinkStateRouting.nc"
static void LinkStateRoutingP__LinkStateRouting__begin(void );
static void LinkStateRoutingP__LinkStateRouting__packet_recived(pack in_pack);


static void LinkStateRoutingP__LinkStateRouting__dumpLS(void );
#line 4
static uint8_t LinkStateRoutingP__LinkStateRouting__getNext(uint8_t dest);


static void LinkStateRoutingP__LinkStateRouting__dumpRT(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void LinkStateRoutingP__Timer__fired(void );
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__get(uint32_t key);
#line 12
static void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__remove(uint32_t key);
#line 11
static void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__insert(uint32_t key, /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__t input);





static uint32_t */*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__getKeys(void );
#line 16
static uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__size(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void IPP__Timer__fired(void );
# 4 "lib/interfaces/IP.nc"
static void IPP__IP__send(pack in_pack, uint8_t dest);
#line 3
static void IPP__IP__packet_recived(pack in_pack);
#line 2
static void IPP__IP__init(void );
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*IPC.HashmapC*/HashmapC__3__Hashmap__t /*IPC.HashmapC*/HashmapC__3__Hashmap__get(uint32_t key);
#line 12
static void /*IPC.HashmapC*/HashmapC__3__Hashmap__remove(uint32_t key);




static uint32_t */*IPC.HashmapC*/HashmapC__3__Hashmap__getKeys(void );
#line 16
static uint16_t /*IPC.HashmapC*/HashmapC__3__Hashmap__size(void );
# 4 "lib/interfaces/SimpleSend.nc"
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__SimpleSend__send(pack msg, uint16_t dest);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__fired(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__t * 


/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__get(void );
#line 61
static bool /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__empty(void );
#line 89
static error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__put(
#line 85
/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Init__init(void );
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__t  

/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__head(void );
#line 97
static error_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__enqueue(
#line 93
/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__t  newVal);
#line 72
static uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__maxSize(void );
#line 88
static 
#line 86
/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__t  

/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__dequeue(void );
#line 50
static bool /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__empty(void );
#line 65
static uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__size(void );
# 7 "lib/interfaces/TCP.nc"
static void TCPP__TCP__cli_connect(uint8_t port);


static socket_store_t *TCPP__TCP__getsoc(uint8_t clientId);
#line 5
static void TCPP__TCP__init_server(uint8_t port);


static void TCPP__TCP__cli_send(uint8_t *msg, uint8_t size);
#line 4
static void TCPP__TCP__handle_packet(pack in_pack);




static void TCPP__TCP__srv_send(uint8_t target, uint8_t *msg, uint8_t size);
#line 6
static void TCPP__TCP__init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TCPP__events__fired(void );
#line 83
static void TCPP__Timer__fired(void );
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*TCPC.sendQueue*/HashmapC__4__Hashmap__t /*TCPC.sendQueue*/HashmapC__4__Hashmap__get(uint32_t key);
#line 12
static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__remove(uint32_t key);
#line 11
static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__insert(uint32_t key, /*TCPC.sendQueue*/HashmapC__4__Hashmap__t input);





static uint32_t */*TCPC.sendQueue*/HashmapC__4__Hashmap__getKeys(void );
#line 14
static bool /*TCPC.sendQueue*/HashmapC__4__Hashmap__contains(uint32_t key);

static uint16_t /*TCPC.sendQueue*/HashmapC__4__Hashmap__size(void );
# 2 "lib/interfaces/Room.nc"
static void RoomP__Room__handle_packet(pack *in_pack);
static void RoomP__Room__start(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void RoomP__Timert__fired(void );
# 13 "dataStructures/interfaces/Hashmap.nc"
static /*RoomC.clients*/HashmapC__5__Hashmap__t /*RoomC.clients*/HashmapC__5__Hashmap__get(uint32_t key);
#line 11
static void /*RoomC.clients*/HashmapC__5__Hashmap__insert(uint32_t key, /*RoomC.clients*/HashmapC__5__Hashmap__t input);





static uint32_t */*RoomC.clients*/HashmapC__5__Hashmap__getKeys(void );
#line 14
static bool /*RoomC.clients*/HashmapC__5__Hashmap__contains(uint32_t key);

static uint16_t /*RoomC.clients*/HashmapC__5__Hashmap__size(void );
# 4 "lib/interfaces/ChatCli.nc"
static void ChatCliP__ChatCli__handle_packet(pack *in_pack);
static void ChatCliP__ChatCli__handle_cmd(uint8_t *payload);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void ChatCliP__Timer__fired(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CommandHandlerP__processCommand__runTask(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CommandHandlerP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__t * 


/*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__get(void );
#line 61
static bool /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__empty(void );
#line 89
static error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__put(
#line 85
/*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Init__init(void );
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*CommandHandlerC.QueueC*/QueueC__0__Queue__t  

/*CommandHandlerC.QueueC*/QueueC__0__Queue__head(void );
#line 97
static error_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__enqueue(
#line 93
/*CommandHandlerC.QueueC*/QueueC__0__Queue__t  newVal);
#line 72
static uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*CommandHandlerC.QueueC*/QueueC__0__Queue__t  

/*CommandHandlerC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*CommandHandlerC.QueueC*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__size(void );
# 45 "/opt/tinyos-main/tos/lib/tossim/PlatformC.nc"
static inline error_t PlatformC__Init__init(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 51 "/opt/tinyos-main/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 49 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f380068e020);



enum SimSchedulerBasicP____nesc_unnamed4339 {

  SimSchedulerBasicP__NUM_TASKS = 12U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 139
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 180
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 205
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 51 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];
sim_event_t *SimMoteP__bootEvent[1000];

uint8_t SimMoteP__radioChannel[1000];




static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 74
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 86
error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)   ;
#line 98
uint8_t sim_mote_get_radio_channel(int mote)   ;








static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 137
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC__amAddress(void );
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC__AMSend__sendDone(
# 47 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004c4c70, 
# 103 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Snoop__receive(
# 49 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004a9a50, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC__Receive__receive(
# 48 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f38004aae30, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len);
# 62 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC__buffer[1000];
message_t *TossimActiveMessageC__bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg);







static error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC__AMPacket__address(void );



static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg);




static void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg);




static void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg);



static inline void TossimActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );



static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC__Packet__receive(message_t *msg);
#line 76
static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC__Packet__shouldAck(message_t *msg);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC__startDoneTask__postTask(void );
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC__Control__startDone(error_t error);
#line 138
static void TossimPacketModelC__Control__stopDone(error_t error);
# 48 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC__GainRadioModel__clearChannel(void );
static void TossimPacketModelC__GainRadioModel__setPendingTransmission(void );
# 96 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC____nesc_unnamed4340 {
#line 96
  TossimPacketModelC__startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC____nesc_sillytask_startDoneTask[TossimPacketModelC__startDoneTask];




enum TossimPacketModelC____nesc_unnamed4341 {
#line 101
  TossimPacketModelC__stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC____nesc_sillytask_stopDoneTask[TossimPacketModelC__stopDoneTask];
#line 145
enum TossimPacketModelC____nesc_unnamed4342 {
#line 145
  TossimPacketModelC__sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC____nesc_sillytask_sendDoneTask[TossimPacketModelC__sendDoneTask];
#line 70
bool TossimPacketModelC__initialized[1000];
bool TossimPacketModelC__running[1000];
uint8_t TossimPacketModelC__backoffCount[1000];
uint8_t TossimPacketModelC__neededFreeSamples[1000];
message_t *TossimPacketModelC__sending[1000];
bool TossimPacketModelC__transmitting[1000];
uint8_t TossimPacketModelC__sendingLength[1000];
int TossimPacketModelC__destNode[1000];
sim_event_t TossimPacketModelC__sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg);



static inline error_t TossimPacketModelC__Init__init(void );









static inline void TossimPacketModelC__startDoneTask__runTask(void );




static inline void TossimPacketModelC__stopDoneTask__runTask(void );




static error_t TossimPacketModelC__Control__start(void );
#line 145
static inline void TossimPacketModelC__sendDoneTask__runTask(void );
#line 159
static inline void TossimPacketModelC__start_csma(void );

static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC__start_csma(void );
#line 211
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg);





uint8_t TossimPacketModelC__error[1000];

static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg);










static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 60 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__receive(message_t *msg);
#line 59
static void CpmModelC__Model__acked(message_t *msg);

static bool CpmModelC__Model__shouldAck(message_t *msg);
# 528 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
enum CpmModelC____nesc_unnamed4343 {
#line 528
  CpmModelC__read_rssi_task = 3U
};
#line 528
typedef int CpmModelC____nesc_sillytask_read_rssi_task[CpmModelC__read_rssi_task];
#line 60
message_t *CpmModelC__outgoing[1000];
bool CpmModelC__requestAck[1000];
bool CpmModelC__receiving[1000];
bool CpmModelC__rssi[1000];
bool CpmModelC__transmitting[1000];
sim_time_t CpmModelC__transmissionEndTime[1000];
struct CpmModelC__receive_message;
typedef struct CpmModelC__receive_message CpmModelC__receive_message_t;

struct CpmModelC__receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC__receive_message_t *next;
  uint8_t channel;
  uint8_t lqi;
};

CpmModelC__receive_message_t *CpmModelC__outstandingReceptionHead[1000];

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t t, CpmModelC__receive_message_t *m);

static bool CpmModelC__shouldReceive(double SNR);
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);


static inline double CpmModelC__timeInMs(void );
#line 131
static double CpmModelC__noise_hash_generation(void );
#line 156
static inline double CpmModelC__arr_estimate_from_snr(double SNR);
#line 171
static inline int CpmModelC__shouldAckReceive(double snr);
#line 183
static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt);
#line 205
double CpmModelC__clearThreshold[1000];










static inline bool CpmModelC__Model__clearChannel(void );




static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r);
#line 235
static inline double CpmModelC__prr_estimate_from_snr(double SNR);
#line 253
static bool CpmModelC__shouldReceive(double SNR);
#line 265
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
#line 290
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);
#line 321
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt);
#line 402
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 469
static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 500
static inline void CpmModelC__Model__setPendingTransmission(void );







static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg);
#line 520
static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );



static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);



static inline void CpmModelC__read_rssi_task__runTask(void );
#line 548
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data);
# 66 "/opt/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC__set[1000];
am_addr_t ActiveMessageAddressC__addr[1000];









static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 89
static inline am_addr_t ActiveMessageAddressC__amAddress(void );
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t Node__AMControl__start(void );
# 2 "lib/interfaces/Room.nc"
static void Node__Room__handle_packet(pack *in_pack);
static void Node__Room__start(void );
# 6 "lib/interfaces/LinkStateRouting.nc"
static void Node__LinkStateRouting__dumpLS(void );
static void Node__LinkStateRouting__dumpRT(void );
# 6 "lib/interfaces/NeighborDiscovery.nc"
static void Node__NeighborDiscovery__print_neighbors(void );
# 5 "lib/interfaces/TCP.nc"
static void Node__TCP__init_server(uint8_t port);
static void Node__TCP__init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer);
# 4 "lib/interfaces/ChatCli.nc"
static void Node__ChatCli__handle_packet(pack *in_pack);
static void Node__ChatCli__handle_cmd(uint8_t *payload);
# 4 "lib/interfaces/IP.nc"
static void Node__IP__send(pack in_pack, uint8_t dest);
#line 3
static void Node__IP__packet_recived(pack in_pack);
#line 2
static void Node__IP__init(void );
# 38 "Node.nc"
pack Node__sendPackage[1000];


static inline void Node__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

static inline void Node__Boot__booted(void );









static inline void Node__AMControl__startDone(error_t err);








static inline void Node__AMControl__stopDone(error_t err);

static inline message_t *Node__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 103
static inline void Node__CommandHandler__ping(uint16_t destination, uint8_t *payload);





static inline void Node__CommandHandler__printNeighbors(void );



static inline void Node__CommandHandler__printRouteTable(void );



static inline void Node__CommandHandler__printLinkState(void );





static inline void Node__CommandHandler__setTestServer(uint8_t port);



static inline void Node__CommandHandler__setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2);







static inline void Node__CommandHandler__setAppServer(void );



static inline void Node__CommandHandler__setAppClient(uint8_t *payload);



static inline void Node__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 4 "lib/interfaces/SimpleSend.nc"
static error_t FloodingP__Sender__send(pack msg, uint16_t dest);
# 13 "dataStructures/interfaces/Hashmap.nc"
static FloodingP__prior_packets__t FloodingP__prior_packets__get(uint32_t key);
#line 11
static void FloodingP__prior_packets__insert(uint32_t key, FloodingP__prior_packets__t input);
# 13 "lib/modules/FloodingP.nc"
pack FloodingP__send_pkt[1000];
uint16_t FloodingP__sequence_number[1000];


static inline void FloodingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);


static inline void FloodingP__Flooding__send(pack in_pack, uint16_t destination);
#line 39
static inline void FloodingP__Flooding__send_down_line(pack in_pack);
#line 56
static inline void FloodingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[1000];


uint16_t /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[1000];




#line 20
typedef struct /*FloodingC.HashmapC*/HashmapC__0__hashmapEntry {
  uint32_t key;
  /*FloodingC.HashmapC*/HashmapC__0__t value;
} /*FloodingC.HashmapC*/HashmapC__0__hashmapEntry;

/*FloodingC.HashmapC*/HashmapC__0__hashmapEntry /*FloodingC.HashmapC*/HashmapC__0__map[1000][20];
uint32_t /*FloodingC.HashmapC*/HashmapC__0__keys[1000][20];
uint16_t /*FloodingC.HashmapC*/HashmapC__0__numofVals[1000];


static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash2(uint32_t k);


static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash3(uint32_t k);



static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash(uint32_t k, uint32_t i);



static void /*FloodingC.HashmapC*/HashmapC__0__Hashmap__insert(uint32_t k, /*FloodingC.HashmapC*/HashmapC__0__t input);
#line 130
static inline /*FloodingC.HashmapC*/HashmapC__0__t /*FloodingC.HashmapC*/HashmapC__0__Hashmap__get(uint32_t k);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__t * 


/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__get(void );
#line 61
static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__empty(void );
#line 89
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__put(
#line 85
/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__t * newVal);
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  

/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__head(void );
#line 97
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__enqueue(
#line 93
/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  newVal);
#line 88
static 
#line 86
/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  

/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__dequeue(void );
#line 50
static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__empty(void );
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Random__rand16(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__postTask(void );
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__isRunning(void );
#line 73
static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__startOneShot(uint32_t dt);
# 74 "lib/modules/SimpleSendP.nc"
enum /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0____nesc_unnamed4344 {
#line 74
  SimpleSendP__0__sendBufferTask = 4U
};
#line 74
typedef int /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0____nesc_sillytask_sendBufferTask[/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask];
#line 31
bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[1000];
message_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[1000];

static inline error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__send(uint16_t src, uint16_t dest, pack *message);



static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__postSendTask(void );










static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__SimpleSend__send(pack msg, uint16_t dest);
#line 74
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__runTask(void );
#line 103
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__fired(void );
#line 118
static inline error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__send(uint16_t src, uint16_t dest, pack *message);
#line 150
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4345 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 70 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer0__overflow(void );
# 58 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 57 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP__inOverflow[1000];




static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP__lastZero[1000];





uint8_t HplAtm128Timer0AsyncP__oldScale[1000];



static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP__last_zero(void );







static inline void HplAtm128Timer0AsyncP__notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP__compare[1000];

static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );







static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void );
#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static uint8_t HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP__overflow[1000];
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );







static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );







static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4346 {
#line 74
  AlarmToTimerC__0__fired = 5U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f37ffe0c950);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4347 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 6U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4348 {

  VirtualizeTimerC__0__NUM_TIMERS = 10U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4349 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 52 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed[1000];


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f37ffd59b60, 
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f37ffd5a940, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4350 {
#line 126
  AMQueueImplP__0__CancelTask = 7U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4351 {
#line 169
  AMQueueImplP__0__errorTask = 8U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4352 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1000][3];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1000][3 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[1000];
uint8_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[1000];
/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t * /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[1000][20];
/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[1000][20];

static inline error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Init__init(void );









static inline bool /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__empty(void );
#line 88
static inline /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t */*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__get(void );
#line 103
static inline error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__put(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t *newVal);
# 48 "/opt/tinyos-main/tos/system/QueueC.nc"
/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t  /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[1000][20];
uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[1000];
uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[1000];
uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[1000];

static inline bool /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__empty(void );







static inline uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__size(void );



static inline uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__maxSize(void );



static inline /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__head(void );



static void /*FloodingC.SimpleSendC.QueueC*/QueueC__1__printQueue(void );
#line 89
static inline /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__dequeue(void );
#line 101
static inline error_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__enqueue(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t newVal);
# 13 "dataStructures/interfaces/Hashmap.nc"
static NeighborDiscoveryP__Neighbors__t NeighborDiscoveryP__Neighbors__get(uint32_t key);
#line 12
static void NeighborDiscoveryP__Neighbors__remove(uint32_t key);
#line 11
static void NeighborDiscoveryP__Neighbors__insert(uint32_t key, NeighborDiscoveryP__Neighbors__t input);





static uint32_t *NeighborDiscoveryP__Neighbors__getKeys(void );
#line 16
static uint16_t NeighborDiscoveryP__Neighbors__size(void );
# 4 "lib/interfaces/SimpleSend.nc"
static error_t NeighborDiscoveryP__Sender__send(pack msg, uint16_t dest);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void NeighborDiscoveryP__Timer__startPeriodic(uint32_t dt);
# 14 "lib/modules/NeighborDiscoveryP.nc"
pack NeighborDiscoveryP__discPack[1000];
uint8_t NeighborDiscoveryP__changed[1000];

static inline void NeighborDiscoveryP__NeighborDiscovery__boot(void );
#line 29
static inline void NeighborDiscoveryP__NeighborDiscovery__disc_message_recieved(pack in_pack);
#line 44
static inline void NeighborDiscoveryP__Timer__fired(void );
#line 62
static inline void NeighborDiscoveryP__NeighborDiscovery__print_neighbors(void );









static inline uint32_t *NeighborDiscoveryP__NeighborDiscovery__get_Neighbors(uint8_t *num, uint8_t *has_changed);
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[1000];


uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[1000];




#line 20
typedef struct /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hashmapEntry {
  uint32_t key;
  /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t value;
} /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hashmapEntry;

/*NeighborDiscoveryC.HashmapC*/HashmapC__1__hashmapEntry /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[1000][20];
uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[1000][20];
uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[1000];


static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash2(uint32_t k);


static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash3(uint32_t k);



static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash(uint32_t k, uint32_t i);



static void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__insert(uint32_t k, /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t input);
#line 76
static inline void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__removeFromKeyList(uint32_t k);
#line 109
static inline void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__remove(uint32_t k);
#line 130
static /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__get(uint32_t k);
#line 166
static inline uint32_t */*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__getKeys(void );



static inline uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__size(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__t * 


/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__get(void );
#line 61
static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__empty(void );
#line 89
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__put(
#line 85
/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__t * newVal);
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  

/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__head(void );
#line 97
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__enqueue(
#line 93
/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  newVal);
#line 88
static 
#line 86
/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  

/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__dequeue(void );
#line 50
static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__empty(void );
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Random__rand16(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__postTask(void );
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__isRunning(void );
#line 73
static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__startOneShot(uint32_t dt);
# 74 "lib/modules/SimpleSendP.nc"
enum /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1____nesc_unnamed4353 {
#line 74
  SimpleSendP__1__sendBufferTask = 9U
};
#line 74
typedef int /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1____nesc_sillytask_sendBufferTask[/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask];
#line 31
bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[1000];
message_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[1000];

static inline error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__send(uint16_t src, uint16_t dest, pack *message);



static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__postSendTask(void );










static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__SimpleSend__send(pack msg, uint16_t dest);
#line 74
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__runTask(void );
#line 103
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__fired(void );
#line 118
static inline error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__send(uint16_t src, uint16_t dest, pack *message);
#line 150
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__sendDone(message_t *msg, error_t error);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[1000];
uint8_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[1000];
/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t * /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[1000][20];
/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[1000][20];

static inline error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Init__init(void );









static inline bool /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__empty(void );
#line 88
static inline /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t */*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__get(void );
#line 103
static inline error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__put(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos-main/tos/system/QueueC.nc"
/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t  /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[1000][20];
uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[1000];
uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[1000];
uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[1000];

static inline bool /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__empty(void );







static inline uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__size(void );



static inline uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__maxSize(void );



static inline /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__head(void );



static void /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__printQueue(void );
#line 89
static inline /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__dequeue(void );
#line 101
static inline error_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__enqueue(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t newVal);
# 13 "dataStructures/interfaces/Hashmap.nc"
static LinkStateRoutingP__RoutingTable__t LinkStateRoutingP__RoutingTable__get(uint32_t key);
#line 12
static void LinkStateRoutingP__RoutingTable__remove(uint32_t key);
#line 11
static void LinkStateRoutingP__RoutingTable__insert(uint32_t key, LinkStateRoutingP__RoutingTable__t input);





static uint32_t *LinkStateRoutingP__RoutingTable__getKeys(void );
#line 16
static uint16_t LinkStateRoutingP__RoutingTable__size(void );
# 7 "lib/interfaces/NeighborDiscovery.nc"
static uint32_t *LinkStateRoutingP__ND__get_Neighbors(uint8_t *num, uint8_t *has_changed);
#line 5
static void LinkStateRoutingP__ND__disc_message_recieved(pack in_pack);
#line 4
static void LinkStateRoutingP__ND__boot(void );
# 4 "lib/interfaces/Flooding.nc"
static void LinkStateRoutingP__Flooding__send(pack in_pack, uint16_t destination);
static void LinkStateRoutingP__Flooding__send_down_line(pack in_pack);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void LinkStateRoutingP__Timer__startPeriodic(uint32_t dt);
# 30 "lib/modules/LinkStateRoutingP.nc"
pack LinkStateRoutingP__send_pkt[1000];

uint8_t LinkStateRoutingP__begin[1000];
uint8_t LinkStateRoutingP__topoChanged[1000];





#line 35
typedef struct LinkStateRoutingP____nesc_unnamed4354 {
  uint8_t dest;
  uint8_t cost;
} 
LinkStateRoutingP__connection;

LinkStateRoutingP__connection LinkStateRoutingP__topography[1000][32][32];




uint8_t LinkStateRoutingP__topoSize[1000];

static inline void LinkStateRoutingP__LSArecieved(pack in_pack);
static inline void LinkStateRoutingP__dijkstra(void );
static inline void LinkStateRoutingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

static inline void LinkStateRoutingP__LinkStateRouting__begin(void );






static inline void LinkStateRoutingP__Timer__fired(void );
#line 111
static inline void LinkStateRoutingP__LinkStateRouting__packet_recived(pack in_pack);










static inline void LinkStateRoutingP__LSArecieved(pack in_pack);
#line 138
static inline void LinkStateRoutingP__dijkstra(void );
#line 227
static uint8_t LinkStateRoutingP__LinkStateRouting__getNext(uint8_t dest);
#line 243
static inline void LinkStateRoutingP__LinkStateRouting__dumpLS(void );
#line 265
static inline void LinkStateRoutingP__LinkStateRouting__dumpRT(void );
#line 288
static inline void LinkStateRoutingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[1000];


uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[1000];




#line 20
typedef struct /*LinkStateRoutingC.HashmapC*/HashmapC__2__hashmapEntry {
  uint32_t key;
  /*LinkStateRoutingC.HashmapC*/HashmapC__2__t value;
} /*LinkStateRoutingC.HashmapC*/HashmapC__2__hashmapEntry;

/*LinkStateRoutingC.HashmapC*/HashmapC__2__hashmapEntry /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[1000][33];
uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[1000][33];
uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[1000];


static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash2(uint32_t k);


static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash3(uint32_t k);



static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash(uint32_t k, uint32_t i);



static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__insert(uint32_t k, /*LinkStateRoutingC.HashmapC*/HashmapC__2__t input);
#line 76
static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__removeFromKeyList(uint32_t k);
#line 109
static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__remove(uint32_t k);
#line 130
static /*LinkStateRoutingC.HashmapC*/HashmapC__2__t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__get(uint32_t k);
#line 166
static inline uint32_t */*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__getKeys(void );



static inline uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__size(void );
# 2 "lib/interfaces/LinkStateRouting.nc"
static void IPP__LinkStateRouting__begin(void );
static void IPP__LinkStateRouting__packet_recived(pack in_pack);
static uint8_t IPP__LinkStateRouting__getNext(uint8_t dest);
# 13 "dataStructures/interfaces/Hashmap.nc"
static IPP__Unconfirmed__t IPP__Unconfirmed__get(uint32_t key);
#line 12
static void IPP__Unconfirmed__remove(uint32_t key);




static uint32_t *IPP__Unconfirmed__getKeys(void );
#line 16
static uint16_t IPP__Unconfirmed__size(void );
# 4 "lib/interfaces/SimpleSend.nc"
static error_t IPP__Sender__send(pack msg, uint16_t dest);
# 26 "lib/modules/IPP.nc"
static inline void IPP__IP__init(void );




static void IPP__IP__packet_recived(pack in_pack);
#line 68
static inline void IPP__Timer__fired(void );
#line 98
static void IPP__IP__send(pack in_pack, uint8_t dest);
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[1000];


uint16_t /*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[1000];




#line 20
typedef struct /*IPC.HashmapC*/HashmapC__3__hashmapEntry {
  uint32_t key;
  /*IPC.HashmapC*/HashmapC__3__t value;
} /*IPC.HashmapC*/HashmapC__3__hashmapEntry;

/*IPC.HashmapC*/HashmapC__3__hashmapEntry /*IPC.HashmapC*/HashmapC__3__map[1000][20];
uint32_t /*IPC.HashmapC*/HashmapC__3__keys[1000][20];
uint16_t /*IPC.HashmapC*/HashmapC__3__numofVals[1000];


static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash2(uint32_t k);


static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash3(uint32_t k);



static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash(uint32_t k, uint32_t i);
#line 76
static inline void /*IPC.HashmapC*/HashmapC__3__removeFromKeyList(uint32_t k);
#line 109
static inline void /*IPC.HashmapC*/HashmapC__3__Hashmap__remove(uint32_t k);
#line 130
static /*IPC.HashmapC*/HashmapC__3__t /*IPC.HashmapC*/HashmapC__3__Hashmap__get(uint32_t k);
#line 166
static inline uint32_t */*IPC.HashmapC*/HashmapC__3__Hashmap__getKeys(void );



static inline uint16_t /*IPC.HashmapC*/HashmapC__3__Hashmap__size(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__t * 


/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__get(void );
#line 61
static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__empty(void );
#line 89
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__put(
#line 85
/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__t * newVal);
# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 78
/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  

/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__head(void );
#line 97
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__enqueue(
#line 93
/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  newVal);
#line 88
static 
#line 86
/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  

/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__dequeue(void );
#line 50
static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__empty(void );
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Random__rand16(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__postTask(void );
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__isRunning(void );
#line 73
static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__startOneShot(uint32_t dt);
# 74 "lib/modules/SimpleSendP.nc"
enum /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2____nesc_unnamed4355 {
#line 74
  SimpleSendP__2__sendBufferTask = 10U
};
#line 74
typedef int /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2____nesc_sillytask_sendBufferTask[/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask];
#line 31
bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[1000];
message_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[1000];

static inline error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__send(uint16_t src, uint16_t dest, pack *message);



static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__postSendTask(void );










static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__SimpleSend__send(pack msg, uint16_t dest);
#line 74
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__runTask(void );
#line 103
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__fired(void );
#line 118
static inline error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__send(uint16_t src, uint16_t dest, pack *message);
#line 150
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__sendDone(message_t *msg, error_t error);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[1000];
uint8_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[1000];
/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t * /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[1000][20];
/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[1000][20];

static inline error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Init__init(void );









static inline bool /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__empty(void );
#line 88
static inline /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t */*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__put(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t *newVal);
# 48 "/opt/tinyos-main/tos/system/QueueC.nc"
/*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t  /*IPC.SimpleSendC.QueueC*/QueueC__3__queue[1000][20];
uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__head[1000];
uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__tail[1000];
uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__size[1000];

static inline bool /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__empty(void );







static inline uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__size(void );



static inline uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__maxSize(void );



static inline /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__head(void );



static void /*IPC.SimpleSendC.QueueC*/QueueC__3__printQueue(void );
#line 89
static inline /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__dequeue(void );
#line 101
static inline error_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__enqueue(/*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t newVal);
# 4 "lib/interfaces/IP.nc"
static void TCPP__IP__send(pack in_pack, uint8_t dest);
#line 3
static void TCPP__IP__packet_recived(pack in_pack);
# 13 "dataStructures/interfaces/Hashmap.nc"
static TCPP__sendQueue__t TCPP__sendQueue__get(uint32_t key);
#line 12
static void TCPP__sendQueue__remove(uint32_t key);
#line 11
static void TCPP__sendQueue__insert(uint32_t key, TCPP__sendQueue__t input);





static uint32_t *TCPP__sendQueue__getKeys(void );
#line 14
static bool TCPP__sendQueue__contains(uint32_t key);

static uint16_t TCPP__sendQueue__size(void );
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TCPP__events__startOneShot(uint32_t dt);
#line 136
static uint32_t TCPP__Timer__getNow(void );
#line 151
static uint32_t TCPP__Timer__getdt(void );
#line 144
static uint32_t TCPP__Timer__gett0(void );
#line 92
static bool TCPP__Timer__isRunning(void );
#line 73
static void TCPP__Timer__startOneShot(uint32_t dt);




static void TCPP__Timer__stop(void );
# 24 "lib/modules/TCPP.nc"
enum TCPP__tcpType {
  TCPP__SYN = 0, 
  TCPP__SYNACK = 1, 
  TCPP__ACK = 2, 
  TCPP__DATA = 3, 
  TCPP__FIN = 4
};
#line 44
#line 34
typedef struct TCPP__TCPpacket {
  uint8_t src;
  uint8_t dest;
  uint8_t srcp;
  uint8_t destp;
  uint8_t seq;
  uint8_t ack;
  uint8_t flag;
  uint8_t advwin;
  uint8_t payload[12];
} TCPP__TCPpacket;
TCPP__TCPpacket TCPP__tcp_pack[1000];




socket_store_t TCPP__sockets[1000][MAX_NUM_OF_SOCKETS];
uint8_t TCPP__socket_seq[1000][MAX_NUM_OF_SOCKETS];

uint8_t TCPP__socket_highAck[1000][MAX_NUM_OF_SOCKETS];
uint8_t TCPP__socket_nextAck[1000][MAX_NUM_OF_SOCKETS];



uint8_t TCPP__cli_data_to_send[1000];
uint8_t TCPP__cli_data_sent[1000];

uint8_t TCPP__node_state[1000];

uint8_t TCPP__serv_port[1000];
uint16_t TCPP__data_to_send[1000][100];
#line 80
static void TCPP__send_packet(pack in_pack, socket_t socket_id, uint16_t delay);


static void TCPP__send_ack(pack in_pack, socket_t socket_id);


static void TCPP__handle_ack(uint8_t seq, socket_t socket_id);
#line 98
static inline void TCPP__srv_initSynAck(pack in_pack);


static inline void TCPP__srv_toEstablished(socket_t socket_id);


static void TCPP__srv_handleData(pack in_pack, socket_t socket_id);


static inline void TCPP__srv_initFinAck(socket_t socket_id);

static void TCPP__srv_send_data(socket_t socket_id);







static inline void TCPP__cli_synAck_recieved(pack in_pack);


static void TCPP__cli_sendData(void );


static inline void TCPP__cli_interpretAck(pack in_pack);





static inline void TCPP__cli_timeWait(void );






static void TCPP__init_socket(socket_t *new_socket, uint8_t local_port, uint8_t dest, uint8_t dest_port);






static socket_t TCPP__get_socket(TCPP__TCPpacket tcpack);



static void TCPP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);


static void TCPP__makeTCpack(TCPP__TCPpacket *packet, uint8_t src, uint8_t dest, uint8_t srcp, uint8_t destp, uint8_t seq, uint8_t ack, uint8_t flag, uint8_t advwin, uint8_t *payload, uint8_t length);



static void TCPP__dumpRcvdbuff(socket_t socket_id);
#line 167
static void TCPP__TCP__handle_packet(pack in_pack);
#line 252
static void TCPP__send_packet(pack in_pack, socket_t socket_id, uint16_t delay);
#line 281
static void TCPP__send_ack(pack in_pack, socket_t socket_id);
#line 309
static void TCPP__handle_ack(uint8_t seq, socket_t socket_id);
#line 338
static inline void TCPP__Timer__fired(void );
#line 492
static inline void TCPP__events__fired(void );
#line 506
static void TCPP__TCP__init_server(uint8_t port);






static inline void TCPP__srv_initSynAck(pack in_pack);
#line 551
static inline void TCPP__srv_toEstablished(socket_t socket_id);




static void TCPP__srv_handleData(pack in_pack, socket_t socket_id);
#line 608
static inline void TCPP__srv_initFinAck(socket_t socket_id);
#line 622
static void TCPP__TCP__srv_send(uint8_t target, uint8_t *msg, uint8_t size);
#line 652
static void TCPP__srv_send_data(socket_t socket_id);
#line 701
static inline void TCPP__TCP__init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer);
#line 745
static inline void TCPP__TCP__cli_connect(uint8_t port);
#line 769
static void TCPP__TCP__cli_send(uint8_t *msg, uint8_t size);
#line 795
static inline void TCPP__cli_synAck_recieved(pack in_pack);
#line 824
static void TCPP__cli_sendData(void );
#line 871
static inline void TCPP__cli_interpretAck(pack in_pack);
#line 906
static inline void TCPP__cli_timeWait(void );
#line 922
static void TCPP__init_socket(socket_t *new_socket, uint8_t local_port, uint8_t dest, uint8_t dest_port);
#line 966
static socket_t TCPP__get_socket(TCPP__TCPpacket tcpack);
#line 986
static void TCPP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);








static void TCPP__makeTCpack(TCPP__TCPpacket *packet, uint8_t src, uint8_t dest, uint8_t srcp, uint8_t destp, uint8_t seq, uint8_t ack, uint8_t flag, uint8_t advwin, uint8_t *payload, uint8_t length);
#line 1025
static void TCPP__dumpRcvdbuff(socket_t socket_id);







static socket_store_t *TCPP__TCP__getsoc(uint8_t clientId);
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[1000];


uint16_t /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[1000];




#line 20
typedef struct /*TCPC.sendQueue*/HashmapC__4__hashmapEntry {
  uint32_t key;
  /*TCPC.sendQueue*/HashmapC__4__t value;
} /*TCPC.sendQueue*/HashmapC__4__hashmapEntry;

/*TCPC.sendQueue*/HashmapC__4__hashmapEntry /*TCPC.sendQueue*/HashmapC__4__map[1000][40];
uint32_t /*TCPC.sendQueue*/HashmapC__4__keys[1000][40];
uint16_t /*TCPC.sendQueue*/HashmapC__4__numofVals[1000];


static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash2(uint32_t k);


static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash3(uint32_t k);



static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash(uint32_t k, uint32_t i);



static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__insert(uint32_t k, /*TCPC.sendQueue*/HashmapC__4__t input);
#line 76
static inline void /*TCPC.sendQueue*/HashmapC__4__removeFromKeyList(uint32_t k);
#line 109
static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__remove(uint32_t k);
#line 130
static /*TCPC.sendQueue*/HashmapC__4__t /*TCPC.sendQueue*/HashmapC__4__Hashmap__get(uint32_t k);
#line 143
static inline bool /*TCPC.sendQueue*/HashmapC__4__Hashmap__contains(uint32_t k);
#line 166
static inline uint32_t */*TCPC.sendQueue*/HashmapC__4__Hashmap__getKeys(void );



static inline uint16_t /*TCPC.sendQueue*/HashmapC__4__Hashmap__size(void );
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void RoomP__Timert__startOneShot(uint32_t dt);
# 13 "dataStructures/interfaces/Hashmap.nc"
static RoomP__clients__t RoomP__clients__get(uint32_t key);
#line 11
static void RoomP__clients__insert(uint32_t key, RoomP__clients__t input);





static uint32_t *RoomP__clients__getKeys(void );
#line 14
static bool RoomP__clients__contains(uint32_t key);

static uint16_t RoomP__clients__size(void );
# 10 "lib/interfaces/TCP.nc"
static socket_store_t *RoomP__TCP__getsoc(uint8_t clientId);
#line 5
static void RoomP__TCP__init_server(uint8_t port);
#line 4
static void RoomP__TCP__handle_packet(pack in_pack);




static void RoomP__TCP__srv_send(uint8_t target, uint8_t *msg, uint8_t size);
# 13 "lib/modules/RoomP.nc"
uint8_t RoomP__buffer[1000][128];
uint8_t RoomP__relNode[1000];
char RoomP__usr1[1000][16];
char RoomP__usr2[1000][16];
char RoomP__usr3[1000][16];
char RoomP__usr4[1000][16];

static inline void RoomP__Room__handle_packet(pack *in_pack);
#line 32
static inline void RoomP__Timert__fired(void );
#line 195
static inline void RoomP__Room__start(void );
# 15 "dataStructures/modules/HashmapC.nc"
uint16_t /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[1000];


uint16_t /*RoomC.clients*/HashmapC__5__EMPTY_KEY[1000];




#line 20
typedef struct /*RoomC.clients*/HashmapC__5__hashmapEntry {
  uint32_t key;
  /*RoomC.clients*/HashmapC__5__t value;
} /*RoomC.clients*/HashmapC__5__hashmapEntry;

/*RoomC.clients*/HashmapC__5__hashmapEntry /*RoomC.clients*/HashmapC__5__map[1000][4];
uint32_t /*RoomC.clients*/HashmapC__5__keys[1000][4];
uint16_t /*RoomC.clients*/HashmapC__5__numofVals[1000];


static inline uint32_t /*RoomC.clients*/HashmapC__5__hash2(uint32_t k);


static inline uint32_t /*RoomC.clients*/HashmapC__5__hash3(uint32_t k);



static inline uint32_t /*RoomC.clients*/HashmapC__5__hash(uint32_t k, uint32_t i);



static void /*RoomC.clients*/HashmapC__5__Hashmap__insert(uint32_t k, /*RoomC.clients*/HashmapC__5__t input);
#line 130
static /*RoomC.clients*/HashmapC__5__t /*RoomC.clients*/HashmapC__5__Hashmap__get(uint32_t k);
#line 143
static inline bool /*RoomC.clients*/HashmapC__5__Hashmap__contains(uint32_t k);
#line 166
static inline uint32_t */*RoomC.clients*/HashmapC__5__Hashmap__getKeys(void );



static inline uint16_t /*RoomC.clients*/HashmapC__5__Hashmap__size(void );
# 7 "lib/interfaces/TCP.nc"
static void ChatCliP__TCP__cli_connect(uint8_t port);


static socket_store_t *ChatCliP__TCP__getsoc(uint8_t clientId);
#line 8
static void ChatCliP__TCP__cli_send(uint8_t *msg, uint8_t size);
#line 4
static void ChatCliP__TCP__handle_packet(pack in_pack);
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void ChatCliP__Timer__startOneShot(uint32_t dt);
# 13 "lib/modules/ChatCliP.nc"
char ChatCliP__commandBuffer[1000][256];


uint8_t ChatCliP__cmdB_size[1000];









static inline void ChatCliP__interpret_cmd(void );







static inline void ChatCliP__ChatCli__handle_packet(pack *in_pack);







static inline void ChatCliP__Timer__fired(void );
#line 66
static inline void ChatCliP__ChatCli__handle_cmd(uint8_t *payload);
#line 93
static inline void ChatCliP__interpret_cmd(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
CommandHandlerP__Pool__t * 


CommandHandlerP__Pool__get(void );
#line 61
static bool CommandHandlerP__Pool__empty(void );
#line 89
static error_t CommandHandlerP__Pool__put(
#line 85
CommandHandlerP__Pool__t * newVal);
# 97 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static error_t CommandHandlerP__Queue__enqueue(
#line 93
CommandHandlerP__Queue__t  newVal);
#line 88
static 
#line 86
CommandHandlerP__Queue__t  

CommandHandlerP__Queue__dequeue(void );
#line 50
static bool CommandHandlerP__Queue__empty(void );
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


CommandHandlerP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CommandHandlerP__processCommand__postTask(void );
# 6 "lib/interfaces/CommandHandler.nc"
static void CommandHandlerP__CommandHandler__printLinkState(void );
#line 4
static void CommandHandlerP__CommandHandler__printNeighbors(void );




static void CommandHandlerP__CommandHandler__setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2);
#line 8
static void CommandHandlerP__CommandHandler__setTestServer(uint8_t port);

static void CommandHandlerP__CommandHandler__setAppServer(void );
#line 5
static void CommandHandlerP__CommandHandler__printRouteTable(void );
#line 3
static void CommandHandlerP__CommandHandler__ping(uint16_t destination, uint8_t *payload);







static void CommandHandlerP__CommandHandler__setAppClient(uint8_t *payload);
# 22 "lib/modules/CommandHandlerP.nc"
enum CommandHandlerP____nesc_unnamed4356 {
#line 22
  CommandHandlerP__processCommand = 11U
};
#line 22
typedef int CommandHandlerP____nesc_sillytask_processCommand[CommandHandlerP__processCommand];
#line 22
static inline void CommandHandlerP__processCommand__runTask(void );
#line 106
static inline message_t *CommandHandlerP__Receive__receive(message_t *raw_msg, void *payload, uint8_t len);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[1000];
uint8_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[1000];
/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t * /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[1000][20];
/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[1000][20];

static inline error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Init__init(void );









static inline bool /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__empty(void );
#line 88
static inline /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t */*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__put(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t *newVal);
# 48 "/opt/tinyos-main/tos/system/QueueC.nc"
/*CommandHandlerC.QueueC*/QueueC__0__queue_t  /*CommandHandlerC.QueueC*/QueueC__0__queue[1000][20];
uint8_t /*CommandHandlerC.QueueC*/QueueC__0__head[1000];
uint8_t /*CommandHandlerC.QueueC*/QueueC__0__tail[1000];
uint8_t /*CommandHandlerC.QueueC*/QueueC__0__size[1000];

static inline bool /*CommandHandlerC.QueueC*/QueueC__0__Queue__empty(void );







static inline uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*CommandHandlerC.QueueC*/QueueC__0__queue_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__head(void );



static void /*CommandHandlerC.QueueC*/QueueC__0__printQueue(void );
#line 89
static inline /*CommandHandlerC.QueueC*/QueueC__0__queue_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 101
static inline error_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__enqueue(/*CommandHandlerC.QueueC*/QueueC__0__queue_t newVal);
# 80 "/opt/tinyos-main/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 80
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 132
static inline void expand_heap(heap_t *heap)
#line 132
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 146
{
  int findex = heap->size;

#line 148
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 90
static inline int is_empty(heap_t *heap)
#line 90
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 94
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 98
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 140 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 140
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 144
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 150
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 116 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 116
{
  return SimMoteP__isOn[sim_node()];
}

# 172 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/opt/tinyos-main/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/opt/tinyos-main/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 299 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 299
{
  dummy = 5;
}

# 50 "/opt/tinyos-main/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(62U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC__Model__receive(m);
}

static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC__active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 185
static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void )
#line 185
{
  return 28;
}

# 89 "/opt/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__amAddress(void )
#line 89
{
  return ActiveMessageAddressC__ActiveMessageAddress__amAddress();
}

# 57 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC__amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC__AMPacket__address(void )
#line 136
{
  return TossimActiveMessageC__amAddress();
}

#line 160
static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC__AMPacket__destination(amsg) == TossimActiveMessageC__AMPacket__address() || 
  TossimActiveMessageC__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 3 "lib/interfaces/IP.nc"
inline static void Node__IP__packet_recived(pack in_pack){
#line 3
  IPP__IP__packet_recived(in_pack);
#line 3
}
#line 3
# 222 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void ChatCliP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(9U, dt);
#line 73
}
#line 73
# 4 "lib/interfaces/TCP.nc"
inline static void ChatCliP__TCP__handle_packet(pack in_pack){
#line 4
  TCPP__TCP__handle_packet(in_pack);
#line 4
}
#line 4
# 34 "lib/modules/ChatCliP.nc"
static inline void ChatCliP__ChatCli__handle_packet(pack *in_pack)
#line 34
{


  ChatCliP__TCP__handle_packet(*in_pack);

  ChatCliP__Timer__startOneShot(1);
}

# 4 "lib/interfaces/ChatCli.nc"
inline static void Node__ChatCli__handle_packet(pack *in_pack){
#line 4
  ChatCliP__ChatCli__handle_packet(in_pack);
#line 4
}
#line 4
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 4 "lib/interfaces/TCP.nc"
inline static void RoomP__TCP__handle_packet(pack in_pack){
#line 4
  TCPP__TCP__handle_packet(in_pack);
#line 4
}
#line 4
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void RoomP__Timert__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(8U, dt);
#line 73
}
#line 73
# 20 "lib/modules/RoomP.nc"
static inline void RoomP__Room__handle_packet(pack *in_pack)
#line 20
{
  if (__nesc_ntoh_uint8(in_pack->payload[6].nxdata) != 3) {
      RoomP__TCP__handle_packet(*in_pack);
      return;
    }
  RoomP__relNode[sim_node()] = __nesc_ntoh_uint16(in_pack->src.nxdata);
  RoomP__Timert__startOneShot(1);


  RoomP__TCP__handle_packet(*in_pack);
}

# 2 "lib/interfaces/Room.nc"
inline static void Node__Room__handle_packet(pack *in_pack){
#line 2
  RoomP__Room__handle_packet(in_pack);
#line 2
}
#line 2
# 64 "Node.nc"
static inline message_t *Node__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 64
{
  pack *myMsg;

  if (len != sizeof(pack )) {
      sim_log_debug(110U, GENERAL_CHANNEL, "Unknown Packet Type %d\n", len);
      return msg;
    }


  myMsg = (pack *)payload;

  if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_TCP) {
      if (TOS_NODE_ID == 1) {
          Node__Room__handle_packet(myMsg);
        }
      else 
#line 78
        {
          Node__ChatCli__handle_packet(myMsg);
        }


      return msg;
    }

  Node__IP__packet_recived(*myMsg);
  return msg;










  sim_log_debug(111U, GENERAL_CHANNEL, "Package Payload: %s\n", myMsg->payload);
  return msg;
}

# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t */*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]) {
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t *rval = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[sim_node()][/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()]];

#line 91
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[sim_node()][/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()]] = (void *)0;
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]--;
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()]++;
      if (/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()] == 20) {
          /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()] = 0;
        }
      sim_log_debug(300U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static CommandHandlerP__Pool__t * CommandHandlerP__Pool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CommandHandlerP__processCommand__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(CommandHandlerP__processCommand);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 65 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__size(void )
#line 61
{
  return /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()];
}

#line 101
static inline error_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__enqueue(/*CommandHandlerC.QueueC*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*CommandHandlerC.QueueC*/QueueC__0__Queue__size() < /*CommandHandlerC.QueueC*/QueueC__0__Queue__maxSize()) {
      sim_log_debug(308U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()]);
      /*CommandHandlerC.QueueC*/QueueC__0__queue[sim_node()][/*CommandHandlerC.QueueC*/QueueC__0__tail[sim_node()]] = newVal;
      /*CommandHandlerC.QueueC*/QueueC__0__tail[sim_node()]++;
      if (/*CommandHandlerC.QueueC*/QueueC__0__tail[sim_node()] == 20) {
#line 106
        /*CommandHandlerC.QueueC*/QueueC__0__tail[sim_node()] = 0;
        }
#line 107
      /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()]++;
      /*CommandHandlerC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t CommandHandlerP__Queue__enqueue(CommandHandlerP__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*CommandHandlerC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline bool /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__empty(void )
#line 75
{
  sim_log_debug(298U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]);
  return /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()] == 0;
}

# 61 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static bool CommandHandlerP__Pool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 106 "lib/modules/CommandHandlerP.nc"
static inline message_t *CommandHandlerP__Receive__receive(message_t *raw_msg, void *payload, uint8_t len)
#line 106
{
  if (!CommandHandlerP__Pool__empty()) {
      CommandHandlerP__Queue__enqueue(raw_msg);
      CommandHandlerP__processCommand__postTask();
      return CommandHandlerP__Pool__get();
    }
  return raw_msg;
}

# 212 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Receive__receive(am_id_t arg_0x7f38004aae30, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7f38004aae30) {
#line 78
    case 6:
#line 78
      __nesc_result = Node__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 99:
#line 78
      __nesc_result = CommandHandlerP__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC__Receive__default__receive(arg_0x7f38004aae30, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 139 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 75 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline bool /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__empty(void )
#line 75
{
  sim_log_debug(222U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]);
  return /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()] == 0;
}

# 61 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t */*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]) {
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t *rval = /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[sim_node()][/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()]];

#line 91
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[sim_node()][/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()]] = (void *)0;
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]--;
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()]++;
      if (/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()] == 20) {
          /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()] = 0;
        }
      sim_log_debug(224U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__t * /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__get(void ){
#line 97
  struct sendInfo *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__size(void )
#line 61
{
  return /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()];
}

#line 101
static inline error_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__enqueue(/*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t newVal)
#line 101
{
  if (/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__size() < /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__maxSize()) {
      sim_log_debug(232U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()]);
      /*IPC.SimpleSendC.QueueC*/QueueC__3__queue[sim_node()][/*IPC.SimpleSendC.QueueC*/QueueC__3__tail[sim_node()]] = newVal;
      /*IPC.SimpleSendC.QueueC*/QueueC__3__tail[sim_node()]++;
      if (/*IPC.SimpleSendC.QueueC*/QueueC__3__tail[sim_node()] == 20) {
#line 106
        /*IPC.SimpleSendC.QueueC*/QueueC__3__tail[sim_node()] = 0;
        }
#line 107
      /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()]++;
      /*IPC.SimpleSendC.QueueC*/QueueC__3__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__enqueue(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 169 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning;
}

# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(5U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 113 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 113
{
  return SimMoteP__startTime[sim_node()];
}

# 127 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4322 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 89 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 3 "lib/interfaces/IP.nc"
inline static void TCPP__IP__packet_recived(pack in_pack){
#line 3
  IPP__IP__packet_recived(in_pack);
#line 3
}
#line 3
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 4 "lib/interfaces/SimpleSend.nc"
inline static error_t NeighborDiscoveryP__Sender__send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__SimpleSend__send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 11 "dataStructures/interfaces/Hashmap.nc"
inline static void NeighborDiscoveryP__Neighbors__insert(uint32_t key, NeighborDiscoveryP__Neighbors__t input){
#line 11
  /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__insert(key, input);
#line 11
}
#line 11


inline static NeighborDiscoveryP__Neighbors__t NeighborDiscoveryP__Neighbors__get(uint32_t key){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 29 "lib/modules/NeighborDiscoveryP.nc"
static inline void NeighborDiscoveryP__NeighborDiscovery__disc_message_recieved(pack in_pack)
#line 29
{
  if (NeighborDiscoveryP__Neighbors__get(__nesc_ntoh_uint16(in_pack.src.nxdata)) == 0) {
      NeighborDiscoveryP__changed[sim_node()] = 1;
    }
  NeighborDiscoveryP__Neighbors__insert(__nesc_ntoh_uint16(in_pack.src.nxdata), 2);
  if (__nesc_ntoh_uint8(in_pack.protocol.nxdata) == 1) {
      return;
    }


  __nesc_hton_uint8(NeighborDiscoveryP__discPack[sim_node()].protocol.nxdata, 1);

  NeighborDiscoveryP__Sender__send(NeighborDiscoveryP__discPack[sim_node()], __nesc_ntoh_uint16(in_pack.src.nxdata));
}

# 5 "lib/interfaces/NeighborDiscovery.nc"
inline static void LinkStateRoutingP__ND__disc_message_recieved(pack in_pack){
#line 5
  NeighborDiscoveryP__NeighborDiscovery__disc_message_recieved(in_pack);
#line 5
}
#line 5
# 4 "lib/interfaces/SimpleSend.nc"
inline static error_t FloodingP__Sender__send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__SimpleSend__send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 11 "dataStructures/interfaces/Hashmap.nc"
inline static void FloodingP__prior_packets__insert(uint32_t key, FloodingP__prior_packets__t input){
#line 11
  /*FloodingC.HashmapC*/HashmapC__0__Hashmap__insert(key, input);
#line 11
}
#line 11
# 33 "dataStructures/modules/HashmapC.nc"
static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*FloodingC.HashmapC*/HashmapC__0__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*FloodingC.HashmapC*/HashmapC__0__hash2(k) + i * /*FloodingC.HashmapC*/HashmapC__0__hash3(k)) % /*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[sim_node()];
}

#line 130
static inline /*FloodingC.HashmapC*/HashmapC__0__t /*FloodingC.HashmapC*/HashmapC__0__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*FloodingC.HashmapC*/HashmapC__0__hash(k, i);
      if (/*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].key == k) {
        return /*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[sim_node()]);


  return /*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][0].value;
}

# 13 "dataStructures/interfaces/Hashmap.nc"
inline static FloodingP__prior_packets__t FloodingP__prior_packets__get(uint32_t key){
#line 13
  unsigned short __nesc_result;
#line 13

#line 13
  __nesc_result = /*FloodingC.HashmapC*/HashmapC__0__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 39 "lib/modules/FloodingP.nc"
static inline void FloodingP__Flooding__send_down_line(pack in_pack)
#line 39
{
  unsigned char *__nesc_temp42;

#line 41
  if (FloodingP__prior_packets__get(__nesc_ntoh_uint16(in_pack.src.nxdata)) == __nesc_ntoh_uint16(in_pack.seq.nxdata)) {
      sim_log_debug(114U, FLOODING_CHANNEL, "NODE %d RECIEVED PACKET IT HAD SEEN BEFORE\n", TOS_NODE_ID);
    }
  else {
#line 43
    if (__nesc_ntoh_uint8(in_pack.TTL.nxdata) == 0) {
        sim_log_debug(115U, FLOODING_CHANNEL, "NODE %d RECIEVED DEAD PACKET\n", TOS_NODE_ID);
      }
    else 
#line 45
      {

        (__nesc_temp42 = in_pack.TTL.nxdata, __nesc_hton_uint8(__nesc_temp42, __nesc_ntoh_uint8(__nesc_temp42) - 1));
        FloodingP__prior_packets__insert(__nesc_ntoh_uint16(in_pack.src.nxdata), __nesc_ntoh_uint16(in_pack.seq.nxdata));

        FloodingP__Sender__send(in_pack, AM_BROADCAST_ADDR);
        sim_log_debug(116U, FLOODING_CHANNEL, "NODE %d RESENDING PACKET\n", TOS_NODE_ID);
      }
    }
}

# 5 "lib/interfaces/Flooding.nc"
inline static void LinkStateRoutingP__Flooding__send_down_line(pack in_pack){
#line 5
  FloodingP__Flooding__send_down_line(in_pack);
#line 5
}
#line 5
# 122 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__LSArecieved(pack in_pack)
#line 122
{
  uint8_t connections[18];
  uint8_t node = __nesc_ntoh_uint8(in_pack.payload[0].nxdata);
  uint8_t size = __nesc_ntoh_uint8(in_pack.payload[1].nxdata);

#line 126
  LinkStateRoutingP__topography[sim_node()][node][0].dest = size;
  if (LinkStateRoutingP__topoSize[sim_node()] < node) {
      LinkStateRoutingP__topoSize[sim_node()] = node;
    }
  while (size > 0) {
      size--;
      LinkStateRoutingP__topography[sim_node()][node][size + 1].dest = __nesc_ntoh_uint8(in_pack.payload[size + 2].nxdata);
      LinkStateRoutingP__topography[sim_node()][node][size + 1].cost = 1;
    }
  LinkStateRoutingP__topoChanged[sim_node()] = 1;
}

#line 111
static inline void LinkStateRoutingP__LinkStateRouting__packet_recived(pack in_pack)
#line 111
{
  if (__nesc_ntoh_uint8(in_pack.protocol.nxdata) == 2) {

      LinkStateRoutingP__LSArecieved(in_pack);
      LinkStateRoutingP__Flooding__send_down_line(in_pack);
    }
  else {
      LinkStateRoutingP__ND__disc_message_recieved(in_pack);
    }
}

# 3 "lib/interfaces/LinkStateRouting.nc"
inline static void IPP__LinkStateRouting__packet_recived(pack in_pack){
#line 3
  LinkStateRoutingP__LinkStateRouting__packet_recived(in_pack);
#line 3
}
#line 3
# 75 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline bool /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  sim_log_debug(158U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]);
  return /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()] == 0;
}

# 61 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t */*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]) {
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t *rval = /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[sim_node()][/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()]];

#line 91
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[sim_node()][/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()]] = (void *)0;
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]--;
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()]++;
      if (/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()] == 20) {
          /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()] = 0;
        }
      sim_log_debug(160U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__t * /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__get(void ){
#line 97
  struct sendInfo *__nesc_result;
#line 97

#line 97
  __nesc_result = /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__size(void )
#line 61
{
  return /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()];
}

#line 101
static inline error_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__enqueue(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t newVal)
#line 101
{
  if (/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__size() < /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__maxSize()) {
      sim_log_debug(168U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()]);
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[sim_node()][/*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[sim_node()]] = newVal;
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[sim_node()]++;
      if (/*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[sim_node()] == 20) {
#line 106
        /*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[sim_node()] = 0;
        }
#line 107
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()]++;
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__enqueue(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 75 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline bool /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__empty(void )
#line 75
{
  sim_log_debug(181U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]);
  return /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()] == 0;
}

# 61 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t */*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]) {
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t *rval = /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[sim_node()][/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()]];

#line 91
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[sim_node()][/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()]] = (void *)0;
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]--;
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()]++;
      if (/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()] == 20) {
          /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()] = 0;
        }
      sim_log_debug(183U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__t * /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__get(void ){
#line 97
  struct sendInfo *__nesc_result;
#line 97

#line 97
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__maxSize(void )
#line 65
{
  return 20;
}

#line 61
static inline uint8_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__size(void )
#line 61
{
  return /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()];
}

#line 101
static inline error_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__enqueue(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t newVal)
#line 101
{
  if (/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__size() < /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__maxSize()) {
      sim_log_debug(191U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()]);
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[sim_node()][/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[sim_node()]] = newVal;
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[sim_node()]++;
      if (/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[sim_node()] == 20) {
#line 106
        /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[sim_node()] = 0;
        }
#line 107
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()]++;
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__enqueue(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 76 "dataStructures/modules/HashmapC.nc"
static inline void /*IPC.HashmapC*/HashmapC__3__removeFromKeyList(uint32_t k)
#line 76
{
  int i;
  int j;

#line 79
  sim_log_debug(214U, HASHMAP_CHANNEL, "Removing entry %d\n", k);
  for (i = 0; i < /*IPC.HashmapC*/HashmapC__3__numofVals[sim_node()]; i++) {



      if (/*IPC.HashmapC*/HashmapC__3__keys[sim_node()][i] == k) {
          sim_log_debug(215U, HASHMAP_CHANNEL, "Key found at %d\n", i);


          for (j = i; j < /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[sim_node()]; j++) {

              if (/*IPC.HashmapC*/HashmapC__3__keys[sim_node()][j] == /*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[sim_node()]) {
#line 90
                break;
                }
#line 91
              sim_log_debug(216U, HASHMAP_CHANNEL, "Moving %d to %d\n", j, j + 1);
              sim_log_debug(217U, HASHMAP_CHANNEL, "Replacing %d with %d\n", /*IPC.HashmapC*/HashmapC__3__keys[sim_node()][j], /*IPC.HashmapC*/HashmapC__3__keys[sim_node()][j + 1]);
              /*IPC.HashmapC*/HashmapC__3__keys[sim_node()][j] = /*IPC.HashmapC*/HashmapC__3__keys[sim_node()][j + 1];
            }



          /*IPC.HashmapC*/HashmapC__3__keys[sim_node()][/*IPC.HashmapC*/HashmapC__3__numofVals[sim_node()]] = /*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[sim_node()];

          /*IPC.HashmapC*/HashmapC__3__numofVals[sim_node()]--;
          sim_log_debug(218U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

#line 33
static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*IPC.HashmapC*/HashmapC__3__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*IPC.HashmapC*/HashmapC__3__hash2(k) + i * /*IPC.HashmapC*/HashmapC__3__hash3(k)) % /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[sim_node()];
}

#line 109
static inline void /*IPC.HashmapC*/HashmapC__3__Hashmap__remove(uint32_t k)
#line 109
{
  uint32_t i = 0;
#line 110
  uint32_t j = 0;
  bool removed = 0;

#line 112
  do {
      j = /*IPC.HashmapC*/HashmapC__3__hash(k, i);
      if (/*IPC.HashmapC*/HashmapC__3__map[sim_node()][j].key == k) {
          /*IPC.HashmapC*/HashmapC__3__map[sim_node()][j].key = 0;
          removed = 1;
          break;
        }
      i++;
    }
  while (
#line 120
  i < /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[sim_node()]);
  if (removed) 
    {
      /*IPC.HashmapC*/HashmapC__3__removeFromKeyList(k);
    }
}

# 12 "dataStructures/interfaces/Hashmap.nc"
inline static void IPP__Unconfirmed__remove(uint32_t key){
#line 12
  /*IPC.HashmapC*/HashmapC__3__Hashmap__remove(key);
#line 12
}
#line 12
# 513 "lib/modules/TCPP.nc"
static inline void TCPP__srv_initSynAck(pack in_pack)
#line 513
{
  socket_t socket_id = 0;
  socket_store_t *active_socket;
  TCPP__TCPpacket *tcpack = (TCPP__TCPpacket *)in_pack.payload;
  pack send_pack;
  uint8_t i;

  socket_id = TCPP__get_socket(*tcpack);



  if (socket_id != 0) {
      return;
    }
  socket_id = 1;

  TCPP__init_socket(&socket_id, tcpack->destp, tcpack->src, tcpack->srcp);
  active_socket = &TCPP__sockets[sim_node()][socket_id];
  active_socket->state = SYN_RCVD;

  TCPP__socket_seq[sim_node()][socket_id] = 1;
  TCPP__socket_nextAck[sim_node()][socket_id] = __nesc_ntoh_uint16(in_pack.seq.nxdata) + 1;
  TCPP__socket_highAck[sim_node()][socket_id] = __nesc_ntoh_uint16(in_pack.seq.nxdata);

  TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), __nesc_ntoh_uint16(in_pack.seq.nxdata), __nesc_ntoh_uint16(in_pack.seq.nxdata), TCPP__SYNACK, SOCKET_BUFFER_SIZE, 0, 0);

  TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, TCPP__socket_seq[sim_node()][socket_id], (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TCPP__send_packet(send_pack, socket_id, 0);

  for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
      active_socket->rcvdBuff[i] = 0;
    }

  TCPP__socket_seq[sim_node()][socket_id]++;

  sim_log_debug(243U, TRANSPORT_CHANNEL, "Synack sent to node %hhu, socket %hhu\n", __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), socket_id);
}

# 33 "dataStructures/modules/HashmapC.nc"
static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*TCPC.sendQueue*/HashmapC__4__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*TCPC.sendQueue*/HashmapC__4__hash2(k) + i * /*TCPC.sendQueue*/HashmapC__4__hash3(k)) % /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()];
}

#line 143
static inline bool /*TCPC.sendQueue*/HashmapC__4__Hashmap__contains(uint32_t k)
#line 143
{
  uint32_t i = 0;
#line 144
  uint32_t j = 0;






  do {
      j = /*TCPC.sendQueue*/HashmapC__4__hash(k, i);
      if (/*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 155
      i++;
    }
  while (
#line 156
  i < /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

# 14 "dataStructures/interfaces/Hashmap.nc"
inline static bool TCPP__sendQueue__contains(uint32_t key){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = /*TCPC.sendQueue*/HashmapC__4__Hashmap__contains(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 76 "dataStructures/modules/HashmapC.nc"
static inline void /*TCPC.sendQueue*/HashmapC__4__removeFromKeyList(uint32_t k)
#line 76
{
  int i;
  int j;

#line 79
  sim_log_debug(258U, HASHMAP_CHANNEL, "Removing entry %d\n", k);
  for (i = 0; i < /*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()]; i++) {



      if (/*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][i] == k) {
          sim_log_debug(259U, HASHMAP_CHANNEL, "Key found at %d\n", i);


          for (j = i; j < /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()]; j++) {

              if (/*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][j] == /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()]) {
#line 90
                break;
                }
#line 91
              sim_log_debug(260U, HASHMAP_CHANNEL, "Moving %d to %d\n", j, j + 1);
              sim_log_debug(261U, HASHMAP_CHANNEL, "Replacing %d with %d\n", /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][j], /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][j + 1]);
              /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][j] = /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][j + 1];
            }



          /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][/*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()]] = /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()];

          /*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()]--;
          sim_log_debug(262U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

# 164 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void TCPP__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(6U);
#line 78
}
#line 78
# 551 "lib/modules/TCPP.nc"
static inline void TCPP__srv_toEstablished(socket_t socket_id)
#line 551
{
  TCPP__sockets[sim_node()][socket_id].state = ESTABLISHED;
}

#line 608
static inline void TCPP__srv_initFinAck(socket_t socket_id)
#line 608
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][socket_id];
  pack send_pack;

  TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), 0, 0, TCPP__FIN, SOCKET_BUFFER_SIZE, 0, 0);
  TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, 1, (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TCPP__send_packet(send_pack, socket_id, 0);

  active_socket->state = LAST_ACK;
  sim_log_debug(246U, TRANSPORT_CHANNEL, "FINACK TO  %hhu\n", __nesc_ntoh_uint16(active_socket->dest.addr.nxdata));
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 189 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t TCPP__Timer__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(6U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 194 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].t0;
}

# 144 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t TCPP__Timer__gett0(void ){
#line 144
  unsigned int __nesc_result;
#line 144

#line 144
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(6U);
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 199 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].dt;
}

# 151 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t TCPP__Timer__getdt(void ){
#line 151
  unsigned int __nesc_result;
#line 151

#line 151
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(6U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 92
inline static bool TCPP__Timer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(6U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 11 "dataStructures/interfaces/Hashmap.nc"
inline static void TCPP__sendQueue__insert(uint32_t key, TCPP__sendQueue__t input){
#line 11
  /*TCPC.sendQueue*/HashmapC__4__Hashmap__insert(key, input);
#line 11
}
#line 11
# 795 "lib/modules/TCPP.nc"
static inline void TCPP__cli_synAck_recieved(pack in_pack)
#line 795
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][0];
  TCPP__TCPpacket *temp = (TCPP__TCPpacket *)in_pack.payload;
  tcpQueueInfo info;


  sim_log_debug(251U, TRANSPORT_CHANNEL, "synack recieved from %hhu, %hhu\n", __nesc_ntoh_uint16(in_pack.src.nxdata), temp->seq);


  TCPP__handle_ack(temp->seq, 0);

  active_socket->state = ESTABLISHED;
  active_socket->effectiveWindow = temp->advwin;

  __nesc_hton_uint16(info.packet.seq.nxdata, 0);
  info.socket_id = 0;
  info.seq = 0;
  info.time = active_socket->RTT;
  TCPP__sendQueue__insert(info.time, info);

  if (!TCPP__Timer__isRunning()) {
      TCPP__Timer__startOneShot(info.time);
    }
  else {
#line 817
    if (TCPP__Timer__getdt() + TCPP__Timer__gett0() > TCPP__Timer__getNow() + info.time) {
        TCPP__Timer__startOneShot(info.time);
      }
    }
  TCPP__send_ack(in_pack, 0);
}

# 170 "dataStructures/modules/HashmapC.nc"
static inline uint16_t /*TCPC.sendQueue*/HashmapC__4__Hashmap__size(void )
#line 170
{
  return /*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()];
}

# 16 "dataStructures/interfaces/Hashmap.nc"
inline static uint16_t TCPP__sendQueue__size(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = /*TCPC.sendQueue*/HashmapC__4__Hashmap__size();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 871 "lib/modules/TCPP.nc"
static inline void TCPP__cli_interpretAck(pack in_pack)
#line 871
{
  TCPP__TCPpacket *temp;

  TCPP__handle_ack(__nesc_ntoh_uint16(in_pack.seq.nxdata), 0);

  temp = (TCPP__TCPpacket *)in_pack.payload;


  if (TCPP__sendQueue__size() == 0) {
      TCPP__sockets[sim_node()][0].effectiveWindow = temp->advwin;
    }
}

#line 906
static inline void TCPP__cli_timeWait(void )
#line 906
{
  sim_log_debug(253U, TRANSPORT_CHANNEL, "CLIENT IN TIME WAIT\n");
  TCPP__sockets[sim_node()][0].state = CLOSED;
  TCPP__sockets[sim_node()][0].flag = 0;
  sim_log_debug(254U, TRANSPORT_CHANNEL, "CLIENT CLOSED\n");
}

# 216 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Snoop__receive(am_id_t arg_0x7f38004a9a50, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC__Snoop__default__receive(arg_0x7f38004a9a50, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/opt/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(49U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 57
  SimSchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 120 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 125
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t Node__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC__Control__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 53 "Node.nc"
static inline void Node__AMControl__startDone(error_t err)
#line 53
{
  if (err == SUCCESS) {
      sim_log_debug(109U, GENERAL_CHANNEL, "Radio On\n");
    }
  else 
#line 56
    {

      Node__AMControl__start();
    }
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__startDone(error_t error){
#line 113
  Node__AMControl__startDone(error);
#line 113
}
#line 113
# 96 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__startDoneTask__runTask(void )
#line 96
{
  TossimPacketModelC__running[sim_node()] = TRUE;
  TossimPacketModelC__Control__startDone(SUCCESS);
}

# 62 "Node.nc"
static inline void Node__AMControl__stopDone(error_t err)
#line 62
{
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__stopDone(error_t error){
#line 138
  Node__AMControl__stopDone(error);
#line 138
}
#line 138
# 101 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__stopDoneTask__runTask(void )
#line 101
{
  TossimPacketModelC__running[sim_node()] = FALSE;
  TossimPacketModelC__Control__stopDone(SUCCESS);
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC__AMSend__sendDone(am_id_t arg_0x7f38004c4c70, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7f38004c4c70, msg, error);
#line 110
}
#line 110
# 103 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC__AMSend__sendDone(TossimActiveMessageC__AMPacket__type(msg), msg, result);
}

# 76 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC__Model__sendDone(msg, error);
#line 76
}
#line 76
# 82 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC__sendDoneTask__runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC__sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC__sending[sim_node()] = FALSE;
  TossimPacketModelC__Packet__sendDone(msg, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

# 548 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 548
{
}

# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
inline static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val){
#line 63
  CpmModelC__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 528 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__read_rssi_task__runTask(void )
{
  double noise = CpmModelC__packetNoise((void *)0);

#line 531
  CpmModelC__rssi[sim_node()] = FALSE;
  sim_log_debug(107U, "CpmModelC", "ReadRssi: noise %f\n", noise);


  CpmModelC__ReadRssi__readDone(SUCCESS, noise + 45);
}

# 53 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline bool /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()] == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static bool /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__put(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()] + /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[sim_node()][emptyIndex] = newVal;
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]++;
      sim_log_debug(161U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__put(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 69 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__head(void )
#line 69
{
  return /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[sim_node()][/*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()]];
}

#line 89
static inline /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__dequeue(void )
#line 89
{
  /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t t = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__head();

#line 91
  sim_log_debug(167U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()]);
  if (!/*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__empty()) {
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()]++;
      if (/*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()] == 20) {
#line 94
        /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()] = 0;
        }
#line 95
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()]--;
      /*FloodingC.SimpleSendC.QueueC*/QueueC__1__printQueue();
    }
  return t;
}

# 88 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__dequeue(void ){
#line 88
  struct sendInfo *__nesc_result;
#line 88

#line 88
  __nesc_result = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void * /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 118 "lib/modules/SimpleSendP.nc"
static inline error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__send(uint16_t src, uint16_t dest, pack *message)
#line 118
{
  if (!/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[sim_node()]) {



      pack *msg = (pack *)/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Packet__getPayload(&/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[sim_node()], sizeof(pack ));


      *msg = *message;


      if (/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__send(dest, &/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[sim_node()], sizeof(pack )) == SUCCESS) {

          /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[sim_node()] = TRUE;
          return SUCCESS;
        }
      else 
#line 133
        {

          sim_log_debug(123U, GENERAL_CHANNEL, "The radio is busy, or something\n");
          return FAIL;
        }
    }
  else 
#line 138
    {
      sim_log_debug(124U, GENERAL_CHANNEL, "The radio is busy");
      return EBUSY;
    }


  sim_log_debug(125U, GENERAL_CHANNEL, "FAILED!?");
  return FAIL;
}

# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__t  /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__head(void ){
#line 80
  struct sendInfo *__nesc_result;
#line 80

#line 80
  __nesc_result = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 74 "lib/modules/SimpleSendP.nc"
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__runTask(void )
#line 74
{


  if (!/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__empty() && !/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[sim_node()]) {
      sendInfo *info;




      info = /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__head();


      if (SUCCESS == /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__send(info->src, info->dest, & info->packet)) {

          /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__dequeue();
          /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__put(info);
        }
    }




  if (!/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__empty()) {
      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__postSendTask();
    }
}

# 139 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 150 "lib/modules/SimpleSendP.nc"
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__sendDone(message_t *msg, error_t error)
#line 150
{

  if (&/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[sim_node()] == msg) {
      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[sim_node()] = FALSE;
      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__postSendTask();
    }
}

# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 150 "lib/modules/SimpleSendP.nc"
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__sendDone(message_t *msg, error_t error)
#line 150
{

  if (&/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[sim_node()] == msg) {
      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[sim_node()] = FALSE;
      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__postSendTask();
    }
}

# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 150 "lib/modules/SimpleSendP.nc"
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__sendDone(message_t *msg, error_t error)
#line 150
{

  if (&/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[sim_node()] == msg) {
      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[sim_node()] = FALSE;
      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__postSendTask();
    }
}

# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(m, err);
}

# 215 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7f37ffd5a940, message_t * msg, error_t error){
#line 100
  switch (arg_0x7f37ffd5a940) {
#line 100
    case 0U:
#line 100
      /*FloodingC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 2U:
#line 100
      /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7f37ffd5a940, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg, FAIL);
}

#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 3 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 53 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline bool /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()] == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static bool /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__put(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()] + /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[sim_node()][emptyIndex] = newVal;
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]++;
      sim_log_debug(184U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__put(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 69 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__head(void )
#line 69
{
  return /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[sim_node()][/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()]];
}

#line 89
static inline /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__dequeue(void )
#line 89
{
  /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t t = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__head();

#line 91
  sim_log_debug(190U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()]);
  if (!/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__empty()) {
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()]++;
      if (/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()] == 20) {
#line 94
        /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()] = 0;
        }
#line 95
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()]--;
      /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__printQueue();
    }
  return t;
}

# 88 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__dequeue(void ){
#line 88
  struct sendInfo *__nesc_result;
#line 88

#line 88
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 6);
  return /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void * /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 118 "lib/modules/SimpleSendP.nc"
static inline error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__send(uint16_t src, uint16_t dest, pack *message)
#line 118
{
  if (!/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[sim_node()]) {



      pack *msg = (pack *)/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Packet__getPayload(&/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[sim_node()], sizeof(pack ));


      *msg = *message;


      if (/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__AMSend__send(dest, &/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[sim_node()], sizeof(pack )) == SUCCESS) {

          /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[sim_node()] = TRUE;
          return SUCCESS;
        }
      else 
#line 133
        {

          sim_log_debug(178U, GENERAL_CHANNEL, "The radio is busy, or something\n");
          return FAIL;
        }
    }
  else 
#line 138
    {
      sim_log_debug(179U, GENERAL_CHANNEL, "The radio is busy");
      return EBUSY;
    }


  sim_log_debug(180U, GENERAL_CHANNEL, "FAILED!?");
  return FAIL;
}

# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__t  /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__head(void ){
#line 80
  struct sendInfo *__nesc_result;
#line 80

#line 80
  __nesc_result = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 74 "lib/modules/SimpleSendP.nc"
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__runTask(void )
#line 74
{


  if (!/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__empty() && !/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[sim_node()]) {
      sendInfo *info;




      info = /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__head();


      if (SUCCESS == /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__send(info->src, info->dest, & info->packet)) {

          /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__dequeue();
          /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__put(info);
        }
    }




  if (!/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__empty()) {
      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__postSendTask();
    }
}

# 53 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline bool /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__empty(void )
#line 53
{
  return /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()] == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static bool /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__put(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()] + /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[sim_node()][emptyIndex] = newVal;
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]++;
      sim_log_debug(225U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__put(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 69 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__head(void )
#line 69
{
  return /*IPC.SimpleSendC.QueueC*/QueueC__3__queue[sim_node()][/*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()]];
}

#line 89
static inline /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__dequeue(void )
#line 89
{
  /*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t t = /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__head();

#line 91
  sim_log_debug(231U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()]);
  if (!/*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__empty()) {
      /*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()]++;
      if (/*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()] == 20) {
#line 94
        /*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()] = 0;
        }
#line 95
      /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()]--;
      /*IPC.SimpleSendC.QueueC*/QueueC__3__printQueue();
    }
  return t;
}

# 88 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__dequeue(void ){
#line 88
  struct sendInfo *__nesc_result;
#line 88

#line 88
  __nesc_result = /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(2U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(msg, dest);
  /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(msg, 6);
  return /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*IPC.SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void * /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 118 "lib/modules/SimpleSendP.nc"
static inline error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__send(uint16_t src, uint16_t dest, pack *message)
#line 118
{
  if (!/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[sim_node()]) {



      pack *msg = (pack *)/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Packet__getPayload(&/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[sim_node()], sizeof(pack ));


      *msg = *message;


      if (/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__AMSend__send(dest, &/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[sim_node()], sizeof(pack )) == SUCCESS) {

          /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[sim_node()] = TRUE;
          return SUCCESS;
        }
      else 
#line 133
        {

          sim_log_debug(219U, GENERAL_CHANNEL, "The radio is busy, or something\n");
          return FAIL;
        }
    }
  else 
#line 138
    {
      sim_log_debug(220U, GENERAL_CHANNEL, "The radio is busy");
      return EBUSY;
    }


  sim_log_debug(221U, GENERAL_CHANNEL, "FAILED!?");
  return FAIL;
}

# 80 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__t  /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__head(void ){
#line 80
  struct sendInfo *__nesc_result;
#line 80

#line 80
  __nesc_result = /*IPC.SimpleSendC.QueueC*/QueueC__3__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 74 "lib/modules/SimpleSendP.nc"
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__runTask(void )
#line 74
{


  if (!/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__empty() && !/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[sim_node()]) {
      sendInfo *info;




      info = /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__head();


      if (SUCCESS == /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__send(info->src, info->dest, & info->packet)) {

          /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__dequeue();
          /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__put(info);
        }
    }




  if (!/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__empty()) {
      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__postSendTask();
    }
}

# 53 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline bool /*CommandHandlerC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()] == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static bool CommandHandlerP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CommandHandlerC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t CommandHandlerP__Pool__put(CommandHandlerP__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 8 "lib/interfaces/TCP.nc"
inline static void ChatCliP__TCP__cli_send(uint8_t *msg, uint8_t size){
#line 8
  TCPP__TCP__cli_send(msg, size);
#line 8
}
#line 8
# 745 "lib/modules/TCPP.nc"
static inline void TCPP__TCP__cli_connect(uint8_t port)
#line 745
{

  uint8_t i;
  uint16_t v;
  socket_t socket = 0;
  socket_store_t *active_socket;

  pack send_pack;


  TCPP__init_socket(&socket, port, 1, 41);

  active_socket = &TCPP__sockets[sim_node()][socket];
  active_socket->state = SYN_SENT;

  TCPP__socket_seq[sim_node()][socket] = 1;


  TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), 0, 0, TCPP__SYN, SOCKET_BUFFER_SIZE, 0, 0);
  TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, TCPP__socket_seq[sim_node()][socket], (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TCPP__send_packet(send_pack, socket, 0);
  TCPP__node_state[sim_node()] = 2;
}

# 7 "lib/interfaces/TCP.nc"
inline static void ChatCliP__TCP__cli_connect(uint8_t port){
#line 7
  TCPP__TCP__cli_connect(port);
#line 7
}
#line 7
# 93 "lib/modules/ChatCliP.nc"
static inline void ChatCliP__interpret_cmd(void )
#line 93
{
  uint8_t cmd_type = 0;
  uint8_t i = 0;
#line 95
  uint8_t j = 0;
  uint8_t temp_port = 0;

  sim_log_debug(287U, APPLICATION_CHANNEL, "%hhu: %s\n", ChatCliP__cmdB_size[sim_node()], (uint8_t *)ChatCliP__commandBuffer[sim_node()]);



  if (ChatCliP__commandBuffer[sim_node()][0] == 'h') {

      while (i < 2) {
          if (ChatCliP__commandBuffer[sim_node()][j] == ' ') {
              i++;
            }
          j++;
        }
      temp_port = ChatCliP__commandBuffer[sim_node()][j];
      ChatCliP__commandBuffer[sim_node()][j - 1] = '\r';
      ChatCliP__commandBuffer[sim_node()][j] = '\n';
      ChatCliP__commandBuffer[sim_node()][j + 1] = 0;
      ChatCliP__cmdB_size[sim_node()] -= 1;


      ChatCliP__TCP__cli_connect(temp_port);
      ChatCliP__TCP__cli_send(ChatCliP__commandBuffer[sim_node()], ChatCliP__cmdB_size[sim_node()]);
    }
  else {
#line 119
    if (ChatCliP__commandBuffer[sim_node()][0] == 'm') {

        ChatCliP__TCP__cli_send(ChatCliP__commandBuffer[sim_node()], ChatCliP__cmdB_size[sim_node()]);
      }
    else {
#line 122
      if (ChatCliP__commandBuffer[sim_node()][0] == 'w') {

          ChatCliP__TCP__cli_send(ChatCliP__commandBuffer[sim_node()], ChatCliP__cmdB_size[sim_node()]);
        }
      else {
#line 125
        if (ChatCliP__commandBuffer[sim_node()][0] == 'l') {

            ChatCliP__TCP__cli_send(ChatCliP__commandBuffer[sim_node()], ChatCliP__cmdB_size[sim_node()]);
          }
        }
      }
    }
  ChatCliP__cmdB_size[sim_node()] = 0;
}

#line 66
static inline void ChatCliP__ChatCli__handle_cmd(uint8_t *payload)
#line 66
{
  uint8_t i;
  uint8_t end = 0;


  for (i = CMD_PACKET_MAX_PAYLOAD_SIZE - 1; i > 0; i--) {
      if (payload[i] == '\n' && payload[i - 1] == '\r') {
          end = 1;
          break;
        }
    }

  sim_log_debug(286U, APPLICATION_CHANNEL, "%hhu\n", payload[i]);


  if (end) {
      memcpy(ChatCliP__commandBuffer[sim_node()] + ChatCliP__cmdB_size[sim_node()], payload, i + 1);
      ChatCliP__cmdB_size[sim_node()] += i + 1;
      ChatCliP__commandBuffer[sim_node()][ChatCliP__cmdB_size[sim_node()] + 1] = 0;
      ChatCliP__interpret_cmd();
    }
  else {
      memcpy(ChatCliP__commandBuffer[sim_node()] + ChatCliP__cmdB_size[sim_node()], payload, CMD_PACKET_MAX_PAYLOAD_SIZE - 1);
      ChatCliP__cmdB_size[sim_node()] += CMD_PACKET_MAX_PAYLOAD_SIZE - 1;
    }
}

# 5 "lib/interfaces/ChatCli.nc"
inline static void Node__ChatCli__handle_cmd(uint8_t *payload){
#line 5
  ChatCliP__ChatCli__handle_cmd(payload);
#line 5
}
#line 5
# 139 "Node.nc"
static inline void Node__CommandHandler__setAppClient(uint8_t *payload)
#line 139
{
  Node__ChatCli__handle_cmd(payload);
}

# 11 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__setAppClient(uint8_t *payload){
#line 11
  Node__CommandHandler__setAppClient(payload);
#line 11
}
#line 11
# 5 "lib/interfaces/TCP.nc"
inline static void RoomP__TCP__init_server(uint8_t port){
#line 5
  TCPP__TCP__init_server(port);
#line 5
}
#line 5
# 195 "lib/modules/RoomP.nc"
static inline void RoomP__Room__start(void )
#line 195
{
  RoomP__TCP__init_server(41);
}

# 3 "lib/interfaces/Room.nc"
inline static void Node__Room__start(void ){
#line 3
  RoomP__Room__start();
#line 3
}
#line 3
# 135 "Node.nc"
static inline void Node__CommandHandler__setAppServer(void )
#line 135
{
  Node__Room__start();
}

# 10 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__setAppServer(void ){
#line 10
  Node__CommandHandler__setAppServer();
#line 10
}
#line 10
# 5 "lib/interfaces/TCP.nc"
inline static void Node__TCP__init_server(uint8_t port){
#line 5
  TCPP__TCP__init_server(port);
#line 5
}
#line 5
# 123 "Node.nc"
static inline void Node__CommandHandler__setTestServer(uint8_t port)
#line 123
{
  Node__TCP__init_server(port);
}

# 8 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__setTestServer(uint8_t port){
#line 8
  Node__CommandHandler__setTestServer(port);
#line 8
}
#line 8
# 701 "lib/modules/TCPP.nc"
static inline void TCPP__TCP__init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer)
#line 701
{
  uint8_t i;
  uint16_t v;
  socket_t socket = 0;
  socket_store_t *active_socket;

  pack send_pack;


  TCPP__init_socket(&socket, srcp, dest, destp);

  active_socket = &TCPP__sockets[sim_node()][socket];
  active_socket->state = SYN_SENT;

  for (v = 0; v < transfer; v++) {
      TCPP__data_to_send[sim_node()][v] = v + 1;
    }



  if (SOCKET_BUFFER_SIZE > transfer) {
      memcpy(active_socket->sendBuff, TCPP__data_to_send[sim_node()], SOCKET_BUFFER_SIZE);
      active_socket->lastWritten = SOCKET_BUFFER_SIZE;
    }
  else 
    {
      memcpy(active_socket->sendBuff, TCPP__data_to_send[sim_node()], transfer);
      active_socket->lastWritten = transfer;
    }

  TCPP__cli_data_to_send[sim_node()] = transfer;
  TCPP__cli_data_sent[sim_node()] = 0;

  TCPP__socket_seq[sim_node()][socket] = 1;


  TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), 0, 0, TCPP__SYN, SOCKET_BUFFER_SIZE, 0, 0);
  TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, TCPP__socket_seq[sim_node()][socket], (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TCPP__send_packet(send_pack, socket, 0);
  TCPP__node_state[sim_node()] = 2;

  sim_log_debug(249U, TRANSPORT_CHANNEL, "initiating connection with node %hhu\n", dest);
}

# 6 "lib/interfaces/TCP.nc"
inline static void Node__TCP__init_cli(uint8_t dest, uint8_t srcp, uint8_t destp, uint16_t transfer){
#line 6
  TCPP__TCP__init_cli(dest, srcp, destp, transfer);
#line 6
}
#line 6
# 127 "Node.nc"
static inline void Node__CommandHandler__setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2)
#line 127
{

  uint8_t transfer[2];

#line 130
  transfer[0] = transfer1;
  transfer[1] = transfer2;
  Node__TCP__init_cli(dest, srcPort, destPort, * (uint16_t *)transfer);
}

# 9 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__setTestClient(uint8_t dest, uint8_t srcPort, uint8_t destPort, uint8_t transfer1, uint8_t transfer2){
#line 9
  Node__CommandHandler__setTestClient(dest, srcPort, destPort, transfer1, transfer2);
#line 9
}
#line 9
# 13 "dataStructures/interfaces/Hashmap.nc"
inline static LinkStateRoutingP__RoutingTable__t LinkStateRoutingP__RoutingTable__get(uint32_t key){
#line 13
  unsigned short __nesc_result;
#line 13

#line 13
  __nesc_result = /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 166 "dataStructures/modules/HashmapC.nc"
static inline uint32_t */*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__getKeys(void )
#line 166
{
  return /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()];
}

# 17 "dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *LinkStateRoutingP__RoutingTable__getKeys(void ){
#line 17
  unsigned int *__nesc_result;
#line 17

#line 17
  __nesc_result = /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__getKeys();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 170 "dataStructures/modules/HashmapC.nc"
static inline uint16_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__size(void )
#line 170
{
  return /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()];
}

# 16 "dataStructures/interfaces/Hashmap.nc"
inline static uint16_t LinkStateRoutingP__RoutingTable__size(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__size();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 265 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__LinkStateRouting__dumpRT(void )
#line 265
{
  uint16_t temp;
  uint8_t *converter;
  uint8_t iterator = LinkStateRoutingP__RoutingTable__size();
  uint32_t *keys = LinkStateRoutingP__RoutingTable__getKeys();

#line 270
  sim_log_debug(198U, NEIGHBOR_CHANNEL, "NODE %d DUMPING Route Table\n", TOS_NODE_ID);







  while (iterator > 0) {
      iterator--;

      temp = LinkStateRoutingP__RoutingTable__get(keys[iterator]);

      converter = (uint8_t *)&temp;
      sim_log_debug(199U, NEIGHBOR_CHANNEL, "Ideal node to %d: %d, cost %d\n", keys[iterator], converter[0], converter[1]);
    }
}

# 7 "lib/interfaces/LinkStateRouting.nc"
inline static void Node__LinkStateRouting__dumpRT(void ){
#line 7
  LinkStateRoutingP__LinkStateRouting__dumpRT();
#line 7
}
#line 7
# 113 "Node.nc"
static inline void Node__CommandHandler__printRouteTable(void )
#line 113
{
  Node__LinkStateRouting__dumpRT();
}

# 5 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__printRouteTable(void ){
#line 5
  Node__CommandHandler__printRouteTable();
#line 5
}
#line 5
# 243 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__LinkStateRouting__dumpLS(void )
#line 243
{
  uint8_t i = 0;
  uint8_t j = 0;
  uint8_t k = 0;

#line 247
  sim_log_debug(194U, ROUTING_CHANNEL, "NODE %u DUMPING LS TABLE\n", TOS_NODE_ID);
  while (i < 32) {
      i++;
      j = 0;
      k = LinkStateRoutingP__topography[sim_node()][i][0].dest;
      if (k != 0) {
          sim_log_debug(195U, ROUTING_CHANNEL, "Printing Node %u connenctions: \n", i);
          while (j < k) {
              sim_log_debug(196U, ROUTING_CHANNEL, "%d, \n", LinkStateRoutingP__topography[sim_node()][i][j + 1].dest);
              j++;
            }
        }
    }

  sim_log_debug(197U, ROUTING_CHANNEL, "\n");
}

# 6 "lib/interfaces/LinkStateRouting.nc"
inline static void Node__LinkStateRouting__dumpLS(void ){
#line 6
  LinkStateRoutingP__LinkStateRouting__dumpLS();
#line 6
}
#line 6
# 117 "Node.nc"
static inline void Node__CommandHandler__printLinkState(void )
#line 117
{
  Node__LinkStateRouting__dumpLS();
}

# 6 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__printLinkState(void ){
#line 6
  Node__CommandHandler__printLinkState();
#line 6
}
#line 6
# 166 "dataStructures/modules/HashmapC.nc"
static inline uint32_t */*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__getKeys(void )
#line 166
{
  return /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()];
}

# 17 "dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *NeighborDiscoveryP__Neighbors__getKeys(void ){
#line 17
  unsigned int *__nesc_result;
#line 17

#line 17
  __nesc_result = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__getKeys();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 170 "dataStructures/modules/HashmapC.nc"
static inline uint16_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__size(void )
#line 170
{
  return /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()];
}

# 16 "dataStructures/interfaces/Hashmap.nc"
inline static uint16_t NeighborDiscoveryP__Neighbors__size(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__size();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 62 "lib/modules/NeighborDiscoveryP.nc"
static inline void NeighborDiscoveryP__NeighborDiscovery__print_neighbors(void )
#line 62
{
  uint8_t iterator = NeighborDiscoveryP__Neighbors__size();
  uint32_t *keys = NeighborDiscoveryP__Neighbors__getKeys();

#line 65
  sim_log_debug(170U, NEIGHBOR_CHANNEL, "NODE %d DUMPING NEIGHBORS\n", TOS_NODE_ID);
  while (iterator > 0) {
      iterator--;
      sim_log_debug(171U, NEIGHBOR_CHANNEL, "Neighbor: %d\n", keys[iterator]);
    }
}

# 6 "lib/interfaces/NeighborDiscovery.nc"
inline static void Node__NeighborDiscovery__print_neighbors(void ){
#line 6
  NeighborDiscoveryP__NeighborDiscovery__print_neighbors();
#line 6
}
#line 6
# 109 "Node.nc"
static inline void Node__CommandHandler__printNeighbors(void )
#line 109
{
  Node__NeighborDiscovery__print_neighbors();
}

# 4 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__printNeighbors(void ){
#line 4
  Node__CommandHandler__printNeighbors();
#line 4
}
#line 4
# 4 "lib/interfaces/IP.nc"
inline static void Node__IP__send(pack in_pack, uint8_t dest){
#line 4
  IPP__IP__send(in_pack, dest);
#line 4
}
#line 4
# 143 "Node.nc"
static inline void Node__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 143
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

#line 103
static inline void Node__CommandHandler__ping(uint16_t destination, uint8_t *payload)
#line 103
{
  sim_log_debug(112U, GENERAL_CHANNEL, "PING EVENT \n");
  Node__makePack(&Node__sendPackage[sim_node()], TOS_NODE_ID, destination, 0, 0, 0, payload, PACKET_MAX_PAYLOAD_SIZE);
  Node__IP__send(Node__sendPackage[sim_node()], destination);
}

# 3 "lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerP__CommandHandler__ping(uint16_t destination, uint8_t *payload){
#line 3
  Node__CommandHandler__ping(destination, payload);
#line 3
}
#line 3
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void * CommandHandlerP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 69 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline /*CommandHandlerC.QueueC*/QueueC__0__queue_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__head(void )
#line 69
{
  return /*CommandHandlerC.QueueC*/QueueC__0__queue[sim_node()][/*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()]];
}

#line 89
static inline /*CommandHandlerC.QueueC*/QueueC__0__queue_t /*CommandHandlerC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*CommandHandlerC.QueueC*/QueueC__0__queue_t t = /*CommandHandlerC.QueueC*/QueueC__0__Queue__head();

#line 91
  sim_log_debug(307U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()]);
  if (!/*CommandHandlerC.QueueC*/QueueC__0__Queue__empty()) {
      /*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()]++;
      if (/*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()] == 20) {
#line 94
        /*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()] = 0;
        }
#line 95
      /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()]--;
      /*CommandHandlerC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 88 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static CommandHandlerP__Queue__t  CommandHandlerP__Queue__dequeue(void ){
#line 88
  nx_struct message_t *__nesc_result;
#line 88

#line 88
  __nesc_result = /*CommandHandlerC.QueueC*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 22 "lib/modules/CommandHandlerP.nc"
static inline void CommandHandlerP__processCommand__runTask(void )
#line 22
{
  if (!CommandHandlerP__Queue__empty()) {
      CommandMsg *msg;
      uint8_t commandID;
      uint8_t *buff;
      message_t *raw_msg;
      void *payload;


      raw_msg = CommandHandlerP__Queue__dequeue();
      payload = CommandHandlerP__Packet__getPayload(raw_msg, sizeof(CommandMsg ));


      if (!payload) {
          CommandHandlerP__Pool__put(raw_msg);
          CommandHandlerP__processCommand__postTask();
          return;
        }

      msg = (CommandMsg *)payload;

      sim_log_debug(288U, COMMAND_CHANNEL, "A Command has been Issued.\n");
      buff = (uint8_t *)msg->payload;
      commandID = __nesc_ntoh_uint8(msg->id.nxdata);


      switch (commandID) {


          case CMD_PING: 
            sim_log_debug(289U, COMMAND_CHANNEL, "Command Type: Ping\n");
          CommandHandlerP__CommandHandler__ping(buff[0], &buff[1]);
          break;

          case CMD_NEIGHBOR_DUMP: 
            sim_log_debug(290U, COMMAND_CHANNEL, "Command Type: Neighbor Dump\n");
          CommandHandlerP__CommandHandler__printNeighbors();
          break;

          case CMD_LINKSTATE_DUMP: 
            sim_log_debug(291U, COMMAND_CHANNEL, "Command Type: Link State Dump\n");
          CommandHandlerP__CommandHandler__printLinkState();
          break;

          case CMD_ROUTETABLE_DUMP: 
            sim_log_debug(292U, COMMAND_CHANNEL, "Command Type: Route Table Dump\n");
          CommandHandlerP__CommandHandler__printRouteTable();
          break;

          case CMD_TEST_CLIENT: 
            sim_log_debug(293U, COMMAND_CHANNEL, "Command Type: Client\n");
          CommandHandlerP__CommandHandler__setTestClient(buff[0], buff[1], buff[2], buff[3], buff[4]);
          break;

          case CMD_TEST_SERVER: 
            sim_log_debug(294U, COMMAND_CHANNEL, "Command Type: Server\n");
          CommandHandlerP__CommandHandler__setTestServer(buff[0]);
          break;



          case CMD_ROOM_HOST: 
            sim_log_debug(295U, COMMAND_CHANNEL, "Command Type: Room: Hosting\n");
          CommandHandlerP__CommandHandler__setAppServer();
          break;

          case CMD_ROOM_CLI: 
            sim_log_debug(296U, COMMAND_CHANNEL, "Command Type: Room: Client\n");
          CommandHandlerP__CommandHandler__setAppClient(buff);
          break;



          default: 
            sim_log_debug(297U, COMMAND_CHANNEL, "CMD_ERROR: \"%d\" does not match any known commands.\n", __nesc_ntoh_uint8(msg->id.nxdata));
          break;
        }
      CommandHandlerP__Pool__put(raw_msg);
    }

  if (!CommandHandlerP__Queue__empty()) {
      CommandHandlerP__processCommand__postTask();
    }
}

# 221 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f380068e020){
#line 75
  switch (arg_0x7f380068e020) {
#line 75
    case TossimPacketModelC__startDoneTask:
#line 75
      TossimPacketModelC__startDoneTask__runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC__stopDoneTask:
#line 75
      TossimPacketModelC__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC__sendDoneTask:
#line 75
      TossimPacketModelC__sendDoneTask__runTask();
#line 75
      break;
#line 75
    case CpmModelC__read_rssi_task:
#line 75
      CpmModelC__read_rssi_task__runTask();
#line 75
      break;
#line 75
    case /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask:
#line 75
      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask:
#line 75
      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__runTask();
#line 75
      break;
#line 75
    case /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask:
#line 75
      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__runTask();
#line 75
      break;
#line 75
    case CommandHandlerP__processCommand:
#line 75
      CommandHandlerP__processCommand__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x7f380068e020);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 65 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 181
static inline void TossimActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC__getHeader(msg)->length.nxdata, len);
}

# 94 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 147 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
#line 78
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7f37ffd59b60, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC__AMSend__send(arg_0x7f37ffd59b60, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 524 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg)
#line 524
{
  free(msg);
}

# 61 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC__Model__shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC__GainRadioModel__shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__receive(message_t *msg){
#line 85
  TossimActiveMessageC__Model__receive(msg);
#line 85
}
#line 85
# 288 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      TossimPacketModelC__Packet__receive(msg);
    }
}

# 60 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__receive(message_t *msg){
#line 60
  TossimPacketModelC__GainRadioModel__receive(msg);
#line 60
}
#line 60
# 265 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg)
#line 265
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 269
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(82U, "CpmModelC", "checkReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }

      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(83U, "CpmModelC", "checkReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  msg->lqi = sim_lqi_generate(msg->power - noise);
  return CpmModelC__shouldReceive(msg->power - noise);
}

#line 321
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt)
#line 321
{
  CpmModelC__receive_message_t *mine = (CpmModelC__receive_message_t *)evt->data;
  CpmModelC__receive_message_t *predecessor = (void *)0;
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

  sim_log_debug(86U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 336
    if (mine == CpmModelC__outstandingReceptionHead[sim_node()]) {
        CpmModelC__outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(87U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 342
  sim_log_debug(88U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC__checkReceive(mine)) {
      sim_log_debug(89U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }

  if (mine->channel != sim_mote_get_radio_channel(sim_node())) {
      CpmModelC__free_receive_message(mine);
      CpmModelC__receiving[sim_node()] = 0;
      return;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 358
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);
      __nesc_hton_uint8(meta->lqi.nxdata, mine->lqi);

      sim_log_debug(90U, "CpmModelC,SNRLoss", "-signaling reception\n");
      CpmModelC__Model__receive(mine->msg);
      if (mine->ack) {
          sim_log_debug(91U, "CpmModelC", "yes acknowledgment requested, \n");
        }
      else {
          sim_log_debug(92U, "CpmModelC", "no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
          sim_log_debug(93U, "CpmModelC", " scheduling ack.\n");
          CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          sim_log_debug(94U, "CpmModelC", " should not ack.\n");
          CpmModelC__free_receive_message(mine);
        }

      CpmModelC__receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(95U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
              sim_log_debug_clear(96U, "CpmModelC", " scheduling ack.\n");
              CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC__free_receive_message(mine);
            }
        }
      else {
          CpmModelC__free_receive_message(mine);
        }
      CpmModelC__receiving[sim_node()] = 0;
      sim_log_debug_clear(97U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 508
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg)
#line 508
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 510
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC__sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void )
#line 520
{
  return (CpmModelC__receive_message_t *)malloc(sizeof(CpmModelC__receive_message_t ));
}

#line 402
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 402
{
  sim_event_t *evt;
  CpmModelC__receive_message_t *list;
  CpmModelC__receive_message_t *rcv = CpmModelC__allocate_receive_message();
  double noiseStr = CpmModelC__packetNoise(rcv);

#line 407
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;
  rcv->channel = sim_mote_get_radio_channel(source);





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(98U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 430
    if (!CpmModelC__shouldReceive(power - noiseStr)) {
        sim_log_debug(99U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 434
      if (sim_mote_get_radio_channel(sim_node()) != sim_mote_get_radio_channel(source)) {
          rcv->lost = 1;
        }
      else {
#line 437
        if (CpmModelC__receiving[sim_node()]) {
            sim_log_debug(100U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
            rcv->lost = 1;
          }
        else {
#line 441
          if (CpmModelC__transmitting[sim_node()] && rcv->start < CpmModelC__transmissionEndTime[sim_node()] && CpmModelC__transmissionEndTime[sim_node()] <= rcv->end) {
              sim_log_debug(101U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC__transmissionEndTime[sim_node()]);
              rcv->lost = 1;
            }
          else {
              CpmModelC__receiving[sim_node()] = 1;
            }
          }
        }
      }
    }
#line 449
  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (list->channel != sim_mote_get_radio_channel(source)) {
          list = list->next;
          continue;
        }
      if (!CpmModelC__shouldReceive(list->power - rcv->power)) {
          sim_log_debug(102U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC__outstandingReceptionHead[sim_node()];
  CpmModelC__outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC__allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 469
{
  int prevNode = sim_node();

#line 471
  sim_log_debug(103U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC__enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 477
{
  CpmModelC__receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 480
  CpmModelC__requestAck[sim_node()] = ack;
  CpmModelC__outgoing[sim_node()] = msg;
  CpmModelC__transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(104U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 487
      CpmModelC__sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(105U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC__Model__putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 282
  TossimPacketModelC__sending[sim_node()] = (void *)0;
  TossimPacketModelC__transmitting[sim_node()] = FALSE;
  sim_log_debug(74U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC__Packet__sendDone(rval, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

  duration = 8 * TossimPacketModelC__sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  sim_log_debug(72U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC__GainRadioModel__putOnAirTo(TossimPacketModelC__destNode[sim_node()], TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(73U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 500 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__Model__setPendingTransmission(void )
#line 500
{
  CpmModelC__transmitting[sim_node()] = TRUE;
  sim_log_debug(106U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC__transmitting[sim_node()], sim_time_string());
}

# 57 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__setPendingTransmission(void ){
#line 57
  CpmModelC__Model__setPendingTransmission();
#line 57
}
#line 57
# 216 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__Model__clearChannel(void )
#line 216
{
  sim_log_debug(80U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC__packetNoise((void *)0), CpmModelC__clearThreshold[sim_node()]);
  return CpmModelC__packetNoise((void *)0) < CpmModelC__clearThreshold[sim_node()];
}

# 56 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC__GainRadioModel__clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC__Model__clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC__backoffCount[sim_node()]++;
  if (TossimPacketModelC__GainRadioModel__clearChannel()) {
      TossimPacketModelC__neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC__neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      TossimPacketModelC__GainRadioModel__setPendingTransmission();
      evt->handle = TossimPacketModelC__send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC__backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC__backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 243
        TossimPacketModelC__sending[sim_node()] = (void *)0;
        sim_log_debug(71U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC__Packet__sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC__start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(70U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC__sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC__sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC__sendEvent[sim_node()].force = 0;
  TossimPacketModelC__sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_backoff;
  TossimPacketModelC__sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC__sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(68U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC__running[sim_node()]) {
      sim_log_error(69U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC__sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC__sendingLength[sim_node()] = len;
  TossimPacketModelC__sending[sim_node()] = msg;
  TossimPacketModelC__destNode[sim_node()] = dest;
  TossimPacketModelC__backoffCount[sim_node()] = 0;
  TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC__start_csma();
  return SUCCESS;
}

# 57 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC__Packet__send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 95 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__timeInMs(void )
#line 95
{
  sim_time_t ftime = sim_time();
  int hours;
#line 97
  int minutes;
#line 97
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 74 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void )
{
  if (SimMoteP__radioChannel[sim_node()] < 11 || SimMoteP__radioChannel[sim_node()] > 26) {
      return 26;
    }

  return SimMoteP__radioChannel[sim_node()];
}

# 65 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 3;
  for (i = 0; i < 3; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 3;
        }
      else {
          break;
        }
    }
  if (i >= 3) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 3;
    }
}

# 177 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC__getHeader(msg)->length.nxdata);
}

# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 235 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__prr_estimate_from_snr(double SNR)
#line 235
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 244
  sim_log_debug(81U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 247
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 250
  return prr_hat;
}

# 127 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC__amAddress()) {
      sim_log_debug(61U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC__Packet__shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC__Model__shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC__running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC__sending[sim_node()]) {
          TossimPacketModelC__error[sim_node()] = 1;
          sim_log_debug(75U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC__sending[sim_node()]);
        }
    }
}

# 59 "/opt/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__acked(message_t *msg){
#line 59
  TossimPacketModelC__GainRadioModel__acked(msg);
#line 59
}
#line 59
# 156 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__arr_estimate_from_snr(double SNR)
#line 156
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 162
  sim_log_debug(78U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 165
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 168
  return prr_hat;
}

static inline int CpmModelC__shouldAckReceive(double snr)
#line 171
{
  double prr = CpmModelC__arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 174
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 178
        prr = 0.0;
        }
    }
#line 180
  return (int )prr;
}

static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt)
#line 183
{






  if (
#line 189
  CpmModelC__requestAck[sim_node()] && 
  CpmModelC__outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC__receive_message_t *rcv = (CpmModelC__receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC__packetNoise(rcv);
      double snr = power - noise;

#line 196
      if (CpmModelC__shouldAckReceive(snr)) {
          CpmModelC__Model__acked(CpmModelC__outgoing[sim_node()]);
        }
    }
  CpmModelC__free_receive_message((CpmModelC__receive_message_t *)evt->data);
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "lib/modules/SimpleSendP.nc"
static inline void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__fired(void )
#line 103
{
  /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendBufferTask__postTask();
}

# 76 "dataStructures/modules/HashmapC.nc"
static inline void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__removeFromKeyList(uint32_t k)
#line 76
{
  int i;
  int j;

#line 79
  sim_log_debug(173U, HASHMAP_CHANNEL, "Removing entry %d\n", k);
  for (i = 0; i < /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()]; i++) {



      if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][i] == k) {
          sim_log_debug(174U, HASHMAP_CHANNEL, "Key found at %d\n", i);


          for (j = i; j < /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[sim_node()]; j++) {

              if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][j] == /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()]) {
#line 90
                break;
                }
#line 91
              sim_log_debug(175U, HASHMAP_CHANNEL, "Moving %d to %d\n", j, j + 1);
              sim_log_debug(176U, HASHMAP_CHANNEL, "Replacing %d with %d\n", /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][j], /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][j + 1]);
              /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][j] = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][j + 1];
            }



          /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()]] = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()];

          /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()]--;
          sim_log_debug(177U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

#line 33
static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash2(k) + i * /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash3(k)) % /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[sim_node()];
}

#line 109
static inline void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__remove(uint32_t k)
#line 109
{
  uint32_t i = 0;
#line 110
  uint32_t j = 0;
  bool removed = 0;

#line 112
  do {
      j = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash(k, i);
      if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key == k) {
          /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key = 0;
          removed = 1;
          break;
        }
      i++;
    }
  while (
#line 120
  i < /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[sim_node()]);
  if (removed) 
    {
      /*NeighborDiscoveryC.HashmapC*/HashmapC__1__removeFromKeyList(k);
    }
}

# 12 "dataStructures/interfaces/Hashmap.nc"
inline static void NeighborDiscoveryP__Neighbors__remove(uint32_t key){
#line 12
  /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__remove(key);
#line 12
}
#line 12
# 44 "lib/modules/NeighborDiscoveryP.nc"
static inline void NeighborDiscoveryP__Timer__fired(void )
#line 44
{
  uint8_t iterator = NeighborDiscoveryP__Neighbors__size();
  uint32_t *keys = NeighborDiscoveryP__Neighbors__getKeys();

#line 47
  while (iterator > 0) {
      iterator--;
      if (NeighborDiscoveryP__Neighbors__get(keys[iterator]) == 1) {
          NeighborDiscoveryP__Neighbors__remove(keys[iterator]);
          NeighborDiscoveryP__changed[sim_node()] = 1;
        }
      else 
#line 52
        {
          NeighborDiscoveryP__Neighbors__insert(keys[iterator], 1);
        }
    }


  __nesc_hton_uint8(NeighborDiscoveryP__discPack[sim_node()].protocol.nxdata, 0);
  NeighborDiscoveryP__Sender__send(NeighborDiscoveryP__discPack[sim_node()], AM_BROADCAST_ADDR);
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "lib/modules/SimpleSendP.nc"
static inline void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__fired(void )
#line 103
{
  /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendBufferTask__postTask();
}

# 33 "dataStructures/modules/HashmapC.nc"
static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*LinkStateRoutingC.HashmapC*/HashmapC__2__hash2(k) + i * /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash3(k)) % /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[sim_node()];
}

static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__insert(uint32_t k, /*LinkStateRoutingC.HashmapC*/HashmapC__2__t input)
#line 41
{
  uint32_t i = 0;
#line 42
  uint32_t j = 0;

  if (k == /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()]) {
      sim_log_debug(200U, HASHMAP_CHANNEL, "[HASHMAP] You cannot insert a key of %d.", /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()]);
      return;
    }

  do {

      j = /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash(k, i);


      if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key == /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()] || /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key == k) {


          if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key == /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()]) {
              /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()]] = k;
              /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()]++;
            }


          /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].value = input;
          /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key = k;
          return;
        }
      i++;
    }
  while (
  i < /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[sim_node()]);
}

# 11 "dataStructures/interfaces/Hashmap.nc"
inline static void LinkStateRoutingP__RoutingTable__insert(uint32_t key, LinkStateRoutingP__RoutingTable__t input){
#line 11
  /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__insert(key, input);
#line 11
}
#line 11
# 76 "dataStructures/modules/HashmapC.nc"
static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__removeFromKeyList(uint32_t k)
#line 76
{
  int i;
  int j;

#line 79
  sim_log_debug(201U, HASHMAP_CHANNEL, "Removing entry %d\n", k);
  for (i = 0; i < /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()]; i++) {



      if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][i] == k) {
          sim_log_debug(202U, HASHMAP_CHANNEL, "Key found at %d\n", i);


          for (j = i; j < /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[sim_node()]; j++) {

              if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][j] == /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()]) {
#line 90
                break;
                }
#line 91
              sim_log_debug(203U, HASHMAP_CHANNEL, "Moving %d to %d\n", j, j + 1);
              sim_log_debug(204U, HASHMAP_CHANNEL, "Replacing %d with %d\n", /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][j], /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][j + 1]);
              /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][j] = /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][j + 1];
            }



          /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[sim_node()][/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()]] = /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[sim_node()];

          /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[sim_node()]--;
          sim_log_debug(205U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}



static inline void /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__remove(uint32_t k)
#line 109
{
  uint32_t i = 0;
#line 110
  uint32_t j = 0;
  bool removed = 0;

#line 112
  do {
      j = /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash(k, i);
      if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key == k) {
          /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key = 0;
          removed = 1;
          break;
        }
      i++;
    }
  while (
#line 120
  i < /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[sim_node()]);
  if (removed) 
    {
      /*LinkStateRoutingC.HashmapC*/HashmapC__2__removeFromKeyList(k);
    }
}

# 12 "dataStructures/interfaces/Hashmap.nc"
inline static void LinkStateRoutingP__RoutingTable__remove(uint32_t key){
#line 12
  /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__remove(key);
#line 12
}
#line 12
# 138 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__dijkstra(void )
#line 138
{

  uint8_t i = 0;
  uint8_t j = 0;
  uint8_t unsorted = LinkStateRoutingP__topoSize[sim_node()];
  uint8_t d[33];
  uint8_t pi[33];
  uint8_t u;
  uint8_t Q[33];
  uint8_t converter[2];
  uint8_t temp;



  while (i < LinkStateRoutingP__topoSize[sim_node()]) {
      i++;
      d[i] = 254;
      pi[i] = 0;
      LinkStateRoutingP__RoutingTable__remove(i);
    }

  d[TOS_NODE_ID] = 0;

  while (unsorted > 0) {
      i = 0;
      u = 0;
      j = 255;
      while (i < LinkStateRoutingP__topoSize[sim_node()]) {
          i++;
          if (d[i] < j) {
              j = d[i];
              u = i;
            }
        }
#line 184
      Q[u] = j;

      j = LinkStateRoutingP__topography[sim_node()][u][0].dest;
      i = 0;
      while (i < j) {
          i++;
          if (d[LinkStateRoutingP__topography[sim_node()][u][i].dest] != 255 && d[LinkStateRoutingP__topography[sim_node()][u][i].dest] > d[u] + LinkStateRoutingP__topography[sim_node()][u][i].cost) {
              d[LinkStateRoutingP__topography[sim_node()][u][i].dest] = d[u] + LinkStateRoutingP__topography[sim_node()][u][i].cost;
              pi[LinkStateRoutingP__topography[sim_node()][u][i].dest] = u;
            }
        }


      d[u] = 255;
      unsorted--;
    }





  i = 0;
  u = 0;
  j = 0;
  while (i < LinkStateRoutingP__topoSize[sim_node()]) {
      i++;
      if (i != TOS_NODE_ID) {
          u = i;
          j = pi[u];
          while (j != TOS_NODE_ID && j != 0) {
              u = j;
              j = pi[u];
            }
          converter[0] = u;
          converter[1] = Q[i];
          LinkStateRoutingP__RoutingTable__insert(i, * (uint16_t *)converter);
        }
    }

  LinkStateRoutingP__topoChanged[sim_node()] = 0;
}

# 56 "lib/modules/FloodingP.nc"
static inline void FloodingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 56
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

#line 20
static inline void FloodingP__Flooding__send(pack in_pack, uint16_t destination)
#line 20
{

  if (__nesc_ntoh_uint8(in_pack.TTL.nxdata) == 0) {
    __nesc_hton_uint8(in_pack.TTL.nxdata, 15);
    }
  FloodingP__makePack(&FloodingP__send_pkt[sim_node()], TOS_NODE_ID, destination, __nesc_ntoh_uint8(in_pack.TTL.nxdata), __nesc_ntoh_uint8(in_pack.protocol.nxdata), FloodingP__sequence_number[sim_node()], (uint8_t *)& in_pack.payload, PACKET_MAX_PAYLOAD_SIZE);


  sim_log_debug(113U, FLOODING_CHANNEL, "FLOODING PING FROM %d TO %d\n", TOS_NODE_ID, destination);


  FloodingP__Sender__send(FloodingP__send_pkt[sim_node()], AM_BROADCAST_ADDR);

  FloodingP__prior_packets__insert(__nesc_ntoh_uint16(FloodingP__send_pkt[sim_node()].src.nxdata), __nesc_ntoh_uint16(FloodingP__send_pkt[sim_node()].seq.nxdata));


  FloodingP__sequence_number[sim_node()]++;
}

# 4 "lib/interfaces/Flooding.nc"
inline static void LinkStateRoutingP__Flooding__send(pack in_pack, uint16_t destination){
#line 4
  FloodingP__Flooding__send(in_pack, destination);
#line 4
}
#line 4
# 288 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 288
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

# 72 "lib/modules/NeighborDiscoveryP.nc"
static inline uint32_t *NeighborDiscoveryP__NeighborDiscovery__get_Neighbors(uint8_t *num, uint8_t *has_changed)
#line 72
{
  *has_changed = NeighborDiscoveryP__changed[sim_node()];
  NeighborDiscoveryP__changed[sim_node()] = 0;
  *num = NeighborDiscoveryP__Neighbors__size();
  return NeighborDiscoveryP__Neighbors__getKeys();
}

# 7 "lib/interfaces/NeighborDiscovery.nc"
inline static uint32_t *LinkStateRoutingP__ND__get_Neighbors(uint8_t *num, uint8_t *has_changed){
#line 7
  unsigned int *__nesc_result;
#line 7

#line 7
  __nesc_result = NeighborDiscoveryP__NeighborDiscovery__get_Neighbors(num, has_changed);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 59 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__Timer__fired(void )
#line 59
{
  uint32_t *neighbors;
  uint8_t num;
  uint8_t temp = 0;
  uint8_t data[PACKET_MAX_PAYLOAD_SIZE];
  uint8_t neighborsChanged = 0;
  uint8_t *thing;


  neighbors = LinkStateRoutingP__ND__get_Neighbors(&num, &neighborsChanged);


  if (LinkStateRoutingP__begin[sim_node()] == 1 || neighborsChanged) {
      while (temp < num) {

          temp++;
        }

      if (num > 18) {
          sim_log_debug(193U, ROUTING_CHANNEL, "Too many neighbors!");
          num = 18;
        }
      temp = num;
      LinkStateRoutingP__topography[sim_node()][TOS_NODE_ID][0].dest = num;
      while (temp > 0) {
          temp--;
          LinkStateRoutingP__topography[sim_node()][TOS_NODE_ID][temp + 1].dest = (uint8_t )neighbors[temp];

          LinkStateRoutingP__topography[sim_node()][TOS_NODE_ID][temp + 1].cost = 1;
        }
      data[0] = TOS_NODE_ID;
      data[1] = num;
      while (num > 0) {
          num--;
          data[num + 2] = (uint8_t )neighbors[num];
        }
      LinkStateRoutingP__makePack(&LinkStateRoutingP__send_pkt[sim_node()], TOS_NODE_ID, AM_BROADCAST_ADDR, 0, PROTOCOL_LINKSTATE, 0, data, PACKET_MAX_PAYLOAD_SIZE);
      LinkStateRoutingP__Flooding__send(LinkStateRoutingP__send_pkt[sim_node()], AM_BROADCAST_ADDR);
      if (LinkStateRoutingP__topoSize[sim_node()] < TOS_NODE_ID) {
          LinkStateRoutingP__topoSize[sim_node()] = TOS_NODE_ID;
        }
      LinkStateRoutingP__begin[sim_node()] = 0;
      neighborsChanged = 0;
      LinkStateRoutingP__topoChanged[sim_node()] = 1;
    }
  if (LinkStateRoutingP__begin[sim_node()] == 0 && LinkStateRoutingP__topoChanged[sim_node()] == 1) {
      LinkStateRoutingP__dijkstra();
    }
}

# 4 "lib/interfaces/SimpleSend.nc"
inline static error_t IPP__Sender__send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__SimpleSend__send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 4 "lib/interfaces/LinkStateRouting.nc"
inline static uint8_t IPP__LinkStateRouting__getNext(uint8_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = LinkStateRoutingP__LinkStateRouting__getNext(dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 13 "dataStructures/interfaces/Hashmap.nc"
inline static IPP__Unconfirmed__t IPP__Unconfirmed__get(uint32_t key){
#line 13
  nx_struct pack __nesc_result;
#line 13

#line 13
  __nesc_result = /*IPC.HashmapC*/HashmapC__3__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 166 "dataStructures/modules/HashmapC.nc"
static inline uint32_t */*IPC.HashmapC*/HashmapC__3__Hashmap__getKeys(void )
#line 166
{
  return /*IPC.HashmapC*/HashmapC__3__keys[sim_node()];
}

# 17 "dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *IPP__Unconfirmed__getKeys(void ){
#line 17
  unsigned int *__nesc_result;
#line 17

#line 17
  __nesc_result = /*IPC.HashmapC*/HashmapC__3__Hashmap__getKeys();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 170 "dataStructures/modules/HashmapC.nc"
static inline uint16_t /*IPC.HashmapC*/HashmapC__3__Hashmap__size(void )
#line 170
{
  return /*IPC.HashmapC*/HashmapC__3__numofVals[sim_node()];
}

# 16 "dataStructures/interfaces/Hashmap.nc"
inline static uint16_t IPP__Unconfirmed__size(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = /*IPC.HashmapC*/HashmapC__3__Hashmap__size();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 68 "lib/modules/IPP.nc"
static inline void IPP__Timer__fired(void )
#line 68
{


  uint8_t iterator = IPP__Unconfirmed__size();
  uint32_t *keys = IPP__Unconfirmed__getKeys();
  uint8_t hop;
  pack in_pack;


  sim_log_debug(211U, ROUTING_CHANNEL, "timer fired with %d unconfirmed packets\n", iterator);

  while (iterator > 0) {
      iterator--;
      in_pack = IPP__Unconfirmed__get(keys[iterator]);
      hop = IPP__LinkStateRouting__getNext(__nesc_ntoh_uint16(in_pack.dest.nxdata));
      IPP__Sender__send(in_pack, hop);
    }
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "lib/modules/SimpleSendP.nc"
static inline void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__fired(void )
#line 103
{
  /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendBufferTask__postTask();
}

# 13 "dataStructures/interfaces/Hashmap.nc"
inline static TCPP__sendQueue__t TCPP__sendQueue__get(uint32_t key){
#line 13
  struct tcpQueueInfo __nesc_result;
#line 13

#line 13
  __nesc_result = /*TCPC.sendQueue*/HashmapC__4__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 166 "dataStructures/modules/HashmapC.nc"
static inline uint32_t */*TCPC.sendQueue*/HashmapC__4__Hashmap__getKeys(void )
#line 166
{
  return /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()];
}

# 17 "dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *TCPP__sendQueue__getKeys(void ){
#line 17
  unsigned int *__nesc_result;
#line 17

#line 17
  __nesc_result = /*TCPC.sendQueue*/HashmapC__4__Hashmap__getKeys();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
#line 12
inline static void TCPP__sendQueue__remove(uint32_t key){
#line 12
  /*TCPC.sendQueue*/HashmapC__4__Hashmap__remove(key);
#line 12
}
#line 12
# 4 "lib/interfaces/IP.nc"
inline static void TCPP__IP__send(pack in_pack, uint8_t dest){
#line 4
  IPP__IP__send(in_pack, dest);
#line 4
}
#line 4
# 338 "lib/modules/TCPP.nc"
static inline void TCPP__Timer__fired(void )
#line 338
{
  uint8_t i;
  uint8_t j = 0;
  uint16_t aaaa = 0;
  pack sende;
  uint32_t *keys;
  uint16_t min_time = 30000;
  uint8_t size;
  tcpQueueInfo info;
#line 346
  tcpQueueInfo tempInfo;









  size = TCPP__sendQueue__size();

  if (size == 0) {
      return;
    }


  keys = TCPP__sendQueue__getKeys();
  info = TCPP__sendQueue__get(keys[0]);
  min_time = info.time;
  for (i = 1; i < size; i++) {
      tempInfo = TCPP__sendQueue__get(keys[i]);
      aaaa = tempInfo.time;
      if (min_time > aaaa) {
          min_time == aaaa;
          info = tempInfo;
          j = i;
        }
    }
  sende = info.packet;
#line 396
  if (__nesc_ntoh_uint16(sende.seq.nxdata) == 127 || info.seq == 127) {
      TCPP__sendQueue__remove(keys[j]);
      TCPP__Timer__startOneShot(1);
      return;
    }



  if (info.seq == 0) {
      if (TCPP__sockets[sim_node()][info.socket_id].state == TIME_WAIT) {
          TCPP__sockets[sim_node()][info.socket_id].state = CLOSED;
          TCPP__sockets[sim_node()][info.socket_id].flag = 0;
          TCPP__node_state[sim_node()] = 0;
          TCPP__sendQueue__remove(keys[j]);
        }
      else {
#line 411
        if (TCPP__sockets[sim_node()][info.socket_id].state == ESTABLISHED) {
            TCPP__cli_sendData();
            TCPP__sendQueue__remove(keys[j]);
          }
        }
    }
  else 
#line 416
    {
      if (__nesc_ntoh_uint16(sende.seq.nxdata) == 127) {
          TCPP__sendQueue__remove(keys[j]);
          TCPP__Timer__startOneShot(100);
          return;
        }

      TCPP__IP__send(sende, __nesc_ntoh_uint16(sende.dest.nxdata));
      sim_log_debug(239U, TRANSPORT_CHANNEL, "resending packet seq: %hhu socket: no, time: %hu\n", __nesc_ntoh_uint16(sende.seq.nxdata), TCPP__sockets[sim_node()][info.socket_id].RTT);




      aaaa = keys[j];

      info = TCPP__sendQueue__get(keys[j]);
      info.time = TCPP__sockets[sim_node()][info.socket_id].RTT;
      TCPP__sendQueue__remove(keys[j]);
      TCPP__sendQueue__insert(aaaa, info);



      sim_log_debug(240U, TRANSPORT_CHANNEL, "min_time: %hu\n", min_time);






      size = TCPP__sendQueue__size();
      keys = TCPP__sendQueue__getKeys();
      for (i = 0; i < size; i++) {
          info = TCPP__sendQueue__get(keys[0]);
          aaaa = keys[0];
          TCPP__sendQueue__remove(keys[0]);
          info.time -= min_time;



          TCPP__sendQueue__insert(aaaa, info);
        }
    }




  size = TCPP__sendQueue__size();
  if (size < 1) {
      sim_log_debug(241U, TRANSPORT_CHANNEL, "finished resending packets!\n");
      return;
    }

  keys = TCPP__sendQueue__getKeys();
  min_time = 30000;
  for (i = 0; i < size; i++) {
      info = TCPP__sendQueue__get(keys[i]);
      aaaa = keys[i];
      if (min_time > aaaa) {
          min_time = aaaa;
          j = i;
        }
    }







  TCPP__Timer__startOneShot(min_time);
}





static inline void TCPP__events__fired(void )
#line 492
{
  if (TCPP__sockets[sim_node()][0].state != ESTABLISHED) {
      TCPP__events__startOneShot(10000);
    }
  else 
#line 495
    {
      TCPP__cli_sendData();
    }
}

# 9 "lib/interfaces/TCP.nc"
inline static void RoomP__TCP__srv_send(uint8_t target, uint8_t *msg, uint8_t size){
#line 9
  TCPP__TCP__srv_send(target, msg, size);
#line 9
}
#line 9
# 13 "dataStructures/interfaces/Hashmap.nc"
inline static RoomP__clients__t RoomP__clients__get(uint32_t key){
#line 13
  char *__nesc_result;
#line 13

#line 13
  __nesc_result = /*RoomC.clients*/HashmapC__5__Hashmap__get(key);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 166 "dataStructures/modules/HashmapC.nc"
static inline uint32_t */*RoomC.clients*/HashmapC__5__Hashmap__getKeys(void )
#line 166
{
  return /*RoomC.clients*/HashmapC__5__keys[sim_node()];
}

# 17 "dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *RoomP__clients__getKeys(void ){
#line 17
  unsigned int *__nesc_result;
#line 17

#line 17
  __nesc_result = /*RoomC.clients*/HashmapC__5__Hashmap__getKeys();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 170 "dataStructures/modules/HashmapC.nc"
static inline uint16_t /*RoomC.clients*/HashmapC__5__Hashmap__size(void )
#line 170
{
  return /*RoomC.clients*/HashmapC__5__numofVals[sim_node()];
}

# 16 "dataStructures/interfaces/Hashmap.nc"
inline static uint16_t RoomP__clients__size(void ){
#line 16
  unsigned short __nesc_result;
#line 16

#line 16
  __nesc_result = /*RoomC.clients*/HashmapC__5__Hashmap__size();
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
#line 11
inline static void RoomP__clients__insert(uint32_t key, RoomP__clients__t input){
#line 11
  /*RoomC.clients*/HashmapC__5__Hashmap__insert(key, input);
#line 11
}
#line 11
# 33 "dataStructures/modules/HashmapC.nc"
static inline uint32_t /*RoomC.clients*/HashmapC__5__hash3(uint32_t k)
#line 33
{
  return 1 + k % 11;
}

#line 30
static inline uint32_t /*RoomC.clients*/HashmapC__5__hash2(uint32_t k)
#line 30
{
  return k % 13;
}




static inline uint32_t /*RoomC.clients*/HashmapC__5__hash(uint32_t k, uint32_t i)
#line 37
{
  return (/*RoomC.clients*/HashmapC__5__hash2(k) + i * /*RoomC.clients*/HashmapC__5__hash3(k)) % /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[sim_node()];
}

#line 143
static inline bool /*RoomC.clients*/HashmapC__5__Hashmap__contains(uint32_t k)
#line 143
{
  uint32_t i = 0;
#line 144
  uint32_t j = 0;






  do {
      j = /*RoomC.clients*/HashmapC__5__hash(k, i);
      if (/*RoomC.clients*/HashmapC__5__map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 155
      i++;
    }
  while (
#line 156
  i < /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

# 14 "dataStructures/interfaces/Hashmap.nc"
inline static bool RoomP__clients__contains(uint32_t key){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = /*RoomC.clients*/HashmapC__5__Hashmap__contains(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 10 "lib/interfaces/TCP.nc"
inline static socket_store_t *RoomP__TCP__getsoc(uint8_t clientId){
#line 10
  struct socket_store_t *__nesc_result;
#line 10

#line 10
  __nesc_result = TCPP__TCP__getsoc(clientId);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 32 "lib/modules/RoomP.nc"
static inline void RoomP__Timert__fired(void )
#line 32
{
  socket_store_t *socket;
  uint8_t i = 0;
#line 34
  uint8_t j = 0;
  uint8_t infoIndex = 1;
  char *word;
  uint32_t *users;



  socket = (socket_store_t *)RoomP__TCP__getsoc(RoomP__relNode[sim_node()]);

  while (socket->rcvdBuff[infoIndex] != '\n' && socket->rcvdBuff[infoIndex - 1] != '\r' && infoIndex < 127) {
      infoIndex++;
    }
  if (infoIndex >= 127) {
      return;
    }


  sim_log_debug(263U, APPLICATION_CHANNEL, "%s\n", socket->rcvdBuff);
  sim_log_debug(264U, APPLICATION_CHANNEL, "%hhu --- %hhu\n", socket->lastRcvd, socket->nextExpected);
  sim_log_debug(265U, APPLICATION_CHANNEL, "%hhu:: %hhu --- %hhu\n", infoIndex, socket->rcvdBuff[infoIndex - 1], socket->rcvdBuff[infoIndex]);


  if (socket->rcvdBuff[infoIndex] == '\n' && socket->rcvdBuff[infoIndex - 1] == '\r' && socket->lastRcvd >= socket->nextExpected - 12) {



      sim_log_debug(266U, APPLICATION_CHANNEL, "Room recieved full message\n");

      if (socket->rcvdBuff[0] == 'h') {
          i = RoomP__clients__contains(RoomP__relNode[sim_node()]);
          if (i == 0) {

              i = RoomP__clients__size();
              if (i == 0) {
                  for (i = 0; socket->rcvdBuff[i + 6] != '\r'; i++) {
                      RoomP__usr1[sim_node()][i] = socket->rcvdBuff[i + 6];
                    }
                  RoomP__usr1[sim_node()][i + 1] = 0;

                  sim_log_debug(267U, APPLICATION_CHANNEL, "Client with usrname %s has connected\n", RoomP__usr1[sim_node()]);
                  RoomP__clients__insert(RoomP__relNode[sim_node()], RoomP__usr1[sim_node()]);
                }
              else {
#line 75
                if (i == 1) {
                    for (i = 0; socket->rcvdBuff[i + 6] != '\r'; i++) {
                        RoomP__usr2[sim_node()][i] = socket->rcvdBuff[i + 6];
                      }
                    RoomP__usr2[sim_node()][i + 1] = 0;

                    sim_log_debug(268U, APPLICATION_CHANNEL, "Client with usrname %s has connected\n", RoomP__usr2[sim_node()]);
                    RoomP__clients__insert(RoomP__relNode[sim_node()], RoomP__usr2[sim_node()]);
                  }
                else {
#line 83
                  if (i == 2) {
                      for (i = 0; socket->rcvdBuff[i + 6] != '\r'; i++) {
                          RoomP__usr3[sim_node()][i] = socket->rcvdBuff[i + 6];
                        }
                      RoomP__usr3[sim_node()][i + 1] = 0;

                      sim_log_debug(269U, APPLICATION_CHANNEL, "Client with usrname %s has connected\n", RoomP__usr3[sim_node()]);
                      RoomP__clients__insert(RoomP__relNode[sim_node()], RoomP__usr3[sim_node()]);
                    }
                  else {
#line 91
                    if (i == 3) {
                        for (i = 0; socket->rcvdBuff[i + 6] != '\r'; i++) {
                            RoomP__usr4[sim_node()][i] = socket->rcvdBuff[i + 6];
                          }
                        RoomP__usr4[sim_node()][i + 1] = 0;

                        sim_log_debug(270U, APPLICATION_CHANNEL, "Client with usrname %s has connected\n", RoomP__usr4[sim_node()]);
                        RoomP__clients__insert(RoomP__relNode[sim_node()], RoomP__usr4[sim_node()]);
                      }
                    }
                  }
                }
            }
        }
      else {
#line 101
        if (socket->rcvdBuff[0] == 'm') {
            sim_log_debug(271U, APPLICATION_CHANNEL, "resending message to %hhu\n", RoomP__relNode[sim_node()]);
            word = RoomP__clients__get(RoomP__relNode[sim_node()]);
            for (i = 0; word[i] != 0; i++) {
                RoomP__buffer[sim_node()][i] = word[i];
              }
            memcpy(RoomP__buffer[sim_node()] + i, socket->rcvdBuff, socket->lastRcvd);
            infoIndex = i + socket->lastRcvd;
            users = RoomP__clients__getKeys();
            for (i = 0; i < RoomP__clients__size(); i++) {
                sim_log_debug(272U, APPLICATION_CHANNEL, "resending message to %hhu\n", users[i]);

                RoomP__TCP__srv_send(users[i], RoomP__buffer[sim_node()], infoIndex);
              }
          }
        else {
#line 115
          if (socket->rcvdBuff[0] == 'w') {
              infoIndex = RoomP__clients__size();
              users = RoomP__clients__getKeys();
              for (i = 0; i < infoIndex; i++) {
                  word = RoomP__clients__get(users[i]);
                  j = 0;
                  while (socket->rcvdBuff[8 + j] > 32) {
                      if (socket->rcvdBuff[8 + j] != word[j]) {
                          infoIndex = 5;
                        }
                      j++;
                    }
                  if (infoIndex != 5) {
                      break;
                    }
                }
              if (infoIndex == 5) {
                  sim_log_debug(273U, APPLICATION_CHANNEL, "whisper target not found\n");
                  return;
                }

              j = i;
              sim_log_debug(274U, APPLICATION_CHANNEL, "whisper target id is %hhu\n", users[i]);
              word = RoomP__clients__get(RoomP__relNode[sim_node()]);
              for (i = 0; word[i] != 0; i++) {
                  RoomP__buffer[sim_node()][i] = word[i];
                }
              infoIndex = i + socket->lastRcvd;
              memcpy(RoomP__buffer[sim_node()] + i, socket->rcvdBuff, socket->lastRcvd);

              RoomP__TCP__srv_send(users[j], RoomP__buffer[sim_node()], infoIndex);
            }
          else {
#line 146
            if (socket->rcvdBuff[0] == 'l') {
                sim_log_debug(275U, APPLICATION_CHANNEL, "dumping clients\n");
                word = "usrs:";
                infoIndex = 0;
                for (i = 0; i < 5; i++) {
                    RoomP__buffer[sim_node()][i] = word[i];
                    infoIndex++;
                  }
                RoomP__buffer[sim_node()][infoIndex] = ' ';
                infoIndex++;
                for (i = 0; RoomP__usr1[sim_node()][i] != 0; i++) {
                    RoomP__buffer[sim_node()][infoIndex] = RoomP__usr1[sim_node()][i];
                    infoIndex++;
                  }
                RoomP__buffer[sim_node()][infoIndex] = ' ';
                infoIndex++;
                for (i = 0; RoomP__usr2[sim_node()][i] != 0; i++) {
                    RoomP__buffer[sim_node()][infoIndex] = RoomP__usr2[sim_node()][i];
                    infoIndex++;
                  }
                RoomP__buffer[sim_node()][infoIndex] = ' ';
                infoIndex++;
                for (i = 0; RoomP__usr3[sim_node()][i] != 0; i++) {
                    RoomP__buffer[sim_node()][infoIndex] = RoomP__usr3[sim_node()][i];
                    infoIndex++;
                  }
                RoomP__buffer[sim_node()][infoIndex] = ' ';
                infoIndex++;
                for (i = 0; RoomP__usr4[sim_node()][i] != 0; i++) {
                    RoomP__buffer[sim_node()][infoIndex] = RoomP__usr4[sim_node()][i];
                    infoIndex++;
                  }
                RoomP__buffer[sim_node()][infoIndex] = '\r';
                infoIndex++;
                RoomP__buffer[sim_node()][infoIndex] = '\n';
                infoIndex++;
                sim_log_debug(276U, APPLICATION_CHANNEL, "DUMPING USRS: %s, relNode = %hhu\n", RoomP__buffer[sim_node()], RoomP__relNode[sim_node()]);
                RoomP__TCP__srv_send(RoomP__relNode[sim_node()], RoomP__buffer[sim_node()], infoIndex);
              }
            }
          }
        }
#line 185
      sim_log_debug(277U, APPLICATION_CHANNEL, "Flushing Socket buffer to node %hhu\n", RoomP__relNode[sim_node()]);
      for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
          socket->rcvdBuff[i] = 0;
        }
      socket->lastRcvd = 0;
      socket->nextExpected = 0;
      socket->lastRead = 0;
    }
}

# 10 "lib/interfaces/TCP.nc"
inline static socket_store_t *ChatCliP__TCP__getsoc(uint8_t clientId){
#line 10
  struct socket_store_t *__nesc_result;
#line 10

#line 10
  __nesc_result = TCPP__TCP__getsoc(clientId);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 42 "lib/modules/ChatCliP.nc"
static inline void ChatCliP__Timer__fired(void )
#line 42
{
  socket_store_t *socket;
  uint8_t i = 0;
  uint8_t infoIndex = 127;

  socket = (socket_store_t *)ChatCliP__TCP__getsoc(1);
  while (socket->rcvdBuff[infoIndex] != '\n' && socket->rcvdBuff[infoIndex - 1] != '\r' && infoIndex > 2) {
      infoIndex--;
    }
  if (infoIndex <= 3) {
      return;
    }
  sim_log_debug(284U, APPLICATION_CHANNEL, "rcvs: %s\n", socket->rcvdBuff);
  sim_log_debug(285U, APPLICATION_CHANNEL, "Flushing Socket buffer to node %hhu\n", 1);
  for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
      socket->rcvdBuff[i] = 0;
    }
  socket->lastRcvd = 0;
  socket->nextExpected = 0;
  socket->lastRead = 0;
}

# 204 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7f37ffe0c950){
#line 83
  switch (arg_0x7f37ffe0c950) {
#line 83
    case 0U:
#line 83
      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      NeighborDiscoveryP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      LinkStateRoutingP__Timer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      IPP__Timer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      TCPP__Timer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      TCPP__events__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      RoomP__Timert__fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      ChatCliP__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7f37ffe0c950);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 61 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer0__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 577 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__cancel_compare(void )
#line 577
{
  sim_log_debug(152U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP__compare[sim_node()]);
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP__compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP__notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP__oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP__oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP__schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP__cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cancelled = 1;
      sim_log_debug(151U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP__overflow[sim_node()]);
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(148U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(149U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP__configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP__timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP__configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_overflow();
    }
  HplAtm128Timer0AsyncP__overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP__Timer0__get();

#line 299
  sim_log_debug(141U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP__shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP__clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP__schedule_new_overflow();
      HplAtm128Timer0AsyncP__notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(131U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(132U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(133U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP__Timer0__set(0);
        }
      else {
          sim_log_debug(134U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(135U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(136U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(137U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP__configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(138U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP__timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer0__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 85 "/opt/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(TossimPacketModelC__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 45 "/opt/tinyos-main/tos/lib/tossim/PlatformC.nc"
static inline error_t PlatformC__Init__init(void )
#line 45
{
  sim_log_debug(47U, "PlatformC", "Initialized mote.\n");
  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 69 "/opt/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 86 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Init__init(void )
#line 86
{
  sim_log_debug(63U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC__initialized[sim_node()] = TRUE;



  TossimPacketModelC__sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 364 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(143U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(control);
#line 46
}
#line 46
# 561 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/opt/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 55 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 65 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[sim_node()][i] = &/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[sim_node()][i];
    }
  /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[sim_node()] = 20;
  /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[sim_node()][i] = &/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[sim_node()][i];
    }
  /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[sim_node()] = 20;
  /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[sim_node()][i] = &/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[sim_node()][i];
    }
  /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[sim_node()] = 20;
  /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[sim_node()][i] = &/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[sim_node()][i];
    }
  /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()] = 20;
  /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()] = 0;
  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void LinkStateRoutingP__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
inline static void NeighborDiscoveryP__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 17 "lib/modules/NeighborDiscoveryP.nc"
static inline void NeighborDiscoveryP__NeighborDiscovery__boot(void )
#line 17
{
  NeighborDiscoveryP__Timer__startPeriodic(5000);


  __nesc_hton_uint16(NeighborDiscoveryP__discPack[sim_node()].dest.nxdata, AM_BROADCAST_ADDR);
  __nesc_hton_uint16(NeighborDiscoveryP__discPack[sim_node()].src.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(NeighborDiscoveryP__discPack[sim_node()].TTL.nxdata, 1);
  __nesc_hton_uint8(NeighborDiscoveryP__discPack[sim_node()].protocol.nxdata, 0);

  sim_log_debug(169U, NEIGHBOR_CHANNEL, "begin ND");
}

# 4 "lib/interfaces/NeighborDiscovery.nc"
inline static void LinkStateRoutingP__ND__boot(void ){
#line 4
  NeighborDiscoveryP__NeighborDiscovery__boot();
#line 4
}
#line 4
# 52 "lib/modules/LinkStateRoutingP.nc"
static inline void LinkStateRoutingP__LinkStateRouting__begin(void )
#line 52
{
  LinkStateRoutingP__ND__boot();
  LinkStateRoutingP__Timer__startPeriodic(5000);

  sim_log_debug(192U, ROUTING_CHANNEL, "begin LS routing");
}

# 2 "lib/interfaces/LinkStateRouting.nc"
inline static void IPP__LinkStateRouting__begin(void ){
#line 2
  LinkStateRoutingP__LinkStateRouting__begin();
#line 2
}
#line 2
# 26 "lib/modules/IPP.nc"
static inline void IPP__IP__init(void )
#line 26
{

  IPP__LinkStateRouting__begin();
}

# 2 "lib/interfaces/IP.nc"
inline static void Node__IP__init(void ){
#line 2
  IPP__IP__init();
#line 2
}
#line 2
# 43 "Node.nc"
static inline void Node__Boot__booted(void )
#line 43
{
  Node__AMControl__start();

  sim_log_debug(108U, GENERAL_CHANNEL, "Booted\n");

  Node__IP__init();
}

# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 60
  Node__Boot__booted();
#line 60
}
#line 60
# 61 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel)
{
  if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      SimMoteP__radioChannel[sim_node()] = newRadioChannel;
      return SUCCESS;
    }

  return FAIL;
}

#line 107
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 107
{
  return SimMoteP__euid[sim_node()];
}

#line 110
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 110
{
  SimMoteP__euid[sim_node()] = e;
}







static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 120
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 137
static inline void SimMoteP__SimMote__turnOff(void )
#line 137
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 209
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 209
{
  char buf[128];

#line 211
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(57U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

# 46 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "%s DEBUG (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 184 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.c"
  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

#line 179
  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}

#line 156
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

#line 117
  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}

#line 110
  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}








  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 199 "/opt/tinyos-main/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 199
{
  int parent_index;

#line 201
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 160
static void swap(node_t *first, node_t *second)
#line 160
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 116 "/opt/tinyos-main/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 116
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 119
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 173
static void down_heap(heap_t *heap, int findex)
#line 173
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 187
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 192
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;
  int i;



  for (j = 0; j < 1000; j++) {
      for (i = 0; i < 16; i++) {
          noiseData[j].noiseGenTime[i] = 0;
          noiseData[j].key[i] = (char *)malloc(NOISE_HISTORY);
        }
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}








  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 186 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 186
{
  bool result;
  int tmp = sim_node();

#line 189
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 189 "/opt/tinyos-main/tos/lib/tossim/sim_tossim.c"
  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/opt/tinyos-main/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/opt/tinyos-main/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 88 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 88
{
  int i;

  makeNoiseModel(node_id);
  makePmfDistr(node_id);

  for (i = 1; i < 16; i++) {
      memcpy((void *)noiseData[node_id].key[i], (void *)noiseData[node_id].key[0], NOISE_HISTORY);
    }
}

#line 436
  void makeNoiseModel(uint16_t node_id)
#line 436
{
  int i;

#line 438
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[0][i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id, 11);
      noiseData[node_id].key[0][NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 123
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 126
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 154
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  sim_noise_hash_t *noise_hash;

#line 160
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      {
        void *ckey = malloc(NOISE_HISTORY);

#line 177
        memcpy(ckey, key, NOISE_HISTORY);
        hashtable_insert(pnoiseTable, ckey, noise_hash);
      }
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 183
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 259
  void arrangeKey(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  char *pKey = noiseData[node_id].key[cchannel];

#line 263
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key[0];
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id, 11);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 206
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 215
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 229
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 249
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 107
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 107
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 112
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 133
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 136
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 303
  char sim_noise_gen(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key[cchannel];
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 314
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 366
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 373
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/opt/tinyos-main/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 380 "/opt/tinyos-main/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)
#line 380
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;

  prev_t = noiseData[node_id].noiseGenTime[cchannel];

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime[cchannel] = cur_t;
      noiseData[node_id].key[cchannel][cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal[cchannel] = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 405
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal[cchannel];
    }
  else 
#line 411
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id, channel);
          arrangeKey(node_id, channel);
          noiseData[node_id].key[cchannel][NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal[cchannel] = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime[cchannel] = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/opt/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/opt/tinyos-main/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC__allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC__Model__receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC__bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC__Packet__payloadLength(TossimActiveMessageC__bufferPointer[sim_node()]);
  payload = TossimActiveMessageC__Packet__getPayload(TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__Packet__maxPayloadLength());

  if (TossimActiveMessageC__AMPacket__isForMe(msg)) {
      sim_log_debug(59U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Receive__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(60U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, TossimActiveMessageC__AMPacket__destination(TossimActiveMessageC__bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Snoop__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 77 "/opt/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 77
{
  if (!ActiveMessageAddressC__set[sim_node()]) {
      ActiveMessageAddressC__addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC__set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC__addr[sim_node()];
}

# 165 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 73 "/opt/tinyos-main/tos/system/QueueC.nc"
static void /*CommandHandlerC.QueueC*/QueueC__0__printQueue(void )
#line 73
{

  int i;
#line 75
  int j;

#line 76
  sim_log_debug(302U, "QueueC", "head <-");
  for (i = /*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()]; i < /*CommandHandlerC.QueueC*/QueueC__0__head[sim_node()] + /*CommandHandlerC.QueueC*/QueueC__0__size[sim_node()]; i++) {
      sim_log_debug_clear(303U, "QueueC", "[");
      for (j = 0; j < sizeof(/*CommandHandlerC.QueueC*/QueueC__0__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*CommandHandlerC.QueueC*/QueueC__0__queue[sim_node()][i % 20])[j];

#line 81
          sim_log_debug_clear(304U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(305U, "QueueC", "] ");
    }
  sim_log_debug_clear(306U, "QueueC", "<- tail\n");
}

# 205 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(52U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(53U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 167 "lib/modules/TCPP.nc"
static void TCPP__TCP__handle_packet(pack in_pack)
#line 167
{
  socket_t socket_id;
  socket_store_t *active_socket;
  TCPP__TCPpacket *ttcpack;
  TCPP__TCPpacket tcpack;





  if (__nesc_ntoh_uint16(in_pack.dest.nxdata) != TOS_NODE_ID) {
      TCPP__IP__send(in_pack, __nesc_ntoh_uint16(in_pack.dest.nxdata));
      return;
    }
  else {
#line 180
    if (__nesc_ntoh_uint8(in_pack.protocol.nxdata) != PROTOCOL_TCP) {
        TCPP__IP__packet_recived(in_pack);
        return;
      }
    }

  ttcpack = (TCPP__TCPpacket *)in_pack.payload;
  tcpack = *ttcpack;

  if (TCPP__node_state[sim_node()] == 1) {
      if (ttcpack->flag == TCPP__SYN) {

          TCPP__srv_initSynAck(in_pack);
          return;
        }

      socket_id = TCPP__get_socket(*ttcpack);
      active_socket = &TCPP__sockets[sim_node()][socket_id];

      if (ttcpack->flag == TCPP__ACK && active_socket->state != LAST_ACK) {


          TCPP__handle_ack(__nesc_ntoh_uint16(in_pack.seq.nxdata), socket_id);

          if (active_socket->state == SYN_RCVD) {
              TCPP__srv_toEstablished(socket_id);
            }
        }
      else {
#line 207
        if (ttcpack->flag == TCPP__DATA) {


            TCPP__srv_handleData(in_pack, socket_id);
            TCPP__send_ack(in_pack, socket_id);
          }
        else {
#line 212
          if (ttcpack->flag == TCPP__FIN) {
              TCPP__dumpRcvdbuff(socket_id);
              TCPP__send_ack(in_pack, socket_id);
              TCPP__srv_initFinAck(socket_id);
            }
          else {
#line 216
            if (ttcpack->flag == TCPP__ACK && active_socket->state == LAST_ACK) {
                active_socket->flag = 0;
                active_socket->state = CLOSED;
                TCPP__handle_ack(__nesc_ntoh_uint16(in_pack.seq.nxdata), socket_id);
                sim_log_debug(233U, TRANSPORT_CHANNEL, "GOODBYE to NODE %hhu\n", __nesc_ntoh_uint16(in_pack.src.nxdata));
              }
            }
          }
        }
    }
  else {
#line 224
    if (TCPP__node_state[sim_node()] == 2) {


        if (ttcpack->flag == TCPP__SYNACK) {

            TCPP__cli_synAck_recieved(in_pack);
          }

        if (ttcpack->flag == TCPP__ACK) {
            sim_log_debug(234U, TRANSPORT_CHANNEL, "```ackRecieved for %hhu\n", ttcpack->seq);
            TCPP__cli_interpretAck(in_pack);
          }
        if (ttcpack->flag == TCPP__DATA) {

            TCPP__srv_handleData(in_pack, 0);
            TCPP__send_ack(in_pack, 0);
          }
        if (ttcpack->flag == TCPP__FIN) {
            TCPP__cli_timeWait();
            TCPP__send_ack(in_pack, 0);
          }
      }
    }
}

# 98 "lib/modules/IPP.nc"
static void IPP__IP__send(pack in_pack, uint8_t dest)
#line 98
{
  uint8_t hop = IPP__LinkStateRouting__getNext(dest);

#line 100
  __nesc_hton_uint16(in_pack.seq.nxdata, __nesc_ntoh_uint16(in_pack.seq.nxdata));
  IPP__Sender__send(in_pack, hop);

  hop = IPP__Unconfirmed__size();
  sim_log_debug(212U, ROUTING_CHANNEL, "sending packet with %d unconfirmed packets\n", hop);
}

# 227 "lib/modules/LinkStateRoutingP.nc"
static uint8_t LinkStateRoutingP__LinkStateRouting__getNext(uint8_t dest)
#line 227
{

  uint8_t *converter;
  uint16_t temp = LinkStateRoutingP__RoutingTable__get(dest);

#line 231
  converter = (uint8_t *)&temp;
  return converter[0];
}

# 130 "dataStructures/modules/HashmapC.nc"
static /*LinkStateRoutingC.HashmapC*/HashmapC__2__t /*LinkStateRoutingC.HashmapC*/HashmapC__2__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*LinkStateRoutingC.HashmapC*/HashmapC__2__hash(k, i);
      if (/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].key == k) {
        return /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[sim_node()]);


  return /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[sim_node()][0].value;
}

# 49 "lib/modules/SimpleSendP.nc"
static error_t /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__SimpleSend__send(pack msg, uint16_t dest)
#line 49
{





  if (!/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__empty()) {
      sendInfo *input;

      input = /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Pool__get();
      input->packet = msg;
      input->dest = dest;



      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Queue__enqueue(input);


      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__postSendTask();

      return SUCCESS;
    }
  return FAIL;
}

# 73 "/opt/tinyos-main/tos/system/QueueC.nc"
static void /*IPC.SimpleSendC.QueueC*/QueueC__3__printQueue(void )
#line 73
{

  int i;
#line 75
  int j;

#line 76
  sim_log_debug(226U, "QueueC", "head <-");
  for (i = /*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()]; i < /*IPC.SimpleSendC.QueueC*/QueueC__3__head[sim_node()] + /*IPC.SimpleSendC.QueueC*/QueueC__3__size[sim_node()]; i++) {
      sim_log_debug_clear(227U, "QueueC", "[");
      for (j = 0; j < sizeof(/*IPC.SimpleSendC.QueueC*/QueueC__3__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*IPC.SimpleSendC.QueueC*/QueueC__3__queue[sim_node()][i % 20])[j];

#line 81
          sim_log_debug_clear(228U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(229U, "QueueC", "] ");
    }
  sim_log_debug_clear(230U, "QueueC", "<- tail\n");
}

# 38 "lib/modules/SimpleSendP.nc"
static void /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__postSendTask(void )
#line 38
{


  if (/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__isRunning() == FALSE) {

      /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__sendTimer__startOneShot(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__Random__rand16() % 300);
    }
}

# 144 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 161 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP__last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP__sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP__shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(140U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP__last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP__lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP__lastZero[sim_node()];
}

# 158 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 158
{
  long long int result;
  int tmp = sim_node();

#line 161
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 457
{
  sim_log_debug(146U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 69 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 31 "lib/modules/IPP.nc"
static void IPP__IP__packet_recived(pack in_pack)
#line 31
{
  uint8_t next_hop;
  pack temp;

  if (__nesc_ntoh_uint16(in_pack.dest.nxdata) == AM_BROADCAST_ADDR) {

      IPP__LinkStateRouting__packet_recived(in_pack);
    }
  else {
#line 38
    if (__nesc_ntoh_uint16(in_pack.dest.nxdata) == TOS_NODE_ID) {

        sim_log_debug(206U, GENERAL_CHANNEL, "Packet Received by %d\n", TOS_NODE_ID);
        if (__nesc_ntoh_uint8(in_pack.protocol.nxdata) == 0) {
            sim_log_debug(207U, GENERAL_CHANNEL, "Package Payload: %s\n", in_pack.payload);

            __nesc_hton_uint8(in_pack.protocol.nxdata, 1);
            __nesc_hton_uint16(in_pack.dest.nxdata, __nesc_ntoh_uint16(in_pack.src.nxdata));
            __nesc_hton_uint16(in_pack.src.nxdata, TOS_NODE_ID);

            next_hop = IPP__LinkStateRouting__getNext(__nesc_ntoh_uint16(in_pack.dest.nxdata));

            IPP__Sender__send(in_pack, next_hop);
          }
        else {
#line 51
          if (__nesc_ntoh_uint8(in_pack.protocol.nxdata) == 1) {
              temp = IPP__Unconfirmed__get(__nesc_ntoh_uint16(in_pack.seq.nxdata));
              if (__nesc_ntoh_uint16(temp.seq.nxdata) == __nesc_ntoh_uint16(in_pack.seq.nxdata)) {
                  IPP__Unconfirmed__remove(__nesc_ntoh_uint16(in_pack.seq.nxdata));
                  sim_log_debug(208U, GENERAL_CHANNEL, "Return ping for seq %d recieved\n", __nesc_ntoh_uint16(in_pack.seq.nxdata));
                }
              else 
#line 56
                {
                  sim_log_debug(209U, GENERAL_CHANNEL, "Packet Received by %d\n", TOS_NODE_ID);
                }
            }
          }
      }
    else 
#line 60
      {

        next_hop = IPP__LinkStateRouting__getNext(__nesc_ntoh_uint16(in_pack.dest.nxdata));
        sim_log_debug(210U, GENERAL_CHANNEL, "Relaying packet dest for %d to %d\n", __nesc_ntoh_uint16(in_pack.dest.nxdata), next_hop);
        IPP__Sender__send(in_pack, next_hop);
      }
    }
}

# 41 "dataStructures/modules/HashmapC.nc"
static void /*FloodingC.HashmapC*/HashmapC__0__Hashmap__insert(uint32_t k, /*FloodingC.HashmapC*/HashmapC__0__t input)
#line 41
{
  uint32_t i = 0;
#line 42
  uint32_t j = 0;

  if (k == /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[sim_node()]) {
      sim_log_debug(117U, HASHMAP_CHANNEL, "[HASHMAP] You cannot insert a key of %d.", /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[sim_node()]);
      return;
    }

  do {

      j = /*FloodingC.HashmapC*/HashmapC__0__hash(k, i);


      if (/*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].key == /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[sim_node()] || /*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].key == k) {


          if (/*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].key == /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[sim_node()]) {
              /*FloodingC.HashmapC*/HashmapC__0__keys[sim_node()][/*FloodingC.HashmapC*/HashmapC__0__numofVals[sim_node()]] = k;
              /*FloodingC.HashmapC*/HashmapC__0__numofVals[sim_node()]++;
            }


          /*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].value = input;
          /*FloodingC.HashmapC*/HashmapC__0__map[sim_node()][j].key = k;
          return;
        }
      i++;
    }
  while (
  i < /*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[sim_node()]);
}

# 49 "lib/modules/SimpleSendP.nc"
static error_t /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__SimpleSend__send(pack msg, uint16_t dest)
#line 49
{





  if (!/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__empty()) {
      sendInfo *input;

      input = /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Pool__get();
      input->packet = msg;
      input->dest = dest;



      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Queue__enqueue(input);


      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__postSendTask();

      return SUCCESS;
    }
  return FAIL;
}

# 73 "/opt/tinyos-main/tos/system/QueueC.nc"
static void /*FloodingC.SimpleSendC.QueueC*/QueueC__1__printQueue(void )
#line 73
{

  int i;
#line 75
  int j;

#line 76
  sim_log_debug(162U, "QueueC", "head <-");
  for (i = /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()]; i < /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[sim_node()] + /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[sim_node()]; i++) {
      sim_log_debug_clear(163U, "QueueC", "[");
      for (j = 0; j < sizeof(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[sim_node()][i % 20])[j];

#line 81
          sim_log_debug_clear(164U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(165U, "QueueC", "] ");
    }
  sim_log_debug_clear(166U, "QueueC", "<- tail\n");
}

# 38 "lib/modules/SimpleSendP.nc"
static void /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__postSendTask(void )
#line 38
{


  if (/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__isRunning() == FALSE) {

      /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__sendTimer__startOneShot(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__Random__rand16() % 300);
    }
}

# 130 "dataStructures/modules/HashmapC.nc"
static /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash(k, i);
      if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key == k) {
        return /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[sim_node()]);


  return /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][0].value;
}

#line 41
static void /*NeighborDiscoveryC.HashmapC*/HashmapC__1__Hashmap__insert(uint32_t k, /*NeighborDiscoveryC.HashmapC*/HashmapC__1__t input)
#line 41
{
  uint32_t i = 0;
#line 42
  uint32_t j = 0;

  if (k == /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()]) {
      sim_log_debug(172U, HASHMAP_CHANNEL, "[HASHMAP] You cannot insert a key of %d.", /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()]);
      return;
    }

  do {

      j = /*NeighborDiscoveryC.HashmapC*/HashmapC__1__hash(k, i);


      if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key == /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()] || /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key == k) {


          if (/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key == /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[sim_node()]) {
              /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[sim_node()][/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()]] = k;
              /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[sim_node()]++;
            }


          /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].value = input;
          /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[sim_node()][j].key = k;
          return;
        }
      i++;
    }
  while (
  i < /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[sim_node()]);
}

# 49 "lib/modules/SimpleSendP.nc"
static error_t /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__SimpleSend__send(pack msg, uint16_t dest)
#line 49
{





  if (!/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__empty()) {
      sendInfo *input;

      input = /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Pool__get();
      input->packet = msg;
      input->dest = dest;



      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Queue__enqueue(input);


      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__postSendTask();

      return SUCCESS;
    }
  return FAIL;
}

# 73 "/opt/tinyos-main/tos/system/QueueC.nc"
static void /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__printQueue(void )
#line 73
{

  int i;
#line 75
  int j;

#line 76
  sim_log_debug(185U, "QueueC", "head <-");
  for (i = /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()]; i < /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[sim_node()] + /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[sim_node()]; i++) {
      sim_log_debug_clear(186U, "QueueC", "[");
      for (j = 0; j < sizeof(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[sim_node()][i % 20])[j];

#line 81
          sim_log_debug_clear(187U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(188U, "QueueC", "] ");
    }
  sim_log_debug_clear(189U, "QueueC", "<- tail\n");
}

# 38 "lib/modules/SimpleSendP.nc"
static void /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__postSendTask(void )
#line 38
{


  if (/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__isRunning() == FALSE) {

      /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__sendTimer__startOneShot(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__Random__rand16() % 300);
    }
}

# 130 "dataStructures/modules/HashmapC.nc"
static /*IPC.HashmapC*/HashmapC__3__t /*IPC.HashmapC*/HashmapC__3__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*IPC.HashmapC*/HashmapC__3__hash(k, i);
      if (/*IPC.HashmapC*/HashmapC__3__map[sim_node()][j].key == k) {
        return /*IPC.HashmapC*/HashmapC__3__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[sim_node()]);


  return /*IPC.HashmapC*/HashmapC__3__map[sim_node()][0].value;
}

# 966 "lib/modules/TCPP.nc"
static socket_t TCPP__get_socket(TCPP__TCPpacket tcpack)
#line 966
{
  uint8_t i;
  socket_t socket_id;
  socket_addr_t addr;

#line 970
  __nesc_hton_uint8(addr.port.nxdata, tcpack.srcp);
  __nesc_hton_uint16(addr.addr.nxdata, tcpack.src);


  for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {


      if (__nesc_ntoh_uint16(TCPP__sockets[sim_node()][i].dest.addr.nxdata) == __nesc_ntoh_uint16(addr.addr.nxdata) && __nesc_ntoh_uint8(TCPP__sockets[sim_node()][i].dest.port.nxdata) == __nesc_ntoh_uint8(addr.port.nxdata) && TCPP__sockets[sim_node()][i].src == tcpack.destp) {
          socket_id = i;
          return socket_id;
        }
    }
  return 0;
}

#line 922
static void TCPP__init_socket(socket_t *new_socket, uint8_t local_port, uint8_t dest, uint8_t dest_port)
#line 922
{
  uint8_t i;
  socket_store_t *active_socket;
  socket_addr_t addr;


  for (i = 1; i < MAX_NUM_OF_SOCKETS && *new_socket != 0; i++) {

      if (TCPP__sockets[sim_node()][i].flag == 0) {
          *new_socket = i;
          break;
        }
    }


  active_socket = &TCPP__sockets[sim_node()][*new_socket];
  active_socket->flag = 1;
  active_socket->state = CLOSED;
  active_socket->src = local_port;
  __nesc_hton_uint8(addr.port.nxdata, dest_port);
  __nesc_hton_uint16(addr.addr.nxdata, dest);
  __nesc_hton_uint16(active_socket->dest.addr.nxdata, dest);
  __nesc_hton_uint8(active_socket->dest.port.nxdata, dest_port);


  active_socket->lastWritten = 0;
  active_socket->lastAck = 0;
  active_socket->lastSent = 0;


  active_socket->lastRead = 0;
  active_socket->lastRcvd = 0;
  active_socket->nextExpected = 0;

  active_socket->RTT = 1000;
  active_socket->effectiveWindow = 0;
}

#line 995
static void TCPP__makeTCpack(TCPP__TCPpacket *packet, uint8_t src, uint8_t dest, uint8_t srcp, uint8_t destp, uint8_t seq, uint8_t ack, uint8_t flag, uint8_t advwin, uint8_t *payload, uint8_t length)
#line 995
{
  uint8_t i;

#line 997
  packet->src = src;
  packet->dest = dest;
  packet->srcp = srcp;
  packet->destp = destp;
  packet->seq = seq;
  packet->ack = ack;
  packet->flag = flag;
  packet->advwin = advwin;
  for (i = 0; i < 12; i++) {
      packet->payload[i] = 0;
    }
  memcpy(packet->payload, payload, length);
}

#line 986
static void TCPP__makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
#line 986
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

#line 252
static void TCPP__send_packet(pack in_pack, socket_t socket_id, uint16_t delay)
#line 252
{
  uint8_t i;
  tcpQueueInfo info;
  uint32_t key;

  info.packet = in_pack;
  info.time = TCPP__sockets[sim_node()][socket_id].RTT;
  info.seq = __nesc_ntoh_uint16(in_pack.seq.nxdata);
  info.socket_id = socket_id;

  sim_log_debug(235U, TRANSPORT_CHANNEL, "%hu, %hu\n", TCPP__sockets[sim_node()][socket_id].RTT, info.time);


  while (TCPP__sendQueue__contains(info.time)) {
      info.time++;
    }
  TCPP__sendQueue__insert((uint32_t )info.time, info);

  sim_log_debug(236U, TRANSPORT_CHANNEL, "adding to sendqueue with seq %hhu\n", info.seq);

  if (!TCPP__Timer__isRunning()) {
      TCPP__Timer__startOneShot(info.time);
    }
  else {
#line 274
    if (TCPP__Timer__getdt() + TCPP__Timer__gett0() > TCPP__Timer__getNow() + info.time) {
        TCPP__Timer__startOneShot(info.time);
      }
    }
}

# 41 "dataStructures/modules/HashmapC.nc"
static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__insert(uint32_t k, /*TCPC.sendQueue*/HashmapC__4__t input)
#line 41
{
  uint32_t i = 0;
#line 42
  uint32_t j = 0;

  if (k == /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()]) {
      sim_log_debug(257U, HASHMAP_CHANNEL, "[HASHMAP] You cannot insert a key of %d.", /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()]);
      return;
    }

  do {

      j = /*TCPC.sendQueue*/HashmapC__4__hash(k, i);


      if (/*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()] || /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == k) {


          if (/*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[sim_node()]) {
              /*TCPC.sendQueue*/HashmapC__4__keys[sim_node()][/*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()]] = k;
              /*TCPC.sendQueue*/HashmapC__4__numofVals[sim_node()]++;
            }


          /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].value = input;
          /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key = k;
          return;
        }
      i++;
    }
  while (
  i < /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()]);
}

# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TCPP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
#line 73
}
#line 73
# 309 "lib/modules/TCPP.nc"
static void TCPP__handle_ack(uint8_t seq, socket_t socket_id)
#line 309
{

  uint32_t *keys;
  uint8_t size;
  uint8_t i;
  tcpQueueInfo info;

  keys = TCPP__sendQueue__getKeys();
  size = TCPP__sendQueue__size();




  for (i = 0; i < size; i++) {
      info = TCPP__sendQueue__get(keys[i]);

      if (info.seq == seq && info.socket_id == socket_id) {
          TCPP__sendQueue__remove(keys[i]);
          break;
        }
    }

  size = TCPP__sendQueue__size();

  if (size == 0) {
      TCPP__Timer__stop();
    }
}

# 130 "dataStructures/modules/HashmapC.nc"
static /*TCPC.sendQueue*/HashmapC__4__t /*TCPC.sendQueue*/HashmapC__4__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*TCPC.sendQueue*/HashmapC__4__hash(k, i);
      if (/*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == k) {
        return /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()]);


  return /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][0].value;
}

#line 109
static void /*TCPC.sendQueue*/HashmapC__4__Hashmap__remove(uint32_t k)
#line 109
{
  uint32_t i = 0;
#line 110
  uint32_t j = 0;
  bool removed = 0;

#line 112
  do {
      j = /*TCPC.sendQueue*/HashmapC__4__hash(k, i);
      if (/*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key == k) {
          /*TCPC.sendQueue*/HashmapC__4__map[sim_node()][j].key = 0;
          removed = 1;
          break;
        }
      i++;
    }
  while (
#line 120
  i < /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[sim_node()]);
  if (removed) 
    {
      /*TCPC.sendQueue*/HashmapC__4__removeFromKeyList(k);
    }
}

# 556 "lib/modules/TCPP.nc"
static void TCPP__srv_handleData(pack in_pack, socket_t socket_id)
#line 556
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][socket_id];
  TCPP__TCPpacket *tcpack = (TCPP__TCPpacket *)in_pack.payload;
  uint8_t temp;
  uint8_t i;

  sim_log_debug(244U, TRANSPORT_CHANNEL, "DATA FROM NODE %hu, %hhu RECIVED\n", __nesc_ntoh_uint16(in_pack.src.nxdata), __nesc_ntoh_uint16(in_pack.seq.nxdata));





  temp = tcpack->seq + 12;
  if (temp - active_socket->lastRead > SOCKET_BUFFER_SIZE) {
      temp = SOCKET_BUFFER_SIZE + active_socket->lastRead;
    }

  if (active_socket->lastRcvd < temp) {
      active_socket->lastRcvd = temp;
    }

  temp = SOCKET_BUFFER_SIZE - tcpack->seq + active_socket->lastRead;

  temp = 12;

  if (active_socket->rcvdBuff[tcpack->seq - active_socket->lastRead] == 0 && active_socket->lastRead <= tcpack->seq) {









      for (i = 0; i < 12 && tcpack->seq + i - active_socket->lastRead < SOCKET_BUFFER_SIZE; i++) {
          active_socket->rcvdBuff[tcpack->seq + i - active_socket->lastRead] = tcpack->payload[i];
        }

      active_socket->nextExpected += temp;
      if (active_socket->nextExpected - active_socket->lastRead >= SOCKET_BUFFER_SIZE && active_socket->lastRcvd - active_socket->lastRead >= SOCKET_BUFFER_SIZE) {
          sim_log_debug(245U, TRANSPORT_CHANNEL, "gotten all data\n");

          TCPP__dumpRcvdbuff(socket_id);
          for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
              active_socket->rcvdBuff[i] = 0;
            }
          active_socket->lastRead = SOCKET_BUFFER_SIZE;
        }
    }
}

#line 1025
static void TCPP__dumpRcvdbuff(socket_t socket_id)
#line 1025
{
  uint8_t i;

#line 1027
  for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
      sim_log_debug(256U, TRANSPORT_CHANNEL, "reading rcvdbuff: %hhu\n", TCPP__sockets[sim_node()][socket_id].rcvdBuff[i]);
    }
}

#line 281
static void TCPP__send_ack(pack in_pack, socket_t socket_id)
#line 281
{
  uint8_t num = __nesc_ntoh_uint16(in_pack.seq.nxdata);
  pack send_pack;
  uint8_t advwin;
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][socket_id];


  if (TCPP__socket_highAck[sim_node()][socket_id] < num) {
      TCPP__socket_highAck[sim_node()][socket_id] = num;
    }

  if (num == TCPP__socket_nextAck[sim_node()][socket_id]) {
      TCPP__socket_nextAck[sim_node()][socket_id]++;
    }
  else {
#line 294
    if (num < TCPP__socket_nextAck[sim_node()][socket_id]) {
        sim_log_debug(237U, TRANSPORT_CHANNEL, "old packet from %hhu recieved\n", __nesc_ntoh_uint16(in_pack.src.nxdata));
      }
    }

  advwin = SOCKET_BUFFER_SIZE - active_socket->lastRcvd + active_socket->lastRead;

  sim_log_debug(238U, TRANSPORT_CHANNEL, "ack for seq %hhu sent with advwin %hhu\n", socket_id, advwin);


  TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(TCPP__sockets[sim_node()][socket_id].dest.addr.nxdata), TCPP__sockets[sim_node()][socket_id].src, __nesc_ntoh_uint8(TCPP__sockets[sim_node()][socket_id].dest.port.nxdata), __nesc_ntoh_uint16(in_pack.seq.nxdata), active_socket->lastRcvd, TCPP__ACK, advwin, 0, 0);
  TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(TCPP__sockets[sim_node()][socket_id].dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, __nesc_ntoh_uint16(in_pack.seq.nxdata), (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TCPP__IP__send(send_pack, __nesc_ntoh_uint16(send_pack.dest.nxdata));
}

# 110 "/opt/tinyos-main/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

  void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)
#line 123
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 125
  __nesc_hton_uint8(hdr->dsn.nxdata, dsn);
}

  uint8_t sim_packet_dsn(sim_packet_t *msg)
#line 128
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 130
  return __nesc_ntoh_uint8(hdr->dsn.nxdata);
}

# 51 "/opt/tinyos-main/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(48U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 180 "/opt/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(50U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(51U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static error_t /*CommandHandlerC.PoolC.PoolP*/PoolP__3__Pool__put(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[sim_node()] + /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[sim_node()][emptyIndex] = newVal;
      /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]++;
      sim_log_debug(301U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[sim_node()]);
      return SUCCESS;
    }
}

# 506 "lib/modules/TCPP.nc"
static void TCPP__TCP__init_server(uint8_t port)
#line 506
{
  TCPP__node_state[sim_node()] = 1;
  TCPP__serv_port[sim_node()] = port;
  sim_log_debug(242U, TRANSPORT_CHANNEL, "server started on port %hhu\n", port);
}

#line 769
static void TCPP__TCP__cli_send(uint8_t *msg, uint8_t size)
#line 769
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][0];
  uint8_t i;

  for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
      active_socket->sendBuff[i] = 0;
    }
  memcpy(active_socket->sendBuff, msg, size);
  active_socket->lastSent = 0;
  active_socket->lastAck = 0;
  active_socket->lastWritten = size;

  sim_log_debug(250U, APPLICATION_CHANNEL, "%s\n", active_socket->sendBuff);

  TCPP__cli_data_sent[sim_node()] = 0;
  TCPP__cli_data_to_send[sim_node()] = size / 2 + 1;

  if (active_socket->state != ESTABLISHED) {
      TCPP__events__startOneShot(5000);
    }
  else 
#line 788
    {
      TCPP__cli_sendData();
    }
}

# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TCPP__events__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 824 "lib/modules/TCPP.nc"
static void TCPP__cli_sendData(void )
#line 824
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][0];
  uint8_t send_data;
  pack send_pack;
  uint8_t i;





  if (active_socket->effectiveWindow > 0 && TCPP__cli_data_to_send[sim_node()] != TCPP__cli_data_sent[sim_node()]) {


      send_data = active_socket->effectiveWindow;
      if (send_data > (TCPP__cli_data_to_send[sim_node()] - TCPP__cli_data_sent[sim_node()]) * 2) {
          send_data = (TCPP__cli_data_to_send[sim_node()] - TCPP__cli_data_sent[sim_node()]) * 2;
        }

      if (send_data > 12) {
          send_data = 12;
        }
      TCPP__cli_data_sent[sim_node()] += send_data / 2;

      sim_log_debug(252U, TRANSPORT_CHANNEL, "%hu ,,, %hhu\n", TCPP__cli_data_sent[sim_node()], send_data);





      TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), active_socket->lastSent, 0, TCPP__DATA, SOCKET_BUFFER_SIZE, (uint8_t *)(active_socket->sendBuff + active_socket->lastSent), send_data);

      TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, TCPP__socket_seq[sim_node()][0] + 1, (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
      TCPP__send_packet(send_pack, 0, (uint16_t )TCPP__socket_seq[sim_node()][0]);






      TCPP__socket_seq[sim_node()][0]++;

      active_socket->lastSent += send_data;
      active_socket->effectiveWindow -= send_data;
      TCPP__cli_sendData();
    }
}

# 145 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 170
static void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 90 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 3) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(153U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 3) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      sim_log_debug(154U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(155U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 3;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(156U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 73 "/opt/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 78
  sim_log_debug(58U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC__AMPacket__address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC__Model__send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 290 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg)
#line 290
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 294
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(84U, "CpmModelC", "packetReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(85U, "CpmModelC", "packetReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  return noise;
}

#line 131
static double CpmModelC__noise_hash_generation(void )
#line 131
{
  double CT = CpmModelC__timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(76U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient);
    }
  sim_log_debug(77U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 98 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  uint8_t sim_mote_get_radio_channel(int mote)
#line 98
{
  uint8_t result;
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  result = SimMoteP__SimMote__getRadioChannel();
  sim_set_node(tmp);
  return result;
}

# 189 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 3) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(157U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg);
    }
}

#line 174
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] < 3) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 253 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__shouldReceive(double SNR)
#line 253
{
  double prr = CpmModelC__prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 256
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 260
        prr = 0.0;
        }
    }
#line 262
  return prr;
}

# 19 "/opt/tinyos-main/tos/lib/tossim/sim_lqi.c"
  uint8_t sim_lqi_generate(double SNR)
{
  uint8_t coin = RandomUniform() * 100;
  uint8_t i;
#line 22
  uint8_t closest_i = 0;


  for (i = 0; i < allSnr_len; i++) {
      if (allSnr[i].snr == SNR) {
          break;
        }
      else 
#line 28
        {
          if (fabs(SNR - allSnr[i].snr) < fabs(SNR - allSnr[closest_i].snr)) {
              closest_i = i;
            }
        }
    }
  i = i == allSnr_len ? closest_i : i;


  return bi_search(allSnr[i].lqi, 0, allSnr[i].numLqi - 1, coin);
}

#line 5
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin)
{
  uint8_t i = low_i + (high_i - low_i + 1) / 2;
  uint8_t fromCDF = i == 0 ? 0 : lqi[i - 1].cdf;
  uint8_t toCDF = lqi[i].cdf;

#line 10
  if (fromCDF <= coin && coin < toCDF) {
      return lqi[i].lqi;
    }
  else {
#line 12
    if (fromCDF > coin) {
        return bi_search(lqi, low_i, i - 1, coin);
      }
    else 
#line 14
      {
        return bi_search(lqi, i + 1, high_i, coin);
      }
    }
}

# 307 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      return TossimPacketModelC__Packet__shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 221 "/opt/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r)
#line 221
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC__sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 73 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 1033 "lib/modules/TCPP.nc"
static socket_store_t *TCPP__TCP__getsoc(uint8_t clientId)
#line 1033
{
  socket_t socket_id;
  uint8_t i;

  for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {
      if (__nesc_ntoh_uint16(TCPP__sockets[sim_node()][i].dest.addr.nxdata) == clientId) {
          socket_id = i;
          break;
        }
    }
  return &TCPP__sockets[sim_node()][socket_id];
}

# 41 "dataStructures/modules/HashmapC.nc"
static void /*RoomC.clients*/HashmapC__5__Hashmap__insert(uint32_t k, /*RoomC.clients*/HashmapC__5__t input)
#line 41
{
  uint32_t i = 0;
#line 42
  uint32_t j = 0;

  if (k == /*RoomC.clients*/HashmapC__5__EMPTY_KEY[sim_node()]) {
      sim_log_debug(278U, HASHMAP_CHANNEL, "[HASHMAP] You cannot insert a key of %d.", /*RoomC.clients*/HashmapC__5__EMPTY_KEY[sim_node()]);
      return;
    }

  do {

      j = /*RoomC.clients*/HashmapC__5__hash(k, i);


      if (/*RoomC.clients*/HashmapC__5__map[sim_node()][j].key == /*RoomC.clients*/HashmapC__5__EMPTY_KEY[sim_node()] || /*RoomC.clients*/HashmapC__5__map[sim_node()][j].key == k) {


          if (/*RoomC.clients*/HashmapC__5__map[sim_node()][j].key == /*RoomC.clients*/HashmapC__5__EMPTY_KEY[sim_node()]) {
              /*RoomC.clients*/HashmapC__5__keys[sim_node()][/*RoomC.clients*/HashmapC__5__numofVals[sim_node()]] = k;
              /*RoomC.clients*/HashmapC__5__numofVals[sim_node()]++;
            }


          /*RoomC.clients*/HashmapC__5__map[sim_node()][j].value = input;
          /*RoomC.clients*/HashmapC__5__map[sim_node()][j].key = k;
          return;
        }
      i++;
    }
  while (
  i < /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[sim_node()]);
}

#line 130
static /*RoomC.clients*/HashmapC__5__t /*RoomC.clients*/HashmapC__5__Hashmap__get(uint32_t k)
#line 130
{
  uint32_t i = 0;
#line 131
  uint32_t j = 0;

#line 132
  do {
      j = /*RoomC.clients*/HashmapC__5__hash(k, i);
      if (/*RoomC.clients*/HashmapC__5__map[sim_node()][j].key == k) {
        return /*RoomC.clients*/HashmapC__5__map[sim_node()][j].value;
        }
#line 136
      i++;
    }
  while (
#line 137
  i < /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[sim_node()]);


  return /*RoomC.clients*/HashmapC__5__map[sim_node()][0].value;
}

# 622 "lib/modules/TCPP.nc"
static void TCPP__TCP__srv_send(uint8_t target, uint8_t *msg, uint8_t size)
#line 622
{


  socket_store_t *active_socket;
  socket_t socket_id;
  uint8_t i;

  for (i = 1; i < MAX_NUM_OF_SOCKETS; i++) {
      if (__nesc_ntoh_uint16(TCPP__sockets[sim_node()][i].dest.addr.nxdata) == target) {
          socket_id = i;
          break;
        }
    }
  active_socket = &TCPP__sockets[sim_node()][socket_id];

  for (i = 0; i < SOCKET_BUFFER_SIZE; i++) {
      active_socket->sendBuff[i] = 0;
    }

  memcpy(active_socket->sendBuff, msg, size);
  active_socket->lastSent = 0;
  active_socket->lastAck = 0;
  active_socket->lastWritten = size;
  active_socket->effectiveWindow = SOCKET_BUFFER_SIZE;

  sim_log_debug(247U, APPLICATION_CHANNEL, "send buffer: %s, socket %hhu:, dest: %hhu\n", active_socket->sendBuff, socket_id, target);

  TCPP__srv_send_data(socket_id);
}

static void TCPP__srv_send_data(socket_t socket_id)
#line 652
{
  socket_store_t *active_socket = &TCPP__sockets[sim_node()][socket_id];
  uint8_t send_data;
  pack send_pack;
  uint8_t i;

  if (active_socket->effectiveWindow > 0 && active_socket->lastSent <= active_socket->lastWritten) {
      send_data = active_socket->effectiveWindow;
      if (send_data > (active_socket->lastWritten - active_socket->lastSent) * 2) {
          send_data = (active_socket->lastWritten - active_socket->lastSent) * 2;
        }

      if (send_data > 12) {
          send_data = 12;
        }








      TCPP__makeTCpack(&TCPP__tcp_pack[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), active_socket->src, __nesc_ntoh_uint8(active_socket->dest.port.nxdata), active_socket->lastSent, 0, TCPP__DATA, SOCKET_BUFFER_SIZE, (uint8_t *)(active_socket->sendBuff + active_socket->lastSent), send_data);
      TCPP__makePack(&send_pack, TOS_NODE_ID, __nesc_ntoh_uint16(active_socket->dest.addr.nxdata), MAX_TTL, PROTOCOL_TCP, TCPP__socket_seq[sim_node()][socket_id] + 1, (uint8_t *)&TCPP__tcp_pack[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
      TCPP__send_packet(send_pack, socket_id, (uint16_t )TCPP__socket_seq[sim_node()][socket_id]);




      sim_log_debug(248U, APPLICATION_CHANNEL, "sending %s\n", TCPP__tcp_pack[sim_node()].payload);

      TCPP__socket_seq[sim_node()][socket_id]++;

      active_socket->lastSent += send_data;
      active_socket->effectiveWindow -= send_data;
      TCPP__srv_send_data(socket_id);
    }
}

# 212 "/opt/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      sim_log_debug(126U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              sim_log_debug(127U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(128U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          sim_log_debug(129U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          sim_log_debug(130U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 463 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 463
{
  sim_log_debug(147U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP__schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_compare();
    }
  if (HplAtm128Timer0AsyncP__Timer0__getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_compare();

#line 273
      HplAtm128Timer0AsyncP__configure_compare(newEvent);

      HplAtm128Timer0AsyncP__compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/opt/tinyos-main/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/opt/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP__Timer0__overflow();
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP__shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP__clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP__last_zero()) % (1 << HplAtm128Timer0AsyncP__shiftFromScale());

  sim_log_debug(150U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP__Compare__fired();
}

#line 231
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t compareVal = HplAtm128Timer0AsyncP__Compare__get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP__shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP__clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP__last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP__clock_to_sim(1 << HplAtm128Timer0AsyncP__shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(139U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 106 "/opt/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC__Control__start(void )
#line 106
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(64U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(65U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC__startDoneTask__postTask();
  return SUCCESS;
}

# 154 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 86 "/opt/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)
#line 86
{
  error_t result;
  int tmp = sim_node();

#line 89
  sim_set_node(mote);
  result = SimMoteP__SimMote__setRadioChannel(newRadioChannel);
  sim_set_node(tmp);
  return result;
}

#line 142
  long long int sim_mote_euid(int mote)
#line 142
{
  long long int result;
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 151
{
  int tmp = sim_node();

#line 153
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 167
{
  int result;
  int tmpID = sim_node();

#line 170
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(55U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 177
{
  int tmpID = sim_node();

#line 179
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(56U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 195
{
  int tmp = sim_node();

#line 197
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 124
static void SimMoteP__SimMote__turnOn(void )
#line 124
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(54U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 202
  void sim_mote_turn_off(int mote)
#line 202
{
  int tmp = sim_node();

#line 204
  sim_set_node(mote);
  SimMoteP__SimMote__turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 218
{
  int tmp = sim_node();

#line 220
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radioChannel"))
  {
    *addr = (uintptr_t)&SimMoteP__radioChannel[__nesc_mote];
    *size = sizeof(SimMoteP__radioChannel[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC__buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC__bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC__initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC__initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__running[__nesc_mote];
    *size = sizeof(TossimPacketModelC__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC__backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC__neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC__destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__error[__nesc_mote];
    *size = sizeof(TossimPacketModelC__error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC__outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC__outgoing[__nesc_mote];
    *size = sizeof(CpmModelC__outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC__requestAck[__nesc_mote];
    *size = sizeof(CpmModelC__requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__receiving"))
  {
    *addr = (uintptr_t)&CpmModelC__receiving[__nesc_mote];
    *size = sizeof(CpmModelC__receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__rssi"))
  {
    *addr = (uintptr_t)&CpmModelC__rssi[__nesc_mote];
    *size = sizeof(CpmModelC__rssi[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC__transmitting[__nesc_mote];
    *size = sizeof(CpmModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC__transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC__transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC__outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC__outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC__clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC__clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC__set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__addr[__nesc_mote]);
    return 0;
  }

  /* Module Node */
  if (!strcmp(varname, "Node__sendPackage"))
  {
    *addr = (uintptr_t)&Node__sendPackage[__nesc_mote];
    *size = sizeof(Node__sendPackage[__nesc_mote]);
    return 0;
  }

  /* Module FloodingP */
  if (!strcmp(varname, "FloodingP__send_pkt"))
  {
    *addr = (uintptr_t)&FloodingP__send_pkt[__nesc_mote];
    *size = sizeof(FloodingP__send_pkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "FloodingP__sequence_number"))
  {
    *addr = (uintptr_t)&FloodingP__sequence_number[__nesc_mote];
    *size = sizeof(FloodingP__sequence_number[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC__0 */
  if (!strcmp(varname, "/*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.HashmapC*/HashmapC__0__map"))
  {
    *addr = (uintptr_t)&/*FloodingC.HashmapC*/HashmapC__0__map[__nesc_mote];
    *size = sizeof(/*FloodingC.HashmapC*/HashmapC__0__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.HashmapC*/HashmapC__0__keys"))
  {
    *addr = (uintptr_t)&/*FloodingC.HashmapC*/HashmapC__0__keys[__nesc_mote];
    *size = sizeof(/*FloodingC.HashmapC*/HashmapC__0__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.HashmapC*/HashmapC__0__numofVals"))
  {
    *addr = (uintptr_t)&/*FloodingC.HashmapC*/HashmapC__0__numofVals[__nesc_mote];
    *size = sizeof(/*FloodingC.HashmapC*/HashmapC__0__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module SimpleSendP__0 */
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP__0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC__0 */

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC__seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC__seed[__nesc_mote];
    *size = sizeof(RandomMlcgC__seed[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__0 */
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__1 */
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.QueueC*/QueueC__1__head"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*FloodingC.SimpleSendC.QueueC*/QueueC__1__size"))
  {
    *addr = (uintptr_t)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[__nesc_mote];
    *size = sizeof(/*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[__nesc_mote]);
    return 0;
  }

  /* Module NeighborDiscoveryP */
  if (!strcmp(varname, "NeighborDiscoveryP__discPack"))
  {
    *addr = (uintptr_t)&NeighborDiscoveryP__discPack[__nesc_mote];
    *size = sizeof(NeighborDiscoveryP__discPack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborDiscoveryP__changed"))
  {
    *addr = (uintptr_t)&NeighborDiscoveryP__changed[__nesc_mote];
    *size = sizeof(NeighborDiscoveryP__changed[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC__1 */
  if (!strcmp(varname, "/*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module SimpleSendP__1 */
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP__1 */

  /* Module PoolP__1 */
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__2 */
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size"))
  {
    *addr = (uintptr_t)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[__nesc_mote];
    *size = sizeof(/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[__nesc_mote]);
    return 0;
  }

  /* Module LinkStateRoutingP */
  if (!strcmp(varname, "LinkStateRoutingP__send_pkt"))
  {
    *addr = (uintptr_t)&LinkStateRoutingP__send_pkt[__nesc_mote];
    *size = sizeof(LinkStateRoutingP__send_pkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkStateRoutingP__begin"))
  {
    *addr = (uintptr_t)&LinkStateRoutingP__begin[__nesc_mote];
    *size = sizeof(LinkStateRoutingP__begin[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkStateRoutingP__topoChanged"))
  {
    *addr = (uintptr_t)&LinkStateRoutingP__topoChanged[__nesc_mote];
    *size = sizeof(LinkStateRoutingP__topoChanged[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkStateRoutingP__topography"))
  {
    *addr = (uintptr_t)&LinkStateRoutingP__topography[__nesc_mote];
    *size = sizeof(LinkStateRoutingP__topography[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkStateRoutingP__topoSize"))
  {
    *addr = (uintptr_t)&LinkStateRoutingP__topoSize[__nesc_mote];
    *size = sizeof(LinkStateRoutingP__topoSize[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC__2 */
  if (!strcmp(varname, "/*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*LinkStateRoutingC.HashmapC*/HashmapC__2__map"))
  {
    *addr = (uintptr_t)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[__nesc_mote];
    *size = sizeof(/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys"))
  {
    *addr = (uintptr_t)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[__nesc_mote];
    *size = sizeof(/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals"))
  {
    *addr = (uintptr_t)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[__nesc_mote];
    *size = sizeof(/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module IPP */

  /* Module HashmapC__3 */
  if (!strcmp(varname, "/*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.HashmapC*/HashmapC__3__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.HashmapC*/HashmapC__3__map"))
  {
    *addr = (uintptr_t)&/*IPC.HashmapC*/HashmapC__3__map[__nesc_mote];
    *size = sizeof(/*IPC.HashmapC*/HashmapC__3__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.HashmapC*/HashmapC__3__keys"))
  {
    *addr = (uintptr_t)&/*IPC.HashmapC*/HashmapC__3__keys[__nesc_mote];
    *size = sizeof(/*IPC.HashmapC*/HashmapC__3__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.HashmapC*/HashmapC__3__numofVals"))
  {
    *addr = (uintptr_t)&/*IPC.HashmapC*/HashmapC__3__numofVals[__nesc_mote];
    *size = sizeof(/*IPC.HashmapC*/HashmapC__3__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module SimpleSendP__2 */
  if (!strcmp(varname, "/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP__2 */

  /* Module PoolP__2 */
  if (!strcmp(varname, "/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__3 */
  if (!strcmp(varname, "/*IPC.SimpleSendC.QueueC*/QueueC__3__queue"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.QueueC*/QueueC__3__queue[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.QueueC*/QueueC__3__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.QueueC*/QueueC__3__head"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.QueueC*/QueueC__3__head[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.QueueC*/QueueC__3__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.QueueC*/QueueC__3__tail"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.QueueC*/QueueC__3__tail[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.QueueC*/QueueC__3__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPC.SimpleSendC.QueueC*/QueueC__3__size"))
  {
    *addr = (uintptr_t)&/*IPC.SimpleSendC.QueueC*/QueueC__3__size[__nesc_mote];
    *size = sizeof(/*IPC.SimpleSendC.QueueC*/QueueC__3__size[__nesc_mote]);
    return 0;
  }

  /* Module TCPP */
  if (!strcmp(varname, "TCPP__tcp_pack"))
  {
    *addr = (uintptr_t)&TCPP__tcp_pack[__nesc_mote];
    *size = sizeof(TCPP__tcp_pack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__sockets"))
  {
    *addr = (uintptr_t)&TCPP__sockets[__nesc_mote];
    *size = sizeof(TCPP__sockets[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__socket_seq"))
  {
    *addr = (uintptr_t)&TCPP__socket_seq[__nesc_mote];
    *size = sizeof(TCPP__socket_seq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__socket_highAck"))
  {
    *addr = (uintptr_t)&TCPP__socket_highAck[__nesc_mote];
    *size = sizeof(TCPP__socket_highAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__socket_nextAck"))
  {
    *addr = (uintptr_t)&TCPP__socket_nextAck[__nesc_mote];
    *size = sizeof(TCPP__socket_nextAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__cli_data_to_send"))
  {
    *addr = (uintptr_t)&TCPP__cli_data_to_send[__nesc_mote];
    *size = sizeof(TCPP__cli_data_to_send[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__cli_data_sent"))
  {
    *addr = (uintptr_t)&TCPP__cli_data_sent[__nesc_mote];
    *size = sizeof(TCPP__cli_data_sent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__node_state"))
  {
    *addr = (uintptr_t)&TCPP__node_state[__nesc_mote];
    *size = sizeof(TCPP__node_state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__serv_port"))
  {
    *addr = (uintptr_t)&TCPP__serv_port[__nesc_mote];
    *size = sizeof(TCPP__serv_port[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TCPP__data_to_send"))
  {
    *addr = (uintptr_t)&TCPP__data_to_send[__nesc_mote];
    *size = sizeof(TCPP__data_to_send[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC__4 */
  if (!strcmp(varname, "/*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TCPC.sendQueue*/HashmapC__4__map"))
  {
    *addr = (uintptr_t)&/*TCPC.sendQueue*/HashmapC__4__map[__nesc_mote];
    *size = sizeof(/*TCPC.sendQueue*/HashmapC__4__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TCPC.sendQueue*/HashmapC__4__keys"))
  {
    *addr = (uintptr_t)&/*TCPC.sendQueue*/HashmapC__4__keys[__nesc_mote];
    *size = sizeof(/*TCPC.sendQueue*/HashmapC__4__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TCPC.sendQueue*/HashmapC__4__numofVals"))
  {
    *addr = (uintptr_t)&/*TCPC.sendQueue*/HashmapC__4__numofVals[__nesc_mote];
    *size = sizeof(/*TCPC.sendQueue*/HashmapC__4__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module RoomP */
  if (!strcmp(varname, "RoomP__buffer"))
  {
    *addr = (uintptr_t)&RoomP__buffer[__nesc_mote];
    *size = sizeof(RoomP__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RoomP__relNode"))
  {
    *addr = (uintptr_t)&RoomP__relNode[__nesc_mote];
    *size = sizeof(RoomP__relNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RoomP__usr1"))
  {
    *addr = (uintptr_t)&RoomP__usr1[__nesc_mote];
    *size = sizeof(RoomP__usr1[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RoomP__usr2"))
  {
    *addr = (uintptr_t)&RoomP__usr2[__nesc_mote];
    *size = sizeof(RoomP__usr2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RoomP__usr3"))
  {
    *addr = (uintptr_t)&RoomP__usr3[__nesc_mote];
    *size = sizeof(RoomP__usr3[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RoomP__usr4"))
  {
    *addr = (uintptr_t)&RoomP__usr4[__nesc_mote];
    *size = sizeof(RoomP__usr4[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC__5 */
  if (!strcmp(varname, "/*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RoomC.clients*/HashmapC__5__EMPTY_KEY"))
  {
    *addr = (uintptr_t)&/*RoomC.clients*/HashmapC__5__EMPTY_KEY[__nesc_mote];
    *size = sizeof(/*RoomC.clients*/HashmapC__5__EMPTY_KEY[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RoomC.clients*/HashmapC__5__map"))
  {
    *addr = (uintptr_t)&/*RoomC.clients*/HashmapC__5__map[__nesc_mote];
    *size = sizeof(/*RoomC.clients*/HashmapC__5__map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RoomC.clients*/HashmapC__5__keys"))
  {
    *addr = (uintptr_t)&/*RoomC.clients*/HashmapC__5__keys[__nesc_mote];
    *size = sizeof(/*RoomC.clients*/HashmapC__5__keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RoomC.clients*/HashmapC__5__numofVals"))
  {
    *addr = (uintptr_t)&/*RoomC.clients*/HashmapC__5__numofVals[__nesc_mote];
    *size = sizeof(/*RoomC.clients*/HashmapC__5__numofVals[__nesc_mote]);
    return 0;
  }

  /* Module ChatCliP */
  if (!strcmp(varname, "ChatCliP__commandBuffer"))
  {
    *addr = (uintptr_t)&ChatCliP__commandBuffer[__nesc_mote];
    *size = sizeof(ChatCliP__commandBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChatCliP__cmdB_size"))
  {
    *addr = (uintptr_t)&ChatCliP__cmdB_size[__nesc_mote];
    *size = sizeof(ChatCliP__cmdB_size[__nesc_mote]);
    return 0;
  }

  /* Module CommandHandlerP */

  /* Module PoolP__3 */
  if (!strcmp(varname, "/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__0 */
  if (!strcmp(varname, "/*CommandHandlerC.QueueC*/QueueC__0__queue"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.QueueC*/QueueC__0__queue[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.QueueC*/QueueC__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.QueueC*/QueueC__0__head"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.QueueC*/QueueC__0__head[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.QueueC*/QueueC__0__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.QueueC*/QueueC__0__tail"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.QueueC*/QueueC__0__tail[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.QueueC*/QueueC__0__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CommandHandlerC.QueueC*/QueueC__0__size"))
  {
    *addr = (uintptr_t)&/*CommandHandlerC.QueueC*/QueueC__0__size[__nesc_mote];
    *size = sizeof(/*CommandHandlerC.QueueC*/QueueC__0__size[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);
  SimMoteP__radioChannel[__nesc_mote] = 26;

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC__buffer[__nesc_mote], 0, sizeof TossimActiveMessageC__buffer[__nesc_mote]);
  TossimActiveMessageC__bufferPointer[__nesc_mote] = &TossimActiveMessageC__buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC__initialized[__nesc_mote] = FALSE;
  TossimPacketModelC__running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC__backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC__backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC__neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC__neededFreeSamples[__nesc_mote]);
  TossimPacketModelC__sending[__nesc_mote] = (void *)0;
  TossimPacketModelC__transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC__sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC__destNode[__nesc_mote], 0, sizeof TossimPacketModelC__destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC__sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC__sendEvent[__nesc_mote]);
  TossimPacketModelC__error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC__outgoing[__nesc_mote], 0, sizeof CpmModelC__outgoing[__nesc_mote]);
  memset((void *)&CpmModelC__requestAck[__nesc_mote], 0, sizeof CpmModelC__requestAck[__nesc_mote]);
  CpmModelC__receiving[__nesc_mote] = 0;
  CpmModelC__rssi[__nesc_mote] = FALSE;
  CpmModelC__transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC__transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC__transmissionEndTime[__nesc_mote]);
  CpmModelC__outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC__clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC__set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC__addr[__nesc_mote], 0, sizeof ActiveMessageAddressC__addr[__nesc_mote]);

  /* Module Node */
  memset((void *)&Node__sendPackage[__nesc_mote], 0, sizeof Node__sendPackage[__nesc_mote]);

  /* Module FloodingP */
  memset((void *)&FloodingP__send_pkt[__nesc_mote], 0, sizeof FloodingP__send_pkt[__nesc_mote]);
  FloodingP__sequence_number[__nesc_mote] = 1;

  /* Module HashmapC__0 */
  /*FloodingC.HashmapC*/HashmapC__0__HASH_MAX_SIZE[__nesc_mote] = 20;
  /*FloodingC.HashmapC*/HashmapC__0__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*FloodingC.HashmapC*/HashmapC__0__map[__nesc_mote], 0, sizeof /*FloodingC.HashmapC*/HashmapC__0__map[__nesc_mote]);
  memset((void *)&/*FloodingC.HashmapC*/HashmapC__0__keys[__nesc_mote], 0, sizeof /*FloodingC.HashmapC*/HashmapC__0__keys[__nesc_mote]);
  memset((void *)&/*FloodingC.HashmapC*/HashmapC__0__numofVals[__nesc_mote], 0, sizeof /*FloodingC.HashmapC*/HashmapC__0__numofVals[__nesc_mote]);

  /* Module SimpleSendP__0 */
  /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__busy[__nesc_mote] = FALSE;
  memset((void *)&/*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.SimpleSendP*/SimpleSendP__0__pkt[__nesc_mote]);

  /* Module Atm128AlarmAsyncP__0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP__inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP__compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP__overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__overflow[__nesc_mote]);

  /* Module AlarmToTimerC__0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC__0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC__0 */

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC__seed[__nesc_mote], 0, sizeof RandomMlcgC__seed[__nesc_mote]);

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote] = 3;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);

  /* Module PoolP__0 */
  memset((void *)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__free[__nesc_mote]);
  memset((void *)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__index[__nesc_mote]);
  memset((void *)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__queue[__nesc_mote]);
  memset((void *)&/*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.PoolC.PoolP*/PoolP__0__pool[__nesc_mote]);

  /* Module QueueC__1 */
  memset((void *)&/*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[__nesc_mote], 0, sizeof /*FloodingC.SimpleSendC.QueueC*/QueueC__1__queue[__nesc_mote]);
  /*FloodingC.SimpleSendC.QueueC*/QueueC__1__head[__nesc_mote] = 0;
  /*FloodingC.SimpleSendC.QueueC*/QueueC__1__tail[__nesc_mote] = 0;
  /*FloodingC.SimpleSendC.QueueC*/QueueC__1__size[__nesc_mote] = 0;

  /* Module NeighborDiscoveryP */
  memset((void *)&NeighborDiscoveryP__discPack[__nesc_mote], 0, sizeof NeighborDiscoveryP__discPack[__nesc_mote]);
  NeighborDiscoveryP__changed[__nesc_mote] = 0;

  /* Module HashmapC__1 */
  /*NeighborDiscoveryC.HashmapC*/HashmapC__1__HASH_MAX_SIZE[__nesc_mote] = 20;
  /*NeighborDiscoveryC.HashmapC*/HashmapC__1__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.HashmapC*/HashmapC__1__map[__nesc_mote]);
  memset((void *)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.HashmapC*/HashmapC__1__keys[__nesc_mote]);
  memset((void *)&/*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.HashmapC*/HashmapC__1__numofVals[__nesc_mote]);

  /* Module SimpleSendP__1 */
  /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__busy[__nesc_mote] = FALSE;
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.SimpleSendP*/SimpleSendP__1__pkt[__nesc_mote]);

  /* Module AMQueueEntryP__1 */

  /* Module PoolP__1 */
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__free[__nesc_mote]);
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__index[__nesc_mote]);
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__queue[__nesc_mote]);
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.PoolC.PoolP*/PoolP__1__pool[__nesc_mote]);

  /* Module QueueC__2 */
  memset((void *)&/*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[__nesc_mote], 0, sizeof /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__queue[__nesc_mote]);
  /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__head[__nesc_mote] = 0;
  /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__tail[__nesc_mote] = 0;
  /*NeighborDiscoveryC.SimpleSendC.QueueC*/QueueC__2__size[__nesc_mote] = 0;

  /* Module LinkStateRoutingP */
  memset((void *)&LinkStateRoutingP__send_pkt[__nesc_mote], 0, sizeof LinkStateRoutingP__send_pkt[__nesc_mote]);
  LinkStateRoutingP__begin[__nesc_mote] = 1;
  LinkStateRoutingP__topoChanged[__nesc_mote] = 0;
  memset((void *)&LinkStateRoutingP__topography[__nesc_mote], 0, sizeof LinkStateRoutingP__topography[__nesc_mote]);
  LinkStateRoutingP__topoSize[__nesc_mote] = 0;

  /* Module HashmapC__2 */
  /*LinkStateRoutingC.HashmapC*/HashmapC__2__HASH_MAX_SIZE[__nesc_mote] = 33;
  /*LinkStateRoutingC.HashmapC*/HashmapC__2__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__map[__nesc_mote], 0, sizeof /*LinkStateRoutingC.HashmapC*/HashmapC__2__map[__nesc_mote]);
  memset((void *)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[__nesc_mote], 0, sizeof /*LinkStateRoutingC.HashmapC*/HashmapC__2__keys[__nesc_mote]);
  memset((void *)&/*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[__nesc_mote], 0, sizeof /*LinkStateRoutingC.HashmapC*/HashmapC__2__numofVals[__nesc_mote]);

  /* Module IPP */

  /* Module HashmapC__3 */
  /*IPC.HashmapC*/HashmapC__3__HASH_MAX_SIZE[__nesc_mote] = 20;
  /*IPC.HashmapC*/HashmapC__3__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*IPC.HashmapC*/HashmapC__3__map[__nesc_mote], 0, sizeof /*IPC.HashmapC*/HashmapC__3__map[__nesc_mote]);
  memset((void *)&/*IPC.HashmapC*/HashmapC__3__keys[__nesc_mote], 0, sizeof /*IPC.HashmapC*/HashmapC__3__keys[__nesc_mote]);
  memset((void *)&/*IPC.HashmapC*/HashmapC__3__numofVals[__nesc_mote], 0, sizeof /*IPC.HashmapC*/HashmapC__3__numofVals[__nesc_mote]);

  /* Module SimpleSendP__2 */
  /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__busy[__nesc_mote] = FALSE;
  memset((void *)&/*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.SimpleSendP*/SimpleSendP__2__pkt[__nesc_mote]);

  /* Module AMQueueEntryP__2 */

  /* Module PoolP__2 */
  memset((void *)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__free[__nesc_mote]);
  memset((void *)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__index[__nesc_mote]);
  memset((void *)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__queue[__nesc_mote]);
  memset((void *)&/*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.PoolC.PoolP*/PoolP__2__pool[__nesc_mote]);

  /* Module QueueC__3 */
  memset((void *)&/*IPC.SimpleSendC.QueueC*/QueueC__3__queue[__nesc_mote], 0, sizeof /*IPC.SimpleSendC.QueueC*/QueueC__3__queue[__nesc_mote]);
  /*IPC.SimpleSendC.QueueC*/QueueC__3__head[__nesc_mote] = 0;
  /*IPC.SimpleSendC.QueueC*/QueueC__3__tail[__nesc_mote] = 0;
  /*IPC.SimpleSendC.QueueC*/QueueC__3__size[__nesc_mote] = 0;

  /* Module TCPP */
  memset((void *)&TCPP__tcp_pack[__nesc_mote], 0, sizeof TCPP__tcp_pack[__nesc_mote]);
  memset((void *)&TCPP__sockets[__nesc_mote], 0, sizeof TCPP__sockets[__nesc_mote]);
  memset((void *)&TCPP__socket_seq[__nesc_mote], 0, sizeof TCPP__socket_seq[__nesc_mote]);
  memset((void *)&TCPP__socket_highAck[__nesc_mote], 0, sizeof TCPP__socket_highAck[__nesc_mote]);
  memset((void *)&TCPP__socket_nextAck[__nesc_mote], 0, sizeof TCPP__socket_nextAck[__nesc_mote]);
  TCPP__cli_data_to_send[__nesc_mote] = 0;
  TCPP__cli_data_sent[__nesc_mote] = 0;
  TCPP__node_state[__nesc_mote] = 0;
  memset((void *)&TCPP__serv_port[__nesc_mote], 0, sizeof TCPP__serv_port[__nesc_mote]);
  memset((void *)&TCPP__data_to_send[__nesc_mote], 0, sizeof TCPP__data_to_send[__nesc_mote]);

  /* Module HashmapC__4 */
  /*TCPC.sendQueue*/HashmapC__4__HASH_MAX_SIZE[__nesc_mote] = 40;
  /*TCPC.sendQueue*/HashmapC__4__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*TCPC.sendQueue*/HashmapC__4__map[__nesc_mote], 0, sizeof /*TCPC.sendQueue*/HashmapC__4__map[__nesc_mote]);
  memset((void *)&/*TCPC.sendQueue*/HashmapC__4__keys[__nesc_mote], 0, sizeof /*TCPC.sendQueue*/HashmapC__4__keys[__nesc_mote]);
  memset((void *)&/*TCPC.sendQueue*/HashmapC__4__numofVals[__nesc_mote], 0, sizeof /*TCPC.sendQueue*/HashmapC__4__numofVals[__nesc_mote]);

  /* Module RoomP */
  memset((void *)&RoomP__buffer[__nesc_mote], 0, sizeof RoomP__buffer[__nesc_mote]);
  RoomP__relNode[__nesc_mote] = 0;
  memset((void *)&RoomP__usr1[__nesc_mote], 0, sizeof RoomP__usr1[__nesc_mote]);
  memset((void *)&RoomP__usr2[__nesc_mote], 0, sizeof RoomP__usr2[__nesc_mote]);
  memset((void *)&RoomP__usr3[__nesc_mote], 0, sizeof RoomP__usr3[__nesc_mote]);
  memset((void *)&RoomP__usr4[__nesc_mote], 0, sizeof RoomP__usr4[__nesc_mote]);

  /* Module HashmapC__5 */
  /*RoomC.clients*/HashmapC__5__HASH_MAX_SIZE[__nesc_mote] = 4;
  /*RoomC.clients*/HashmapC__5__EMPTY_KEY[__nesc_mote] = 0;
  memset((void *)&/*RoomC.clients*/HashmapC__5__map[__nesc_mote], 0, sizeof /*RoomC.clients*/HashmapC__5__map[__nesc_mote]);
  memset((void *)&/*RoomC.clients*/HashmapC__5__keys[__nesc_mote], 0, sizeof /*RoomC.clients*/HashmapC__5__keys[__nesc_mote]);
  memset((void *)&/*RoomC.clients*/HashmapC__5__numofVals[__nesc_mote], 0, sizeof /*RoomC.clients*/HashmapC__5__numofVals[__nesc_mote]);

  /* Module ChatCliP */
  memset((void *)&ChatCliP__commandBuffer[__nesc_mote], 0, sizeof ChatCliP__commandBuffer[__nesc_mote]);
  ChatCliP__cmdB_size[__nesc_mote] = 0;

  /* Module CommandHandlerP */

  /* Module PoolP__3 */
  memset((void *)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[__nesc_mote], 0, sizeof /*CommandHandlerC.PoolC.PoolP*/PoolP__3__free[__nesc_mote]);
  memset((void *)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[__nesc_mote], 0, sizeof /*CommandHandlerC.PoolC.PoolP*/PoolP__3__index[__nesc_mote]);
  memset((void *)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[__nesc_mote], 0, sizeof /*CommandHandlerC.PoolC.PoolP*/PoolP__3__queue[__nesc_mote]);
  memset((void *)&/*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[__nesc_mote], 0, sizeof /*CommandHandlerC.PoolC.PoolP*/PoolP__3__pool[__nesc_mote]);

  /* Module QueueC__0 */
  memset((void *)&/*CommandHandlerC.QueueC*/QueueC__0__queue[__nesc_mote], 0, sizeof /*CommandHandlerC.QueueC*/QueueC__0__queue[__nesc_mote]);
  /*CommandHandlerC.QueueC*/QueueC__0__head[__nesc_mote] = 0;
  /*CommandHandlerC.QueueC*/QueueC__0__tail[__nesc_mote] = 0;
  /*CommandHandlerC.QueueC*/QueueC__0__size[__nesc_mote] = 0;

}
