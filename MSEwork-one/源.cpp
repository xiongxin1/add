#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<Windows.h>
#include<iostream>
using namespace std;
int grade = 0;
//�ӷ�
void add()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " + " << b << " = ";
	cin >> c;
	d = a + b;
	if (d == c)
		cout << "�� ��1��,������" << ++grade << endl;
	else cout << "�� ���÷�"<<endl;
}
//����
void minu()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " - " << b << " = ";
	cin >> c;
	d = a - b;
	if (d == c)
		cout << "�� ��1��,������" << ++grade << endl;
	else cout << "�� ���÷�"<<endl;
}
//�˷�
void multi()
{
	int a, b, c, d;
	a = rand() % 100;
	b = rand() % 100;
	cout << a << " * " << b << " = ";
	cin >> c;
	d = a * b;
	if (d == c)
		cout << "�� ��1��,������" << ++grade << endl;
	else cout << "�� ���÷�"<<endl;
}
//����
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
			cout << "�� ��1��,������" << ++grade << endl;
		else cout << "�� ���÷�"<<endl;
}
//�������
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
			//�����ų˷��ӷ�
			case 0:
			{
				cout << a << " *( " << b << " + " << c << ")" << " = ";
				cin >> e;
				f = a*(b + c);
				if(f == e)
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�������ų˷��ӷ�
			case 1:
			{
				cout << a << " *" << b << " + " << c << " = ";
				cin >> e;
				f = a*b + c;
				if (f == e)
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�����ų˷�����
			case 2:
			{
				cout << a << " *( " << b << " - " << c << ")" << " = ";
				cin >> e;
				f = a*(b - c);
				if (f == e)
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�������ų˷�����
			case 3:
			{
				cout << a << " *" << b << " - " << c << " = ";
				cin >> e;
				f = a*b - c;
				if (f == e)
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�����ų����ӷ�,�����в���float���Ͷ�������ұ�����λ��Ч���֣�
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
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 5;
			break;
			//�������ų����ӷ�
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
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�����ų�������
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
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}
			m = 0;
			break;
			//�������ų�������
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
					cout << "�� ��1��,������" << ++grade << endl;
				else cout << "�� ���÷�" << endl;
			}break;
			default:
				break;
		}

	}
}
void automatic()//������������
{
	srand((unsigned)time(NULL));
	int choose;//ѡ�����ɵ���Ŀ��
	int i;
	float j;
	cout << "����������λС���㣬����������" << endl;
	cout << "��������Ҫ���ɵ���Ŀ����";
	cin >> choose;
	int count = 0;//ͳ����Ŀ��
	while (1)
	{
		i = rand() % 5;
		switch (i)
		{
			//�ӷ�
		case 0: add();
		
			count++;
				break;
			//����
		case 1: minu();
			count++;
				break;
			//�˷�
		case 2:multi();
			count++;
				break;
			//����
		case 3:divider();
			count++;
				break;
			//�������
		case 4:hy_operat();
			count++;
				break;
		default:cout << "�������";
			break;
		}
		if (count == choose)
			break;
	}
	cout << "�ܷ�����" << grade ;
	j = (float)grade / choose;
	cout << "��ȷ�ʣ�" << j << endl;
}
void main()
{
	char yes='y', ch;
	one: 
	automatic();
	cout << "�Ƿ����������Ŀ��(y/n)" << endl;
		cin >> ch;
		if (yes == ch)
		{
			system("cls");
			goto one;
		}
}
