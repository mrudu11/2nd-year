#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5},index;
	cout<<"enter index:";
	cin>>index;
	try{
		if(index<0 || index>4)
		{
			throw "invalid index";
		}
		
		cout<<"element at"<<index<<"is"<<arr[index];
	}
	catch(const  &str)
	{
		cout<<"exception"<<str;
	}
	return 0;
}
