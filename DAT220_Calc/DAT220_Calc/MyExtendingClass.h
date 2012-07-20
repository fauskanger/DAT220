#pragma once
#include "mybaseclass.h"
class MyExtendingClass :
	public MyBaseClass
{
public:
	MyExtendingClass(void);
	MyExtendingClass(int _id,char* _name,int _number);
	~MyExtendingClass(void);
};

