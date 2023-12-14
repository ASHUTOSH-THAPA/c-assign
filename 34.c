#include<stdio.h>
int main()
{
    int num=0, firstdigit, lastdigit, sum;
    printf("enter the number: ");
    scanf("%d", &num);
    lastdigit=num%10;
    while(num>=10)
    {
    num=num/10;
    }
    firstdigit=num;
    sum=firstdigit + lastdigit;
    printf("Ashutosh thapa\n");
    printf("the sum of first digit and last digit number is: %d", sum);
    return 0;
}