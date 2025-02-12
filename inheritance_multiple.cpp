#include<iostream>
#include<stdio.h>
using namespace std;
class A{				//Multiple Inheritance
	public:
		int a,b;
		void get(){
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		}
};
class B:public A{
	public:
			public:
	void sum()
	{
		coutobj1.get1();<<"addition of two numbers"<<a+b<<endl;
	}
};
class C:public A {
	public:
	void sub()
	{
		cout<<"sub of two numbers"<<a-b;
	}
};

int main()
{	B obj1;
	obj1.get();
	obj1.sum();
	C obj2;
	obj2.get();
	obj2.sub();
	return 0;
}
	
