#include "StdAfx.h"
#include "MyBaseClass.h"


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

void MyBaseClass::doMagic()
{
	if(name!=0) 
	{
		int i = 0;
		while (getName()[i])
		{
			std::cout << getName()[i++];
			//getName()[i++] = '0';
			char* c = getName();
			//*c = '0';
			//name = "sds";
			name[0] = 'F';
		}

		std::cout << "\n";

		std::cout << "\nMagic (" << className << "): The name is \"" << getName() 
			<< "\" and I have the number " << number << std::endl;
	}
}

char* MyBaseClass::getName()
{
	return name;
}
