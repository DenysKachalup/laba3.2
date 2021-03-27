///////////////////////////////////////////////////
////////////////////////
//studV
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Student.h"

using namespace std;

class StudV: public Student
{
private:
	string spec;

public:
	void setSpec(string);

	string getS() const { return spec; }
	StudV() :spec("IT") {};
	StudV(const char* aName, int age, int kurs,string spec);
	StudV(StudV& a);

	friend ostream& operator << (ostream& out, const StudV& m);
	friend istream& operator >> (istream& in, StudV& m);

	StudV& operator = (const StudV& a);
	operator string() const;
};

