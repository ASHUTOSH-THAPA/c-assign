#include<stdio.h>
int main()
{
    int i, num;
    printf("enter the number ");
    scanf("%d", &num);
    for(i=0;i<=num;i++)
    {
        printf("%d ", i);
    }
    return 0;
}