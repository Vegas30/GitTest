// ��������� ������� ������ ��������
#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Student.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "������������ ��������."
		<< endl << endl;

	// ������ ������� ��������
	const int size = 2;
	// �������� � �������������
	// ������������� ������� ��������
	Student* students = new Student[size]
	{
	{"������� 1", 3, new int[3]{ 10, 10, 9 }},
	{"������� 2", 3, new int[3]{ 8, 10, 8 }}
	};
	// ������ � �������� ��������
	double sum = 0;

	for (Student* stud = students;
		stud < students + size; stud++)
	{
		double aver = stud->getAver();
		cout << "������� ���� " << stud->getName()
			<< " : " << fixed << setprecision(2)
			<< aver << endl;
		sum += aver;
	}
	cout << endl;
	cout << "������� ���� �� ������: "
		<< " : " << fixed << setprecision(2)
		<< sum / size << endl;
	delete[] students;

	_getch();
	return 0;
}

