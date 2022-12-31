#ifndef LIB_HEADER
#define LIB_HEADER

#define LIB_PREFIX LibMath
#define LIB_NAMESPACE lib::math

#define MCONCAT(a, b) MCONCAT_(a, b)
#define MCONCAT_(a, b) a ## b

#define CONCAT(a, b, c) MCONCAT(a, MCONCAT(b, c))
#define COLCAT(a, b) COLCAT_(a, b)
#define COLCAT_(a, b) a::b

#ifdef __cplusplus
#define FN_h(name) name
#define FN_c(name) COLCAT(LIB_NAMESPACE, name)
#else // c
#define FN_h(name) CONCAT(LIB_PREFIX, _, name)
#define FN_c(name) FN_h(name)
#endif // __cplusplus


#ifdef __cplusplus
namespace lib {
namespace math {
#endif //__cplusplus

int FN_h(fibonacci)(int);

#ifdef __cplusplus
}}
#endif //__cplusplus

#endif // LIB_HEADER
