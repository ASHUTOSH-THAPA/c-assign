#include<stdio.h>
int main()
{
    int num, product;
    printf("enter the number ");
    scanf("%d", &num);
    while(num!=0)
    {
        product=product*num%10;
        num=num/10;
    }
    printf("Ashutosh thapa\n");
    printf("product of number is:%d", product);
    return 0;
}