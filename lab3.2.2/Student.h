#pragma once
#include <iostream>	
#include <string>
#include <sstream>
#include "Man.h"
using namespace std;

class Student:public Man
{
private:
	int kurs;
public:
	void setKurs(int);
	int getK() const { return kurs; }
	Student() :kurs(2) {};
	Student(const char* aName, int age, int kurs);
	Student(Student& a);

	friend ostream& operator << (ostream& out, const Student& m);
	friend istream& operator >> (istream& in, Student& m);

	Student& operator = (const Student& a);
	operator string() const;
};

