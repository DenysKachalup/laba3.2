#include "Student.h"

Student::Student(const char* aName, int age, int kurs)
	:Man(aName,age)
{
	if (kurs > 0 && kurs < 7)
		this->kurs = kurs;
	else
		this->kurs = 1;
}
Student::Student( Student& a)
	:Man(a)
{
	this->kurs = a.kurs;
}
void Student::setKurs(int kurs)
{
	if (kurs > 0 && kurs < 7)
		this->kurs = kurs;
	else
		this->kurs = 1;
}

Student::operator string() const
{
	stringstream sout;
	sout << "Name : " << getN() << "\tAge : " << getA() << "\tKurs : " << getK() << endl;
	return sout.str();
}
ostream& operator << (ostream& out, const Student& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Student& m)
{
	char n[10];
	cout << "Name : "; in >> n;
	int a;
	cout << "Age : "; in >> a;
	int kurs;
	cout<<"Kurs : "; cin>> kurs;
	m.setKurs(kurs), m.setAge(a), m.setName(n);

	return in;
}
Student& Student::operator = (const Student& a)
{
	Man::operator = (a);
	this->kurs = a.kurs;
	return *this;
}