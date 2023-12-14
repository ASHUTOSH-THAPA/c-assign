#include<stdio.h>
int main()
{
    int base, exponent;
    int i, power=1;
    printf("enter the number ");
    scanf("%d", &base);
    printf("enter exponent");
    scanf("%d", &exponent);
    printf("Ashutosh thapa\nrollnumber=23151179\n");
    for(i=1;i<=exponent;i++)
    {
    power=power*base;
    }
    printf("%d ^ %d = %d", base, exponent, power);
    return 0;
}