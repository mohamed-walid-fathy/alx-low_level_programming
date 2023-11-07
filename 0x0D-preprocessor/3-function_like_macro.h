#ifndef ABS
#define ABS
#define ABS(X)
#if X < 0
(X) *= -1
#undef ABS
#endif
