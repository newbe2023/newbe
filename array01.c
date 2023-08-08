#include<stdio.h>
int get_int(int number);
int main(void)
{
    int z;
    float answer;
    int n = get_int(z);

    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int(scores[i]);
    }
    answer = (scores[0]+scores[1]+scores[2])/n;

    printf("the average score of you is: %f\n", answer);
}









int get_int(int number)
{
    printf("Enter your integer value: ");
    scanf("%d", &number);
    return (number);
}