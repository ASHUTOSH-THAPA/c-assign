#include<stdio.h>
int main()
{
    int i, sum=0, num;
    printf("enter the number: ");
    scanf("%d", &num);
        for(i=2;i<=num;i+=2)
        {
            sum+=i;
        }
        printf("Ashutosh thapa\n");
        printf("the sum of your even number is: %d", sum);
    return 0;
}