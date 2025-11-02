#include <Windows.h>
#include <stdio.h>

#ifdef _DEBUG
#define DbgPrint(fmt,...) printf(fmt,__VA_ARGS__)
#else
#define DbgPrint(fmt,...)
#endif
#define error(func) DbgPrint("[-][%s] %s failed with error: 0x%x\n",__func__,func,GetLastError()); goto exit

BOOL SetLdrpDebugFlagsTrue(void);