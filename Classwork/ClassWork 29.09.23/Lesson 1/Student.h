#pragma once

#include <iostream>

class Student
{
private:
	// ���
	char* name;
	// ����� ������
	int markCount;
	// ������
	int* marks;

	// ��������� �������
	void createName(const char* studentName);

public:
	// �����������
	Student(const char* studentName,
		const int studentMarkCount,
		const int* studentMarks);

	// ������ �������� ������ ������
	const char* getName()
	{
		return name;
	}
	int getMark(int index)
	{
		return marks[index];
	}
	// ������ �������� ������ ������
	void setName(const char* studentName);
	void setMark(int mark, int index);
	// ���������� �������� �����
	double getAver();
};