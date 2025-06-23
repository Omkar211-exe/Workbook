/*Accept the x and y coordinate of a point and find the quadrant in which the point lies.*/
#include <stdio.h>
int main ()
{
    int x ,y ;
    printf("Enter the X coordinate:");
    scanf("%d", &x);
    printf("Enter the Y coordinate:");
    scanf("%d", &y);
    if (x>0 && y>0)
    {
        printf("(%d,%d) is in Ist quadrant.\n", x,y);
    }
    if (x<0 && y>0)
    {
        printf("(%d,%d) is in IIst quadrant.\n", x,y);
    }
    if (x>0 && y<0)
    {
        printf("(%d,%d) is in IIIst quadrant.\n", x,y);
    }
    if (x<0 && y<0)
    {
        printf("(%d,%d) is in IVst quadrant.\n", x,y);
    }

    return 0;
}