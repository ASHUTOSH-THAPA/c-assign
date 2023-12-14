#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("enter the number: ");
    scanf("%d", &num);
    while(num!=0)
    {
    sum=sum+num%10;
    num=num/10;
    }
    printf("sum of number is: %d", sum);
    return 0;
}