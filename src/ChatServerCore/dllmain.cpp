// dllmain.cpp : Defines the entry point for the DLL application.
#include <ChatServerCore/Pch.hpp>

BOOL APIENTRY DllMain(HMODULE hinstDLL,
                      DWORD  fdwReason,
                      LPVOID lpvReserved
)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
