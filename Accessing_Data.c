#include<stdio.h>
int main()
{
    int a=1025; // integer data
    int *p; // pointer to integer
    p=&a;
    printf("size of integer:%d\n",sizeof(int));
    printf("Address=%d, value=%d\n",p,*p);
    //Pointer arithmetic operation in using integer pointer
    printf("Address=%d, value=%d\n",p+1,*(p+1));
    char *p0; //char pointer
    p0=(char*)p; // Type casting -> To assign the integer pointer to the char pointer
    printf("size of char:%d\n",sizeof(char));
    printf("Address=%d, value=%d\n",p0,*p0);
    //1025 -> 00000000 00000000 00000100 00000001
    //Pointer arithmetic operation using char pointer
    printf("Address=%d, value=%d\n",p0+1,*(p0+1));


}