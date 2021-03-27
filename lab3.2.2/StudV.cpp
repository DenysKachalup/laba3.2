#include "StudV.h"

StudV::StudV(const char* aName, int age, int kurs,string spec)
	:Student(aName, age,kurs)
{
	this->spec = spec;
}
StudV::StudV(StudV& a)
	:Student(a)
{
	this->spec=a.spec;
}
void StudV::setSpec(string spec)
{
	this->spec = spec;
}

StudV::operator string() const
{
	stringstream sout;
	sout << "Name : " << getN() << "\tAge : " << getA() << "\tKurs : " << getK() << "\tSpec : "<< getS() <<endl;
	return sout.str();
}
ostream& operator << (ostream& out, const StudV& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, StudV& m)
{
	char n[10];
	cout << "Name : "; in >> n;
	int a;
	cout << "Age : "; in >> a;
	int kurs;
	cout << "Kurs : "; cin >> kurs;
	string spec;
	cout << "Spec : "; cin >> spec;
	m.setKurs(kurs), m.setAge(a), m.setName(n),m.setSpec(spec);
	return in;
}
StudV& StudV::operator = (const StudV& a)
{
	Student::operator = (a);
	this->spec = a.spec;
	return *this;
}
