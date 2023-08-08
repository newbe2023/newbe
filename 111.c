#include<stdio.h>
int string_length(char s[]);
int main(void)
{
    char name[22];  
    printf("Enter your name here: ");
    scanf("%s", name);
    printf("You have entered %s\n", name);
    int n = string_length(name);
    printf("the length of your name is %d", n);
}








int string_length(char s[])
{
    int i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
    
}