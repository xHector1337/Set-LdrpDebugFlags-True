#include "lab.h"

#define LdrpDebugFlagsOffset 0x166AB0

BOOL SetLdrpDebugFlagsTrue(void) {
	BOOL returnvalue = FALSE;
	HMODULE hNtDll = GetModuleHandleA("ntdll.dll");
	if (hNtDll == NULL) {
		error("GetModuleHandleA");
	}
	hNtDll = (CHAR*)hNtDll + LdrpDebugFlagsOffset;
	*(CHAR*)hNtDll = 0x01;
	returnvalue = TRUE;

exit:
	return returnvalue;
}