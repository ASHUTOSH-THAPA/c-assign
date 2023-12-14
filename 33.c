#include<stdio.h>
int main()
{
    int num, firstdigit, lastdigit;
    printf("enter the number: ");
    scanf("%d", &num);
    lastdigit=num%10;
    while(num>=10)
    {
        num=num/10;
    }
    firstdigit=num;
    printf("Ashutosh thapa\nrollnumber=23151179\n");
    printf("the first digit number is: %d\n", firstdigit);
    printf("the last digit number is: %d", lastdigit);
    return 0;
}