#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

class Students
{
public:

	//mutators
	void setName(const string &name) // то что в скобках называется параметры
	{
		this->name = name;
	}

	void setAge(const int &age)
	{
		this->age = age;
	}

	//accessors
	string getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}




	void set(const string &name, const int &age) // ставим константу чтобы случайно не изменить переменную
	{
		this->name = name; // обращаемся к свойству name
		this->age = age;
	}
	void print() 
	{
		cout << name << "\t" << age << "\n";
	}
	/*Student();
	~Student();*/

private: //
	string name; //меняем свойства методами описанные в паблике
	int age;
	int grades[5];
};

#endif // !_STUDENT_H_ то же что и прагма уанц
// полиморфмизм

