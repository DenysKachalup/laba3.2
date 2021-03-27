#include "Man.h"

Man::Man(const char* aName, int age)
{
	name =  new char[strlen(aName)+1];

	strcpy_s(name, strlen(aName) + 1, aName);

	if (age > 0)
		this->age = age;
	else
		this->age = 16;
}
Man::Man(Man& a)
{
	name = new char[strlen(a.name) + 1];
	strcpy_s(name, strlen(a.name) + 1, a.name);

	this->age = a.age;
}
void Man::setAge(int age)
{
	if (age > 0)
		this->age = age;
	else
		this->age = 16;
}
void Man::setName(char* aName)
{
	strcpy_s(name, strlen(aName)+1, aName);
}
Man::operator string() const
{
	stringstream sout;
	sout << "Name : " << name << "\tAge : " << age<<endl;
	return sout.str();
}
ostream& operator << (ostream& out, const Man& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Man& m)
{
	char n[100]; 
	cout << "Name : "; in >> n;
	int a;
	cout << "Age : "; in >> a;
	m.setAge(a), m.setName(n);

	return in;
}

Man& Man::operator = (const Man& a)
{
	this->name = a.name;
	this->age = a.age;
	return *this;
}