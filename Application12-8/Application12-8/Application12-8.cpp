#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Student;
void getStudentInfo(Student& s);
class Teacher
{
public:
	void SetScore(Student& s, double sc);
private:
	long m_number;
	char m_name[10];
};
class Manager
{
public:
	void ModifyStudentInfo(Student& s, long, const char *, double);
private:
	long m_number;
	char m_name[10];
};
class Student
{
public:
	friend void getStudentInfo(Student& s);
	friend void Teacher::SetScore(Student& s, double sc);
	friend class Manager;
	double GetScore()
	{
		return m_score;
	}
private:
	long m_number;
	char m_name[10];
	double m_score;
};
void Teacher::SetScore(Student& s, double sc)
{
	s.m_score = sc;
}
void Manager::ModifyStudentInfo(Student& s, long number, const char * name, double sc)
{
	s.m_number = number;
	strcpy_s(s.m_name,32, name);
	s.m_score = sc;
}
void getStudentInfo(Student& s)
{
	cout << "学号："<<s.m_number << " 姓名：" << s.m_name << " 成绩：" << s.m_score << endl;
}

int main()
{
	Teacher t;
	Manager m;
	Student s;
	t.SetScore(s, 98.5);
	m.ModifyStudentInfo(s, 9001201, "周洋 ", 99);
	getStudentInfo(s);
    return 0;
}