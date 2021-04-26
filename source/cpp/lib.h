#pragma once



#ifdef __cplusplus
#define COMPAT_FUNC
#else
#define COMPAT_FUNC extern
#endif

#ifdef __cplusplus
extern "C"
{
#endif
    COMPAT_FUNC int SquareNumber(int Number);
#ifdef __cplusplus
}
#endif