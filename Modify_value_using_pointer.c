#include<stdio.h>
int main()
{
    int a=10;
    int *p; 
    p=&a; // &a ->address of A
    printf("a=%d\n",a);
    *p=12;  //dereferencing
    printf("a=%d\n",a);
}