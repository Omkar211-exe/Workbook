/*Write a program to accept real number x and integer n and calculate the sum of first n terms
of the series x+ 3x+5x+7x+…*/

#include <stdio.h>

int main ()
{
    int x , n , temp1 = 0 , temp2 = 1 , sum = 0;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Enter the no.of numbers you want of this series (x+3x+5x+7x+…):");
    scanf("%d", &n);

    for (int i = 0 ; i < n ; i ++)
    {
        temp1 = temp2 * x;
        sum += temp1;
        temp2 += 2;
    }

    printf("Sum : %d\n", sum);

    return 0;
}