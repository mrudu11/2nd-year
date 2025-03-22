#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5},index;
	cout<<"enter index:";
	cin>>index;
	try{
		if(index<0 || index>4)
		{
			throw out_of_range("invalid index");
		}
		
		cout<<"element at"<<index<<"is"<<arr[index];
	}
	catch(const out_of_range &str)
	{
		cout<<"exception"<<str.what();
	}
	return 0;
}
