/*Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-
32), K = C + 273.15)*/
#include <stdio.h>
int main()
{
    float far , cel , kel ;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f", &far);
    cel = (5*(far - 32))/9;
    kel = cel + 273.15;
    printf("Temperature in celsius : %.2f\n", cel);
    printf("Temperature in kelvin : %.2f\n", kel);

    return 0;
}