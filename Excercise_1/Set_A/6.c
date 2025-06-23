/*Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface
area and volume (Hint : surface area=2(lb+lh+bh ), volume = lbh )*/

#include <stdio.h>
int main ()
{
    int l , b , h;
    printf("Enter the dimensions:\n");
    printf("Length :");
    scanf("%d", &l);
    printf("breadth :");
    scanf("%d", &b);
    printf("height :");
    scanf("%d", &h);

    float sa=2*((l*b)+(l*h)+(b*h));
    float vol = l*b*h;
    printf("Surface area : %.2f\n", sa);
    printf("Volume : %.2f\n", vol);

    return 0;
}