#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the a value:");
    scanf("%d", &a);
    printf("enter the b value:");
    scanf("%d", &b);
    int preinc=++a;
    printf("the pre increment of a is:%d\n", preinc);
    int postdec=--b;
    printf("the pre decrement of b is:%d", postdec);
    return 0;
}