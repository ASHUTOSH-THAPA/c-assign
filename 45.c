#include<stdio.h>
int main()
{
    int i, num, fact=1;
    printf("Ashutosh thapa\n");
    printf("enter the number ");
    scanf("%d", &num);
    printf("the factorial numbers of %d are:\n",num);
    for(i=1;i<=num;i++)
    {
        if(num!=0)
        {
            fact=fact*i;
        }
    }
    printf("%d ", fact);
    return 0;
}