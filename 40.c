#include<stdio.h>
int main()
{
    int num, digit, d, count=0;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("enter the digit: ");
    scanf("%d", &digit);
    printf("Ashutosh thapa\n");
    while(num!=0)
    {
        d=num%10;
        if(d==digit)
        {
        count++;
        }
        num=num/10;
    }
    printf("frequency of %d is: %d", digit, count);
    return 0;
}