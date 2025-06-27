/*Write a program to accept real number x and integer n and calculate the sum of first n terms
of the series (1/x)+(2/x*x)+(3/x*x*x)......*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int x , n ; 
    float sum = 0 ,temp ;

    printf("Enter a real number:");
    scanf("%d", &x);
    printf("Enter the no.of numbers you want of this series ((1/x)+(2/x*x)+(3/x*x*x)..):");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i ++)
    {
        temp = i / pow(x,i);
        //printf("%d\n", temp);
        sum += temp;
    }

    printf("Sum : %f \n", sum);

    return 0 ;
}