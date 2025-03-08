#include <stdio.h>
void bubbleSort(int[],int);
int main()
{
    int i,size;
    printf("enter size");
    scanf("%d",&size);
    int arr1[size];
    printf("enter array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    bubbleSort(arr1,size);
    
}
void bubbleSort(int arr1[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
        
    }
    printf("ascending order of array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr1[i]);
    }
}