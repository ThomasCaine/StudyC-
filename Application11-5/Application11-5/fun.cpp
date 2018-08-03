#include "stdafx.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include "global.h"
#include "student.h"
#include "fun.h"
void Input(Student &s)
{
	cin >> s.name >> s.num >> s.score;
}
void Output(Student &s)
{
	cout << setw(10) << s.name << setw(10) << s.num << setw(10) << s.score << endl;
}
void Sum(Student *p)
{
	g_sum = 0;
	for (int i = 0; i < N; i++)
		g_sum += p[i].score;
}
void Average(Student *p)
{
	Sum(p);
	g_average = g_sum / N;
}
