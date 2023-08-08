#include<stdio.h>
float get_float(float number);
int main(void)
{
    float x;                                                  ;
    float y = get_float(x);
    printf("Number is %f\n", y);
    
}






float get_float(float number)
{
    printf("Enter your number: ");
    scanf("%f", &number);
    return number;
}