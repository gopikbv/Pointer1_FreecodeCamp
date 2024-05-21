#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    *p=6; //modify the value in x
    int **q=&p; // pointer to pointer -> used to store the address of a pointer
    int ***r=&q; //pointer to pointer to pointer -> used to store the address of a double pointer
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q); 
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",r);
    printf("%d\n",*r);
    printf("%d\n",*(*r));
    printf("%d\n",***r);


    

}