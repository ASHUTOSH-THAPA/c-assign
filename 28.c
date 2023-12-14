#include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("enter the number ");
    scanf("%d", &num);
    for(i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Ashutosh thapa\nrollnumber=23151179\n");
    printf("the sum of all natural number is: %d", sum);
    return 0;
}