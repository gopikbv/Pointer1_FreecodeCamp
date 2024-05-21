//Array as function arguments
#include<stdio.h>
void Double(int *A,int size)  // int *A or int  A[] -> Both are same when the array used as function arg
{
    for(int i=0;i<size;i++)
    {
    A[i]=2*A[i];
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]); //To find the no of elements in the array
    Double(A,size); //Modifying the array value in the Calling function it will reflect in the calling function
    //Printing the modified value of the array
    for(int i=0;i<size;i++)
    {
    printf("%d ",A[i]);
    }

} 