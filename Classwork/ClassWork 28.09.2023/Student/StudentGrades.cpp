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

	// ����������� �������
	Student student;
	// ���������� �������� �������
	student.setName("������ �.�.");
	student.setMark(10, 0);
	student.setMark(10, 1);
	student.setMark(9, 2);
	// ���������� ������ �������
	cout << "������� ���� " << student.getName()
		<< " : " << fixed << setprecision(2)
		<< student.getAver() << endl;
	_getch();
	return 0;
}