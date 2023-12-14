#include<stdio.h>
int main()
{
    int num, count=0;
    printf("enter the number: ");
    scanf("%d", &num);
    do
    {
    num/=10;
    count++;
    }while (num!=0);
    printf("number of digits: %d", count);
    return 0;
}