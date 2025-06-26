/*Accept two integers x and y and calculate the sum of all integers between x and y (both
inclusive)*/

#include <stdio.h>
int main ()
{
    int x , y ;
    int sum = 0;
    printf("Enter the lower limit:");
    scanf("%d", &x);
    printf("Enter the upper limit:");
    scanf("%d", &y);

    for(int i = x  ; i <= y ; i++)
    {
        sum = sum + i;
    }

    printf("The sum of all integers between %d and %d : %d .\n", x,y,sum);
    return 0;
}