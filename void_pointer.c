#include<stdio.h>
int main()
{
    int a=1025; // integer data
    int *p; // pointer to integer
    p=&a;
    printf("size of integer:%d\n",sizeof(int));
    printf("Address=%d, value=%d\n",p,*p);
    //void pointer or generic pointer--> It doesn't belongs to any datatype
    void *p0;
    p0=p;
    //printf("Address=%d,value=%d\n",p0,*p0); //In void pointer -> dereferencing of the void pointer 
    //results in error and In general pointer arithmetic operation is not allowed 
    printf("Address=%d\n",p0);
    printf("Address=%d\n",p0+1);
}