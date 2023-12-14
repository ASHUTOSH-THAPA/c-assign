#include<stdio.h>
int main()
{
    int i, sum, num;
    printf("enter your number: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
            sum+=i;
        
    }
    printf("Ashutosh thapa\n");
    printf("your sum of odd number is: %d", sum);
    return 0;
}