// DAT220_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DAT220_Calc.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char* x = "hehe";

	std::cout << x;

	noClosingWindow();
	return 0;
}

void noClosingWindow() {
	std::cout << "\n\nPress Enter to exit . . .\n\n";
	std::cin.get();
}

