#include<stdio.h>
int main()
{
    int num;
    printf("enter the positive number ");
    scanf("%d", &num);
    num=(num>>1);
    printf("Ashutosh thapa\nrollnumber=23151179");
    printf("after shifting binary bits to the right side\n");
    printf("the new variable number is: %d", num);
    return 0;
}