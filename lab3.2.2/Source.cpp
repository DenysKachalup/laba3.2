#include <iostream>
#include "Man.h"
#include "Student.h"
#include "StudV.h"

using namespace std;

Man RetunO(Man& a)
{
	return a;
}
Student RetunO(Student& a)
{
	return a;
}
StudV RetunO(StudV& a)
{
	return a;
}

int main()
{
	Man a("name", 15);
	cout<<"Man\n" << a;
	cin >> a;
	cout << a;
	cout << endl;

	Student s("name", 15,2);
	cout <<"Student\n"<< s;
	cin >> s;
	cout << s;
	cout << endl;

	StudV b("name", 15, 2,"kn");
	cout <<"StudV\n"<< b;
	cin >> b;
	cout << b;
	cout << endl;

	return 0;
}