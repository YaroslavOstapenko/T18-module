#pragma once
#include <iostream>
#include <string>
using std::string;
class Exeption
{
protected:
	string name;
public:
	Exeption(string name);
	virtual string showMessage() = 0;
	
};
class NameExeption : public Exeption 
{
public:
	NameExeption(string name);
	virtual string showMessage() override;
};
