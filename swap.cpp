#include<stdio.h>
#include<iostream>
class arith{
	public:
	int add(int num1,int num2)
	{
		int add = num1 + num2;
			return add;
	}
	void swap(int &num1,int &num2)
	{
		int tmp;
		tmp=num1;
		num1=num2;
		num2=tmp;
	}
};
int main()
{
	arith s;
	int num1,num2,add;
	std::cout<<"enter num1 & num2"<<"\n";
	std::cin>>num1>>num2;
	add = num1 + num2;
	s.add(num1,num2);
	s.swap(num1,num2);
	std::cout<<"addition is"<<add<<"\n";
	std::cout<<"swap no is"<<"\n"<<num1<<"\n"<<num2;
}

