#include <stdio.h>
int main()
{
    long decimalnum, remainder, quotient,octalnum=0;
    int octalNumber[100], i = 1, j;
    printf("Ashutosh thapa\n");
    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        octalnum = octalnum*10 + octalNumber[j];
    printf("Equivalent octal value of decimal no %ld is: %ld  ", decimalnum, octalnum);
    return 0;
}