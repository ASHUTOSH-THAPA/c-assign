#include<stdio.h>
int main()
{
    int ch;
    for(ch=0;ch<=255;ch++)
    {
        printf("ASCII value %d\t and ASCII character %c", ch, ch);
    }
    return 0;
}