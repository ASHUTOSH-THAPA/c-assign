#include<stdio.h>
int main()
{
    int num, sum=0, i;
    printf("Ashutosh thapa\n");
    printf("enter the number ");
    scanf("%d", &num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
     printf("it is perfect number");
    }
    else
    {
    printf("it is not perfect number"); 
    }
    return 0;
}