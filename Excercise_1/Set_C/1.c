/*Consider a room having one door and two windows both of the same size. Accept
dimensions of the room, door and window. Print the area to be painted (interior walls) and area to
be whitewashed (roof).*/

#include <stdio.h>
int main ()
{
    float l,ld,lw;
    float b,bd,bw,h;
    // inputs
    printf("Enter the length of the room:");
    scanf("%f",&l);
    printf("Enter the breadth of the room:");
    scanf("%f",&b);
    printf("Enter the height of the room:");
    scanf("%f",&h);
    printf("Enter the length of the door:");
    scanf("%f",&ld);
    printf("Enter the breadth of the door:");
    scanf("%f",&bd);
    printf("Enter the length of the two windows:");
    scanf("%f",&lw);
    printf("Enter the breadth of the two windows:");
    scanf("%f",&l);
    float paint = (2*(l*h+b*h)-(ld*bd)-2*(lw*bw));
    float whitewash = l*b;
    printf("So,\nArea to be painted : %.2f\nArea to be whitewashed : %.2f\n", paint,whitewash);

    return 0;
}