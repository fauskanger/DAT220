// DAT220_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DAT220_Calc.h"

typedef char* ost;

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i=0; i<argc; i++) {
// 		for(int ii=0; argv[i][ii]; ii++) {
// 			std::cout << char(argv[i][ii]);
// 		}
// 		
		std::wcout << argv[i];
		std::cout << std::endl;
	}

	std::stringstream ss;
	std::string mystring;

	ss << "Hva er ÆøåÆØÅ?";
	mystring = ss.str();
	std::wcout << mystring;


	noClosingWindow();
	return 0;
}

void noClosingWindow() 
{
	std::cout << "\n\nPress Enter to exit . . .\n\n";
	std::cin.get();
}

