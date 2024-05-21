#include<stdio.h>
void Increment(int a)
{
    a=a+1;
    printf("Value of A in Increment:%d\n",a);
    printf("Address of A in Increment:%d\n",&a);

}
int main()
{
    int a=10;
    Increment(a);
    //printf("a=%d\n",a);
    printf("Value of A in Main:%d\n",a);
    printf("Address of A in Increment:%d\n",&a);
}