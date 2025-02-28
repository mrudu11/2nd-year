#include<iostream>
using namespace std;
class Date{
	
	int date,month,year;
	public:
		Date()
		{
			date = 1; month =1; year=2025;
		}
		friend void operator>>(istream &in, Date &d);
		friend void operator<<(ostream &out, Date &d);
};
void operator>>(istream &in, Date &d)
{
	cout<<"enter the date:";
	in>>d.date;
	in>>d.month;
	in>>d.year;
}
void operator<<(ostream &out, Date &d)
{
	cout<<"enter the date:"<<d.date<<"/"<<d.month<<"/"<<d.year;
	
}

int main()
{
	Date d1;
	cout<<d1;
	return 0;
}
