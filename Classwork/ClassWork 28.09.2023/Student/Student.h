#pragma once

class Student
{
private:
	// ���
	char name[21];
	// ������
	int marks[3];
public:
	// ���������� �������� �����
	double getAver();
	// ������ � ���� name
	const char* getName();
	void setName(const char* studentName);
	// ������ � ��������� ������� marks
	int getMark(int index);
	void setMark(int mark, int index);
};
