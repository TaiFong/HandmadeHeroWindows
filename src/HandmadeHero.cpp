#include <windows.h>
 
 WNDPROC Wndproc;

LRESULT CALLBACK 
MainWindowCallback(
  HWND unnamedParam1,
  UINT unnamedParam2,
  WPARAM unnamedParam3,
  LPARAM unnamedParam4
)
{...}

int CALLBACK 
WinMain(HINSTANCE Instance,
        HINSTANCE PrevInstance,
        LPSTR CommandLine,
        int ShowCode){

WNDCLASS WindowClass = {};
  WindowClass.style = CS_OWNDC|CS_HREDRAW|CS_VREDRAW;
  WindowClass.lpfnWndProc = MainWindowCallback ;
  WindowClass.hInstance = Instance;
  //WindowClass hIcon ;
  WindowClass.lpszClassName = "HandmadeHeroWindowClass - Text Editor";
        return 0;
}