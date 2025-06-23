/*Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area =
2*π*r*r + 2*π*r*h, volume = π*r*r*h)*/
#include <stdio.h>
#include <math.h>
int main()
{
    int h , r , pi = 3.1415;
    printf("Enter the radius:");
    scanf("%d", &r);
    printf("\nEnter the height:");
    scanf("%d",&h);

    int surf=2*pi*r*r + 2*pi*r*h;
    int vol=pi*r*r*h;
    printf("Surface area : %d", surf);
    printf("\nVolume : %d\n", vol);

    return 0 ;
}