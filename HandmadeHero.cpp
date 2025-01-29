#include <windows.h>

//Func Declaration 
//void foo(void);

//Func Definition
void foo(void){
    OutputDebugStringA("This is the first thing we have actually printed.\n");
}

int CALLBACK WinMain(
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPSTR     lpCmdLine,
      int       nCmdShow){
    foo();
}
 
