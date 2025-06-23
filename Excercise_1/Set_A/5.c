/*Accept two numbers and print arithmetic and harmonic mean of the two numbers (Hint: AM=
(a+b)/2 , HM = ab/(a+b) )*/

#include <stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    float am = (num1+num2)/2;
    float hm = (num1*num2)/(num1+num2);

    printf("The arithmatic mean : %.2f\n", am);
    printf("The harmonic mean : %.2f\n", hm);

    return 0;
}