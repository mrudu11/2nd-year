#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter two no for division:";
	cin>>b>>c;
	try{
		if(c==0)
		{
			throw"divide by zero error";
		}
		a = b/c;
		cout<<"answer="<<a<<endl;
	}
	catch(const char *str)
	{
		cout<<"exception"<<"str";
	}
	return 0;
}
