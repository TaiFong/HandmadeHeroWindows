#include <windows.h>

int CALLBACK WinMain(
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPSTR     lpCmdLine,
      int       nCmdShow){
    OutputDebugStringA("This is the first thing we have actually printed.\n");
}

void foo(void){
}
