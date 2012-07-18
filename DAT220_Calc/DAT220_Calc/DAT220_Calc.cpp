// DAT220_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void noCloseWindow();

int _tmain(int argc, _TCHAR* argv[])
{
	char* x = "hehe";

	std::cout << x;

	noCloseWindow();
	return 0;
}

void noCloseWindow() {
	std::cout << "\n\nPress Enter to exit . . .";
	std::cin.get();
}

