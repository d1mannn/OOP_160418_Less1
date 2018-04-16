#ifndef _STUDENT_H_
#define _STDENT_H_
#include <string>
#include <iostream>
using namespace std;

class Students
{
public:
	void set()
	{

	}
	void print() {
		cout << name << "\t" << age << "\t";
	}
	Students();
	~Students();

private:
	string name;
	int age;
	int grades[5];
};

Students::Students()
{
}

Students::~Students()
{
}
#endif // !_STUDENT_H_ то же что и прагма уанц
// полиморфмизм

