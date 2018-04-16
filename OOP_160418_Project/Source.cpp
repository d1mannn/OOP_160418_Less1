#include "Student.h"


int main()
{	
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	string name;
	int numb;
	int age;
	Students *student;
	cout << "Enter number of students - ";
	cin >> numb;

	//cin.get(); // чтобы при записи символов в цикле ниже всЄ было ќ 
	cin.ignore(); // весь поток закрывает

	student = new Students[numb]; // тоже что и calloc но в c++
	Students * temp;
	for (int i = 0; i < numb; i++)
	{	
		cout << "Enter name: ";
		getline(cin, name);
		//cin.ignore();// пробелы учитывает
		//cin >> name; // cin считывает до пробела
		age = 17 + rand() % 5;
		student[i].setName(name);
		student[i].setAge(age);
		//student[i].set(name, age);
	}

	for (int i = 0; i < numb; i++)
	{
		cout << student[i].getName() << "\t" << student[i].getAge() << endl;
		// либо метод print
		//student[i].print();
	}
	system("pause");
	return 0;
	
	temp = new Students[numb + 5]; // realloc
	for (int i = 0; i < numb; i++)
	{
		temp[i] = student[i];
	}
	delete[] student;
	student = temp;

	//student->set("Marina", a); // передать переменную не можем?
	student->print();
	
	
}