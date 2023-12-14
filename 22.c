#include<stdio.h>
int main()
{
    char c;
    printf("enter F for female, M for male, O for others: ");
    scanf("%s", &c);
    printf("\nAshutosh thapa\nrollnumber:23151179\n");
    if(c=='F'||c=='f')
    {
        printf("your gender is female");
    }
    else if(c=='M'||c=='m')
    {
        printf("your gender is male");
    }
    else if(c=='O'||c=='o')
    {
        printf("your gender is other");
    }
    else
    {
        printf("enter valide character");
    }
    return 0;
}