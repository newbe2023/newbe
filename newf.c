#include<stdio.h>
float get_float_value(float number);
int main(void)
{
    float x;                                                  ;
    float y = get_float_value(x);
    printf("Number is %f\n", y);
    
}






float get_float_value(float number)
{
    printf("Enter your number: ");
    scanf("%f", &number);
    return number;
}