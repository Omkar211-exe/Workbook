/*Write a program to accept an integer and count the number of digits in the number.*/
#include <stdio.h>
int main ()
{
    int count , n , temp;
    printf("Enter the number:");
    scanf("%d", &n);

    temp = n;
    count = 0;

    while(n!=0)
    {
        n/=10;
        count++;
    }

    printf("%d has %d digits.\n", temp , count);
    return 0 ;
}