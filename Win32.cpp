#include <windows.h>
#include <stdio.h>

//Func Definition
void foo(void){
    
    OutputDebugStringA(
        "This is the first thing we have actually printed.\n");
}

int CALLBACK WinMain(
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPSTR lpCmdLine,
      int nCmdShow){

    char unsigned Test;
    Test = 255;
    Test = Test + 1;

    foo();
}
 