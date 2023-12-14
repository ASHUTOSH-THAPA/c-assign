#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the a: ");
    scanf("%d", &a);
    printf("enter the b: ");
    scanf("%d", &b);
    int postinc=a++;
    printf("the post increment value of a:%d\n", postinc);
    int postdec=b--;
    printf("the post decrement value of b:%d", postdec);
    return 0;
}