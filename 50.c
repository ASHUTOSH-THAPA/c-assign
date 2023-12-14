#include<stdio.h>
int main()
{
    int i, n, num, count, sum=0;
    printf("Ashutosh thapa\n");
    printf("enter the number: ");
    scanf("%d", &num);
    for(n=2;n<=num;n++)
    {
        count=1;
        for(i=2;i<=n/2;i++)
        {
          if(n%i==0)
          {
            count=0;
            break;
          }
        }      
    if(count==1)
    {
        sum+=n;
    }
    }
    printf("summ of all prime numbers are: %d", sum);
    return 0;
}    