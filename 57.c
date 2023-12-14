#include<stdio.h>
int main()
{
    int num, strong, fact, i, sum, r, j, n;
    printf("Ashutosh thapa\n");
    printf("enter the number ");
    scanf("%d",&num);
    for(j=1;j<=num;j++)
    {
        n=j;
        strong=n;
        sum=0;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    }
    if(strong==sum)
    {
        printf("%d ",n);
    }
    return 0;
}