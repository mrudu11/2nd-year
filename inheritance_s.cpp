#include<iostream>
#include<stdio.h>
using namespace std;
class A{								//Single Inheritance
	public:
		int a,b;
		void get(){
		cout<<"enter two numbers";
		cin>>a>>b;
	}
};
class B:public A{
	public:
	void sum()
	{
		cout<<"addition of two numbers"<<a+b;
	}
};

int main()
{	B obj;
	obj.get();
	obj.sum();
	return 0;
}
