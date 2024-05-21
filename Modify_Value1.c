#include<stdio.h>
int main()
{
    int a=10;
    int *p; 
    p=&a; // &a ->address of A
    printf("Address of P is %d\n",p);
    printf("value at P is %d\n",*p);
    int b=20;
    *p=b;  //dereferencing
    printf("Address of P is %d\n",p);
    printf("value at P is %d\n",*p);
}