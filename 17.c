#include <stdio.h>  
int main()  
{    
int num;  
printf(" Enter a positive number: ");  
scanf(" %d", &num);    
num = (num << 2);  
printf(" \n After shifting the binary bits to the left side. ");  
printf(" \n The new value of the variable num = %d", num);  
return 0;  
}  