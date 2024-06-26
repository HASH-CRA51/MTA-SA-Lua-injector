//KONIGSRASSE SUNAR

#include <Windows.h>
#include "sigscan.h"
#include "string"
#include "MinHook.h"
#pragma comment(lib, "libMinHook.x86.lib")

//code
typedef bool(__thiscall* ptrSendPacket)(void* ECX, unsigned char ucPacketID, void* bitStream, int packetPriority, int packetReliability, int packetOrdering);
ptrSendPacket callSendPacket = nullptr;
bool __fastcall SendPacket(void* ECX, void* EDX, unsigned char ucPacketID, void* bitStream, int packetPriority, int packetReliability, int packetOrdering)
{
    if (ucPacketID == 91) //Packet
		
//...
}

static bool onlyone = false;
//...

int __stdcall DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InstallHooks, 0, 0, 0);
        break;
    }
    return 1;
}
