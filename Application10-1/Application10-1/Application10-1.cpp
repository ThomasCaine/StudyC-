// Application10-1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
struct student
{
	char num[8];
	char name[10];
	float score[3];
}stu = { "0910128","Li Ming",86,91,78 };
int main()
{
	float s = 0;
	for (int i = 0; i < 3; i++)
		s = s + stu.score[i];
	cout << stu.num << endl << stu.name << endl << s / 3 << endl;
	system("pause");
	return 0;
}

