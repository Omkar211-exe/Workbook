/*Write a program having a menu with the following options and corresponding actions*/
/*Options                               Actions
1. Area of square                       Accept length ,Compute area of square and print
2. Area of Rectangle                    Accept length and breadth, Compute area of rectangle and print
3. Area of triangle                     Accept base and height , Compute area of triangle and print*/

#include <stdio.h>
int main ()
{
    int temp;
    printf("Select one of these options :\n");
    printf("1. Area of square \n2. Area of Rectangle\n3. Area of triangle\n");
    printf("Enter the respective denotion:");
    scanf("%d", &temp);

    switch(temp)
    {
        case 1:
        int side;
        printf("Enter the side of the square:");
        scanf("%d",&side);
        printf("Area of the square:%.2f\n", (float)side*side);
        break;

        case 2:
        int l,b;
        printf("Enter the length of the rectangle:");
        scanf("%d", &l);
        printf("Enter the breadth of the rectangle:");
        scanf("%d", &b);
        printf("Area of the rectangle : %.2f\n", (float)l*b);
        break;

        case 3:
        int h,ba;
        printf("Enter the height of the triangle :");
        scanf("%d", &h);
        printf("Enter the base of the triangle :");
        scanf("%d", &ba);
        printf("Area of the triangle : %.2f\n", (float)(h*ba)/2);
        break;
    }

    return 0;
}