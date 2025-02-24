#include<iostream>
using namespace std;
class complex{
	public:
		int real,img;
		complex(int r,int i)
		{
			real = r;img = i;
		}
		
		complex operator+(complex c4)
		{
			complex c5(0,0);
			c5.real =real+c4.real;
			c5.img =img+c4.img;
			return c5;
		}
			
		void display()
		{
			cout<<"sum:"<<real<<"+"<<img<<"i";
		}
};

int main()
{
	complex c1(5,4);
	complex c2(3,2);
	complex c3=c1+c2;
	c3.display();
	return 0;
}
