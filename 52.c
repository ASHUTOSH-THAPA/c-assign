#include<stdio.h>
int main()
{
    int num, armstrong=0, r, c;
    printf("Ashutosh thapa\n");
    printf("enter any number: ");
    scanf("%d", &num);
    c=num;
    while(num>0)
    {
        r=num%10;
        armstrong=(r*r*r)+armstrong;
        num=num/10;
    }
    if(c==armstrong)
    {
        printf("it is armstrong");
    }
    else{
        printf("it is not armstrong");
    }
    return 0;
}