#include<iostream>
#include<stdio.h>
using namespace std;
class A{
	public:
		int a;
		void get1(){
		cout<<"enter 1st numbers";
		cin>>a;
		}
	};
	
	class B:public A {						//Multilevel Inheritance
	public:
		int b;
		void get2(){
		cout<<"enter 2nd numbers";
		cin>>b;
			}
	};
	class C:public B{
	public:
	void sum()
	{
		cout<<"addition of two numbers"<<a+b;
	}
};

int main()
{	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
}

