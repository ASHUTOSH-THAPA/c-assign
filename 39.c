#include<stdio.h>
int main()
{
    int num, reversed=0, remainder, original;
    printf("enter the number");
    scanf("%d", &num);
    printf("Ashutosh thapa\n");
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    if(original==reversed)
    {
        printf("it is palindrome number");
    }
    else{
        printf("it is not palindrome");
    }
    return 0;
}