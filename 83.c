#include<stdio.h>

int main()
{
    int i,j;
    printf("AShutosh thapa\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5 || j==1 || i==1 || i==5)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}