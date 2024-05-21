#include<stdio.h>
void Increment(int *p)
{
    *p=*p+1;
}
int main()
{
    int a=10;
    Increment(&a);  //call by reference -> Passing the address of variable A
    printf("a=%d\n",a);
    
}