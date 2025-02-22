#include<iostream>
using namespace std;
class Shape{
	
	public:
		float a;
		void area(int r)
		{
			a = r*r*3.142;
			cout<<"area of circle"<<a<<endl;
		}
		void area(int a,int b)
		{
			a = a*b;
			cout<<"area of rectangle"<<a<<endl;
		}
			void area(int h,float w)
		{
			a = 0.5*h*w;
			cout<<"area of triangle"<<a<<endl;
		}
};
int main()
{
	Shape s;
	s.area(5);
	s.area(4,5);
	s.area(2,3.5f);
	return 0;
}
