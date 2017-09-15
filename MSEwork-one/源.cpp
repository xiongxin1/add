#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<Windows.h>
#include<iostream>
using namespace std;
int grade = 0;
//加法
void add()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " + " << b << " = ";
	cin >> c;
	d = a + b;
	if (d == c)
		cout << "√ 得1分,分数：" << ++grade << endl;
	else cout << "× 不得分"<<endl;
}
//减法
void minu()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " - " << b << " = ";
	cin >> c;
	d = a - b;
	if (d == c)
		cout << "√ 得1分,分数：" << ++grade << endl;
	else cout << "× 不得分"<<endl;
}
//乘法
void multi()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " * " << b << " = ";
	cin >> c;
	d = a * b;
	if (d == c)
		cout << "√ 得1分,分数：" << ++grade << endl;
	else cout << "× 不得分"<<endl;
}
//除法
void divider()
{
		int  c, d;
		float a, b, e, f;
		while(1)
	{
		a = rand() % 100;
		b = rand() % 100;
		if (b != 0)
			break;
	}
		cout << a << " / " << b << " = ";
		cin >> e;
		e = 100 * e;
		c = (int)e;
		f = a / b;
		f = 100 * f;
		d = (int)f;
		if (d == c)
			cout << "√ 得1分,分数：" << ++grade << endl;
		else cout << "× 不得分"<<endl;
}
//混合运算
void hy_operat()
{
	int a, b, c, d, e, f;
	int m = 1;
	float g, h;
	a = rand() % 100;
	b = rand() % 100;
	c = rand() % 100;
	d = rand() % 7;
	while (m)
	{
		switch (d)
		{
			//带括号乘法加法
			case 0:
			{
				cout << a << " *( " << b << " + " << c << ")" << " = ";
				cin >> e;
				f = a*(b + c);
				if(f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//不带括号乘法加法
			case 1:
			{
				cout << a << " *" << b << " + " << c << " = ";
				cin >> e;
				f = a*b + c;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//带括号乘法减法
			case 2:
			{
				cout << a << " *( " << b << " - " << c << ")" << " = ";
				cin >> e;
				f = a*(b - c);
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//不带括号乘法减法
			case 3:
			{
				cout << a << " *" << b << " - " << c << " = ";
				cin >> e;
				f = a*b - c;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//带括号除法加法,除法中采用float类型定义变量且保留两位有效数字，
			case 4:
			{
				cout << a << " /( " << b << " + " << c << ")" << " = ";
				if (0 == b + c)
					break;
				cin >> g;
				g = 100 * g;
				e = (int)g;
				float c1 = (float)c;
				float b1 = (float)b;
				float a1 = (float)a;
				h = a1/(b1 + c1);
				h = 100 * h;
				f = (int)h;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 5;
			break;
			//不带括号除法加法
			case 5:
			{
				cout << a << " /" << b << " + " << c << " = ";
				if (0 == b)
					break;
				cin >> g;
				g = 100 * g;
				e = (int)g;
				float c1 = (float)c;
				float b1 = (float)b;
				float a1 = (float)a;
				h = a1 / (b1 + c1);
				h = 100 * h;
				f = (int)h;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//带括号除法减法
			case 6:
			{
				cout << a << " /( " << b << " - " << c << ")" << " = ";
				if (0 == b - c)
					break;
				cin >> g;
				g = 100 * g;
				e = (int)g;
				float c1 = (float)c;
				float b1 = (float)b;
				float a1 = (float)a;
				h = a1 / (b1 + c1);
				h = 100 * h;
				f = (int)h;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}
			m = 0;
			break;
			//不带括号除法减法
			case 7:
			{
				cout << a << " /" << b << " - " << c << " = ";
				if (0 == b)
					break;
				cin >> g;
				g = 100 * g;
				e = (int)g;
				float c1 = (float)c;
				float b1 = (float)b;
				float a1 = (float)a;
				h = a1 / b1 + c1;
				h = 100 * h;
				f = (int)h;
				if (f == e)
					cout << "√ 得1分,分数：" << ++grade << endl;
				else cout << "× 不得分" << endl;
			}break;
			default:
				break;
		}

	}
}
void automatic()//生成四则运算
{
	srand((unsigned)time(NULL));
	int choose;//选择生成的题目数
	int i;
	float j;
	cout << "除法保留两位小数点，不四舍五入" << endl;
	cout << "请输入需要生成的题目数：";
	cin >> choose;
	int count = 0;//统计题目数
	while (1)
	{
		i = rand() % 5;
		switch (i)
		{
			//加法
		case 0: add();
		
			count++;
				break;
			//减法
		case 1: minu();
			count++;
				break;
			//乘法
		case 2:multi();
			count++;
				break;
			//除法
		case 3:divider();
			count++;
				break;
			//混合运算
		case 4:hy_operat();
			count++;
				break;
		default:cout << "程序错误！";
			break;
		}
		if (count == choose)
			break;
	}
	cout << "总分数：" << grade ;
	j = (float)grade / choose;
	cout << "正确率：" << j << endl;
}
void main()
{
	char yes='y', ch;
	one: 
	automatic();
	cout << "是否继续生成题目？(y/n)" << endl;
		cin >> ch;
		if (yes == ch)
		{
			system("cls");
			goto one;
		}
}
