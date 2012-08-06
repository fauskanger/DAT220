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
	void identifySelf();
	char* getName();

	MyBaseClass(void);
	MyBaseClass(int _id, char* _name,int _number);
	~MyBaseClass(void);
	void setName(char* c);
};

