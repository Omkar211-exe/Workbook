/*Accept inner and outer radius of a ring and print the perimeter and area of the ring (Hint:
perimeter = 2 π (a+b) , area = π (a*a - b*b ) )*/

#include <stdio.h>
int main ()
{
   float a , b , pi=3.1415;
   printf("Enter the inner radius : ");
   scanf("%f", &a); 
   printf("Enter the outer radius : ");
   scanf("%f", &b);

   float area = pi * ((a*a)-(b*b));
   float perimeter = 2 * pi * (a+b);

   printf("Area : %.2f\n", area);
   printf("perimeter : %.2f\n", perimeter);

   return 0 ;
}