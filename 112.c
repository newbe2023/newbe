#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[5];
    printf("Enter your name here:");
    scanf("%s", name);
    printf("The lenght of your text is %d", strlen(name));

}