/*Write a program to accept an integer and check if it is even or odd.*/
#include <stdio.h>
int main ()
{
    int num ;
    printf("Enter the number :");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("%d is an even number.\n", num);
    }
    if (num%2!=0)
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}