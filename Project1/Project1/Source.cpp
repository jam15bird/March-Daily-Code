//Blepper, the act alike of the annoy-a-tron beeper :)
//It has been done probably 1000x but this one was hacked together 
//by hexskrew @ hak5.org/forums with help from Kerberos (not teh kiteh, nor the encryption)
#define _WIN32_WINNT 0x0500
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int endr = 0;
int main()
{
	HWND hWnd = GetConsoleWindow(); //gets console window focus *I think*
	ShowWindow(hWnd, SW_HIDE); //hides console window
	srand(time(0))
	
		{
			DWORD nWait1 = rand() % 325000; //nwait1 randomized to max 32.5 seconds
			DWORD nWait2 = rand() % 325000; //nwait2 randomized to max 32.5 seconds
			DWORD nWait = nWait1 + nWait2; //nWait = both randomized numbers put together
			DWORD nHz = rand() % 2000; //hz to be played
			DWORD nMs = rand() % 800; //ms of hz to be played
			if (nWait &gt; 20000) //makes the timer a minimum of 20 seconds
			{
				Sleep(nWait); //sleep timer
				Beep(nHz, nMs); // x hertz (C5) for y milliseconds
				endr++;
			}
		} while (endr != 800);
		ShowWindow(hWnd, SW_SHOW); //Shows console window
		cout<<"HAHA! Gotcha! Have a great Christmas!"'\n'"<<;
		system("PAUSE");
		return 0;
}