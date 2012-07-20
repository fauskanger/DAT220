#include "StdAfx.h"
#include "MyExtendingClass.h"


MyExtendingClass::MyExtendingClass(void)
{
}

MyExtendingClass::MyExtendingClass ( int _id,char* _name, int _number):  MyBaseClass(_id,_name,_number)
{
	name = _name;
	number = _number;
	setId(_id);
	;
}


MyExtendingClass::~MyExtendingClass(void)
{
}
