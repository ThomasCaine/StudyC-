#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[] = "C style string";
	string s0;
	string s1("string");
	cout << s1 << endl;
	string s2(str);
	cout << s2 << endl;
	string s3(str, 2, 3);
	cout << s3 << endl;
	string s4(s1);
	cout << s4 << endl;
	string s5(str, 3);
	cout << s5 << endl;
	string s6(10, 'k');
	cout << s6 << endl;
    return 0;
}

