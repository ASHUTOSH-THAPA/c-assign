#include<stdio.h>
int main()
{
    int num, n, i, isprime;
    printf("Ashutosh thapa\n");
    printf("enter the number: ");
    scanf("%d", &num);
    for(n=2;n<=num;n++)
    {
    if(num%n==0)
    {
        isprime=1;
        for(i=2;i<=n/2;i++)
        {
            if(i%n==0)
            {
            isprime=0;
            }
        }
        if(isprime==1)
        {
            printf("%d ",n);
        }
    }
    }
    return 0;
}