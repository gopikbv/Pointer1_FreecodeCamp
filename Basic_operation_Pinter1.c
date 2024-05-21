#include<stdio.h>
int main()
{
    int a=10;
    int *p; 
    p=&a; // &a ->address of a
    printf("%d\n",p);
    printf("%d\n",*p); //*p ->value at address pointed by p
    printf("%d\n",&a);
}