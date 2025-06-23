/*Accept the x and y coordinates of two points and compute the distance between the two
points.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float X1,X2,Y1,Y2;
    printf("Enter the X coordinate of first point:");
    scanf("%f", &X1);
    printf("Enter the Y coordinate of first point:");
    scanf("%f", &Y1);
    printf("Enter the X coordinate of second point:");
    scanf("%f", &X2);
    printf("Enter the Y coordinate of second point:");
    scanf("%f", &Y2);

    float dist = pow(((X1-X2)*(X1-X2))+((Y1-Y2)*(Y1-Y2)),0.5);
    printf("The Distance between the points : %.2f\n", dist);

    return 0;
}