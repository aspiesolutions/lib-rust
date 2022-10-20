#pragma once
// #define WIN32_LEAN_AND_MEAN
// #include <windows.h>
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\kernel32.lib")
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\UserEnv.lib")
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\WS2_32.lib")
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\bcrypt.lib")
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\AdvApi32.lib")
// #pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\ntstc_msvcrt.lib")
#pragma comment(lib, "C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.20348.0\\um\\x86\\ntstc_libcmt.lib")

#pragma comment(lib, "target\\i686-pc-windows-msvc\\debug\\cffi.lib")
// #pragma comment(lib, "target\\i686-pc-windows-msvc\\debug\\cffi.dll.lib")


#include "target\i686-pc-windows-msvc\debug\build\cffi-20f5836bf7ee4ebc\out\cffi.h"
#include <stdio.h>
#include <string.h>


int main() {
    // rust strings are immutable, even if they are declared mutable on the rust side
    for (int i = 0; i < _I32_MAX ; i++) {
    char* greeting = hello();
    // puts(greeting);
    free_cstring(greeting);
    }
    return 0;
    
}