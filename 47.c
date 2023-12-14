#include<stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("enter the two number ");
    scanf("%d%d", &num1, &num2);
    lcm=(num1>num2)?num1:num2;
    while(1){
    if(lcm%num1==0&&lcm%num2==0)
    {
        printf("lcm is %d", lcm);
        break;
    }
    ++lcm;
    }
    printf("lcm is %d", lcm);
    return 0;
}