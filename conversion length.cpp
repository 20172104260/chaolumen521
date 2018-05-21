// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLength
{
private:
	int feet;
	double inch;
	int feet1;
	double inch1;
	int feet2;
	double inch2;
public:
	CLength()
	{
		feet = 0;
		inch = 0;
		feet1 = 0;
		inch1 = 0;
		feet2 = 0;
		inch2 = 0;
	}
	void setvalue(int a, int b)
	{
		feet1 = a;
		inch1 = b;
	}
	/*int conversion()
	{
	int sub;
	sub = inch / 12;
	if (inch >= 12)
	{
	feet = feet + sub;
	inch = inch - sub * 12;
	}
	else
	feet = feet + 0;
	return 0;
	}*/
	int conversion(double meter)
	{
		double sub;
		double i;
		sub = meter*3.2808399;
		feet2 = (int)sub;
		i = (double)sub - (int)sub;
		inch2 = i * 12;
		return 0;
	}
	int sum()
	{
		int j;
		feet = feet2 + feet1;
		inch = inch2 + inch1;
		if (inch >= 12)
		{
			j = (int)inch / 12;
			feet = feet + j;
			inch = inch - j * 12;
		}
		return 0;
	}
	void display()
	{
		cout << feet << " feet " << inch << " inch " << endl;
	}
};
int main()
{
	CLength od;
	double m;
	int a;
	int b;
	cout << "输入米" << endl;
	cin >> m ;
	od.conversion(m);
	cout << "输入英尺，英寸" << endl;
	cin >> a >> b;
	od.setvalue(a, b);
	od.sum();
	od.display();
	return 0;
}

