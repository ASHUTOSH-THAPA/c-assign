#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a: ");
    scanf("%d", &a);
    if(a>0)
    {
    if(a%7==0||a%9==0)
    {
        printf("a is divisible ");
    }
    else
    {
    printf("a is not divisible ");
    }
    }
    return 0;
}