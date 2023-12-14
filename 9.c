#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a:");
    scanf("%d", &a);
    printf("enter the number b:");
    scanf("%d", &b);
    printf("enter the number c:");
    scanf("%d", &b);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("the swapping number are a:%d\n b:%d\n c:%d", a, b, c);
    return 0;
}