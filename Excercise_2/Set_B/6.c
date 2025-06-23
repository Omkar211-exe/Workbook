/*Write a program to calculate the roots of a quadratic equation. Consider all possible cases.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    printf("Quadratic equation : ax*x + bx + c = 0.");
    printf("Now enter the values:\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);

    if((b*b-4*a*c)>0)
    {
        float temp = sqrt(b*b-4*a*c);
        float x1 = (-b + temp)/(2*a);
        printf("first value of x : %.2f\n", x1);
        float x2 = (-b - temp)/(2*a);
        printf("first value of x : %.2f\n", x2);
    }
    else 
    {
        printf("Imaginary roots.\n");
    }
    return 0;
}