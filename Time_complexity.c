#include<stdio.h>
#include<time.h>
int arr[1000];
int n[1000]; 
int Algorithm_SeqSearch(int arr[],int size,int target)
{
	arr[0]=target;
	int i=size;
	while(arr[i]!=target)
	{
		i--;
	}
	return i;
}
void Time_Search()
{	int j;
	for(j=1;j<=1000;j++)
	{
		arr[j]=j;
	}
	for(j=1;j<=10;j++)
	{
		n[j]=10*(j-1);
		n[j+10]=100*j;
	}
}
int main()
{	int k,j,i;
	double time;
	double time1;
	Time_Search();
	for(j=1;j<=20;j++)
	{
		clock_t	h1=clock();
		for(i=1;i<500000;i++)
		{
			k=Algorithm_SeqSearch(arr,n[j],10);
		}
		clock_t	h2=clock();
		time=h2-h1;
		time1=time/500000;
		printf("\ntime=%f\t\t time1=%f",time,time1);
	}
}
