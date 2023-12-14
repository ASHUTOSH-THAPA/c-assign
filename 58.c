#include<stdio.h>
int main()
{
    int num, i, c;
    int a=0, b=1;
    printf("enter the number: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}