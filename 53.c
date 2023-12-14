#include<stdio.h>
int main()
{
    int num, r, armstrong, i, n;
    printf("Ashutosh thapa\n");
    printf("enter the number ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        armstrong=0;
        n=i;
        while(n!=0)
        {
            r=n%10;
            armstrong=armstrong+(r*r*r);
            n=n/10;
        }
    if(i==armstrong)
    {
        printf("%d ", i);
    }
}
    return 0;
}