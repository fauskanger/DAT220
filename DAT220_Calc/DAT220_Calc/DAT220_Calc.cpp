// DAT220_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void noClosingWindow();

int _tmain(int argc, _TCHAR* argv[])
{
	char* x = "hehe";

	std::cout << x;

	noClosingWindow();
	return 0;
}

void noClosingWindow() {
	std::cout << "\n\nPress Enter to exit . . .";
	std::cin.get();
}

