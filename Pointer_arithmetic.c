#include<stdio.h>
int main()
{
    int a=10;
    int *p; 
    p=&a; // &a ->address of A
    //Pointer arithmetic
    printf("Address of P is %d\n",p);
    printf("value at P is %d\n",*p);
    printf("sizeof integer is %d bytes\n",sizeof(int));
    printf("Address of P+1 is %d\n",p+1);
    printf("value at P+1 is %d\n",*(p+1));
}