/*Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the
distance (s) travelled. (Hint: v = u + a*t, s = u + a*t*t )*/

#include <stdio.h>
int main ()
{
   float u , v , a , s , t;
   printf("Enter the initial velocity : ");
   scanf("%f", &u);
   printf("Enter the acceleration : ");
   scanf("%f", &a);
   printf("Enter the time : ");
   scanf("%f", &t);

   v = u + a*t ;
   s = u*t + (a*t)/2;
   printf("Final velocity : %.2f\n", v);
   printf("Distance traveled : %.2f\n", s);

   return 0;
}