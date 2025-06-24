/*Accept radius from the user and write a program having menu with the following options and
corresponding actions*/
/*Options                       Actions
1. Area of Circle               Compute area of circle and print
2. Circumference of Circle      Compute Circumference of circle and print
3. Volume of Sphere             Compute Volume of Sphere and print*/

#include <stdio.h>
int main ()
{
    int temp;
    float r, pi = 3.1415;
    printf("Enter the radius (i.e. of circle/sphere):");
    scanf("%f",&r);

    printf("Select one of these options:\n");
    printf("1. Area of Circle\n2. Circumference of Circle\n3. Volume of Sphere\n");
    printf("Enter the respective denotion :");
    scanf("%d", &temp);

    switch(temp)
    {
        case 1:
        float area = pi*r*r*r;
        printf("\nArea of the circle : %.2f\n", area);
        break;

        case 2:
        float circ = 2*pi*r;
        printf("\nCircumference : %.2f\n", circ);
        break;

        case 3:
        float vol = (4*pi*r*r*r)/3;
        printf("\nVolume of the spere : %.2f\n", vol);
        break;
    }

    return 0;
}