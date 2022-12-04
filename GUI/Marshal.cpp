#include "Marshal.h"
#include "pch.h"
//https://learn.microsoft.com/en-us/cpp/dotnet/how-to-convert-system-string-to-standard-string?view=msvc-170
void MarshalString(String^ s, string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}
