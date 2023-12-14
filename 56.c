#include<stdio.h>
int main()
{
    int num, i, fact, sum=0, r, strong;
    printf("Ashutosh thapa\n");
    printf("enter the number ");
    scanf("%d",&num);
    strong=num;
    while(num!=0)
    {
    r=num%10;
    fact=1;
    for(i=1;i<=r;i++)
    {
        fact=fact*i;
    }
        sum=sum+fact;
        num=num/10;
    }
    if(strong==sum)
    {
        printf("it is strong number");
    }
    else
    {
        printf("it is not strong number");
    }
    return 0;
}