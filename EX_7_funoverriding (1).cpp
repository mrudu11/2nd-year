#include<iostream>
using namespace std;
class Parent
{
	public:
		void f1()
		{
			cout<<"In Parent class"<<endl;
		}
};
class Child{
	public:
		void f1()
		{
			cout<<"In Child class"<<endl;
		}
};

int main()
{
	Parent p;
	p.f1();
	Child c;
	c.f1();
	return 0;
}
