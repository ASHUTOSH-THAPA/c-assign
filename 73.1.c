#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Ashutosh thapa\n");
    printf("enter the row number");
    scanf("%d", &row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
