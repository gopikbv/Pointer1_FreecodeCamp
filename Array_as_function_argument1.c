//Array as function arguments
#include<stdio.h>
int SumofElements(int a[]) //array as function arguments
{
    
    int i, sum=0;
    int size=sizeof(a)/sizeof(a[0]);
    printf("SOE- Size of a=%d, Size of a[0]=%d\n",sizeof(a),sizeof(a[0]));
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
int A[]={1,2,3,4,5};
 //To find the no of elements in the array
int total=SumofElements(A);
printf("Sum of the array:%d\n",total);
printf("Main- Size of A=%d, Size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
}
