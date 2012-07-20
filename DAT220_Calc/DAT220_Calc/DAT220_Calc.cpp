// DAT220_Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DAT220_Calc.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char* x = "hehe";
	std::cout << x;

	MyBaseClass *numberOne = new MyBaseClass(1,"The first class",14);
	MyExtendingClass *ex1 = new MyExtendingClass(2,"The first class",25);
	MyOtherExtendingClass *ex2 = new MyOtherExtendingClass();

	printMagic(numberOne);
	//printMagic(ex1);
	//printMagic(ex2);


	noClosingWindow();
	return 0;
}

void noClosingWindow() 
{
	std::cout << "\n\nPress Enter to exit . . .\n\n";
	std::cin.get();
}

void printMagic(MyBaseClass *inputClass) 
{
	inputClass->doMagic();
}

