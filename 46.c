#include<stdio.h>
int main()
{
    int num1, num2, i, gcd;
    printf("enter the first number ");
    scanf("%d", &num1);
    printf("enter the second number ");
    scanf("%d", &num2);
    for(i=1;i<=num1&&i<=num2;++i)
    {
    if(num1%i==0&&num2%i==0)
    {
        gcd=i;
    }
    }
    printf("gcd of %d and %d is %d ",num1, num2, gcd);
    return 0;
}