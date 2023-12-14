#include<stdio.h>
int main()
{
    int i, num;
    printf("enter any number to print the table: ");
    scanf("%d", &num);
    printf("Ashutosh thapa\nrollnumber=23151179\n");
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n ",num, i, (num*i));
    }
    return 0;
}