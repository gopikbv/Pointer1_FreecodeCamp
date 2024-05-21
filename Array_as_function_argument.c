//Array as function arguments
#include<stdio.h>
int SumofElements(int a[],int size) //array as function arguments
{
    int i, sum=0;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
int A[]={1,2,3,4,5};
int size=sizeof(A)/sizeof(A[0]); //To find the no of elements in the array
int total=SumofElements(A,size);
printf("Sum of the array:%d\n",total);
}
