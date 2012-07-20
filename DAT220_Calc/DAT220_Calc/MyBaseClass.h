#pragma once
class MyBaseClass
{
	int id;
	char* className;
public:
	char *name;
	int number;
	int getId();
	void setId(int=1);
	void doMagic();
	char* getName();

	MyBaseClass(void);
	MyBaseClass(int _id, char* _name,int _number);
	~MyBaseClass(void);
};

