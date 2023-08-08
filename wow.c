#include<stdio.h> 
int get_int(int number);                      
int main(void)
{
    int n;
    int z = get_int(n);
    printf("%d", z);
}























int get_int(int number)
{
    printf("Enter your integer value: ");
    scanf("%d", &number);
    return (number);
}