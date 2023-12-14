#include<stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Ashutosht thapa\n");
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>i;j--)
        {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}