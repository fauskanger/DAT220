#include "StdAfx.h"
#include "MyBaseClass.h"
#include <string.h>


MyBaseClass::MyBaseClass(void)
{
	id = 0;
	name = "No name..";
	number = 0;
	className = 0;
	className = "MyBaseClass - Plain";
}

MyBaseClass::MyBaseClass( int _id, char* _name,int _number )
{
	id= _id;
	name = _name;
	number = _number;
	className = "MyBaseClass - Detailed";
}


MyBaseClass::~MyBaseClass(void)
{

}


void MyBaseClass::setId( int newId/*=1*/) 
{
	id = newId;
}

int MyBaseClass::getId() 
{
	return id;
}

void MyBaseClass::identifySelf()
{
	if(name!=0) 
	{
		std::cout << "\nAdress: " << int(name);

		std::cout << "\nPrinting <name>: \n";
		
		char* nameCopy = new char[strlen(getName())];
		char* alts = "oOo.";
		int numberOfAlts = strlen(alts);

		int letterIndex = 0;
		while ( getName()[letterIndex] )
		{
			std::cout << getName()[letterIndex];
			nameCopy[letterIndex++] = *(alts+letterIndex%numberOfAlts);
		}
		nameCopy[letterIndex] = 0; // Zero-terminated
		setName(nameCopy);

		std::cout << "\nMagic (" << className << "): The name is \"" << getName() 
			<< "\" and I have the number " << number << std::endl;
	}
}

char* MyBaseClass::getName()
{
	return name;
}

void MyBaseClass::setName( char* c )
{
	//char* tmp = this->name;
	this->name = c;
	//delete tmp;
}
