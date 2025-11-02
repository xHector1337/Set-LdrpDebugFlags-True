#include "lab.h"

int main() {
	if (!SetLdrpDebugFlagsTrue()) {
		return -1;
	}
	LoadLibraryA("ntdll.dll"); // check your debugger's logs.
	return 0;
}