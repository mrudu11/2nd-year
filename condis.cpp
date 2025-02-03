#include<iostream>
using namespace std;
class circle
{
	public :
		int r;
		float area;
	circle()  //default constructor
	{
		cout<<"\n\nenter the radius of circle:";
		cin>>r;
		area = 3.14*r*r;
		cout<<"\n\narea:"<<area;
	}
	circle(int r1)
	{
		r=r1;
		area = 3.14*r*r;
		cout<<"\n\narea:"<<area;
	}
	circle(circle &obj)   //copy constructor
	{
		r=obj.r;
		area =3.14*r*r;
		cout<<"\n\narea:"<<area;
	}
	~circle()
	{
		cout<<"\n\ndestructor run";
	}
};
int main()
{
	circle c1;
	cout<<"\n\nenter radius1:"<<c1.r;
	circle c2(5);
	cout<<"\n\nradius2:"<<c2.r;
	{
		circle c3=c2;
		cout<<"\n\nradius3:"<<c3.r;
	}
	cout<<"\n\nmain executed";
}
