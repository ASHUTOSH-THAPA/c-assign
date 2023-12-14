#include<stdio.h>
int main()
{
    int num, first, last;
    printf("enter the two digit number: ");
    scanf("%d", &num);
    last=num%10;
    while(num>=10)
    {
        num=num/10;
    }
    first=num;
    first=first+last;
    last=first-last;
    first=first-last;
    printf("Ashutosh thapa\n");
    printf("after swaping the first digit to last digit is: %d\n", first);
    printf("after swaping the last digit to first digit is: %d", last);
    return 0;
}