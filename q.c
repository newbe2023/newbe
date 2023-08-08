#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter your number: ");
        scanf("%d", &n);
    } while (n < 1);

    /*while(1)
    {
        printf("Enter your number: ");
        scanf("%d", &n);
        if (n>0)
        {
            break;
        }
    }*/
    

    //for each row
    for (int i = 0; i<n; i++)
    {  
        // for each column
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }

        //move to next row
        printf("\n");
    }
   
}
