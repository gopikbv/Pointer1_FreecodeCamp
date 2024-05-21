#include<stdio.h>
int main()
{
    int a=5;
    int *p;  //pointer to integer declaration
    p=&a; // Assign the address of varaiable a to p
    printf("The value of P:%lu\n",p);
    printf("The address of a:%lu\n",&a);
    printf("The address of p:%lu\n",&p); 
    //dereferencing the pointer
    printf("The Value of the address stored in p:%d\n",*p);
    //Assigning value to the pointer variable
    *p=8;
    printf("The Value of the variable a:%d\n",a);
}