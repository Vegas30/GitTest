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

	// �������� ������� � ��������� ����������
	Student student("������ �.�.", 3,
		new int[3]{ 10, 10, 9 });


	// ���������� ������ �������
	cout << "������� ���� " << student.getName()
		<< " : " << fixed << setprecision(2)
		<< student.getAver() << endl;
	_getch();
	return 0;
}