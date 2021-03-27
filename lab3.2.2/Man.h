#pragma once
#include <iostream>	
#include <string>
#include <sstream>

using namespace std;

class Man
{
private:
	int age;
	char* name;

public:
	void setAge(int);
	void setName(char*);

	int getA() const { return age; }
	char* getN() const { return name; }

	Man(const char* name, int age);
	Man() :age(1), name() {};
	Man(Man& a);

	friend ostream& operator << (ostream& out, const Man& m);
	friend istream& operator >> (istream& in, Man& m);

	Man& operator = (const Man& a);
	operator string() const;
};

