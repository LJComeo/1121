#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

/*
class Base
{
public:
	int Bar(char x)
	{
		return (int)(x);
	}
	virtual int Bar(int x)
	{
		return (2 * x);
	}
};

class Derived : public Base
{
public:
	int Bar(char x)
	{
		return (int)(-x);
	}
	int Bar(int x)
	{
		return (x / 2);
	}
};
*/

/*
struct str_t
{
	long long len;
	char data[32];
};
struct data1_t
{
	long long len;
	char *data[2];
};
struct data2_t
{
	long long len;
	char *data[1];
};
struct data3_t
{
	long long len;
	void *data[];
};
*/

/*
class A
{
public:
	virtual void print()
	{
		cout << "A::print()" << "\n";
	}
};
class B:public A
{
public:
	virtual void print()
	{
		cout << "B::print()" << "\n";
	}
};
class C :public A
{
public:
	virtual void print()
	{
		cout << "C::print()" << "\n";
	}
};
void print(A a)
{
	a.print();
}
*/


int t1()
{

	/*
	char ccString1[] = "Is Page Fault??";
	char ccString2[] = "No Page Fault??";
	strcpy(ccString1, "No");
	if (strcmp(ccString1, ccString2) == 0)
	{
		cout << ccString2;
	}
	else
	{
		cout << ccString1;
	}
	*/

	/*
	A a, *aa, *ab, *ac;
	B b;
	C c;
	aa = &a;
	ab = &b;
	ac = &c;
	a.print();
	b.print();
	c.print();
	aa->print();
	ab->print();
	ac->print();
	print(a);
	print(b);
	print(c);
	*/
	/*
	Derived Obj;
	Base *pObj = &Obj;
	printf("%d", pObj->Bar((char)(100)));
	printf("%d", pObj->Bar(100));
	*/

	/*
	struct str_t str;
	memset((void*)&str, 0, sizeof(struct str_t));
	str.len = sizeof(struct str_t) - sizeof(int);
	_snprintf(str.data, str.len, "hello");
	struct data_t *pData = (struct data_t*)&str;
	printf("data:%s%s\n", str.data, (char *)(data));
	*/


	return 0;
}