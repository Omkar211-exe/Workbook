/*Write a program to accept two integers x and n and compute x^n*/
#include <stdio.h>
int main()
{
    int x , n;
    printf("Enter the input of x (Format: x^n):");
    scanf("%d", &x);
    printf("Enter the input of n (Format: x^n):");
    scanf("%d", &n);

    int product=1;
    for (int i = 0 ; i < n ; i++)
    {
        product = product * x;
    }

    printf("%d ^ %d : %d\n", x,n,product);

    return 0;
}