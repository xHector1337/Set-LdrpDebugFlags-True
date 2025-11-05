# Introduction

This project and the following PoC are part of *LoadLibrary - LdrLoadDll research* I made between 20 October 2025 and 2 November 2025. I found the **LdrpDebugFlags** value during the reversing process.
I used [Binary Ninja Free](https://binary.ninja/), [x64dbg](https://x64dbg.com/) and [Microsoft Visual Studio 2022](https://visualstudio.microsoft.com) for this project.

# PoC

```
DebugString: "3e24:37b4 @ 1641741390 - LdrLoadDll - ENTER: DLL name: ntdll.dll"
DebugString: "3e24:37b4 @ 1641741390 - LdrpLoadDllInternal - ENTER: DLL name: ntdll.dll"
DebugString: "3e24:37b4 @ 1641741390 - LdrpLoadDllInternal - RETURN: Status: 0x00000000"
DebugString: "3e24:37b4 @ 1641741390 - LdrLoadDll - RETURN: Status: 0x00000000"
DebugString: "3e24:37b4 @ 1641756484 - LdrLoadDll - ENTER: DLL name: api-ms-win-appmodel-runtime-l1-1-2"
DebugString: "3e24:37b4 @ 1641756484 - LdrpPreprocessDllName - INFO: DLL api-ms-win-appmodel-runtime-l1-1-2 was redirected to C:\Windows\SYSTEM32\kernel.appcore.dll by API set"
DebugString: "3e24:37b4 @ 1641756484 - LdrpLoadDllInternal - ENTER: DLL name: C:\Windows\SYSTEM32\kernel.appcore.dll"
DebugString: "3e24:37b4 @ 1641756484 - LdrpFindKnownDll - ENTER: DLL name: kernel.appcore.dll"
DebugString: "3e24:37b4 @ 1641756484 - LdrpFindKnownDll - RETURN: Status: 0xc0000135"
DebugString: "3e24:37b4 @ 1641756484 - LdrpResolveDllName - ENTER: DLL name: C:\Windows\SYSTEM32\kernel.appcore.dll"
DebugString: "3e24:37b4 @ 1641756484 - LdrpResolveDllName - RETURN: Status: 0x00000000"
DebugString: "3e24:37b4 @ 1641756484 - LdrpMinimalMapModule - ENTER: DLL name: C:\Windows\SYSTEM32\kernel.appcore.dll"
... 
```
