#include<stdio.h>
#include<string.h>
int main()
{
    char username[20], password[10];
    printf("enter the user name: ");
    scanf("%s", &username);
    printf("enter the password: ");
    scanf("%s", &password);
    if(strcmp(username,"ashutosh")==0&&strcmp(password,"uto123")==0)
    {
        printf("success");
    }
    else
    {
        printf("fail");
    }
    return 0;
}