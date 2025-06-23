/*Accept three sides of triangle as input, and print whether the triangle is valid or not. (Hint:
The triangle is valid if the sum of each of the two sides is greater than the third side).*/
#include <stdio.h>
int main ()
{
    int s1,s2,s3;
    printf("Now enter the length of three sides of the triangle ABC,\nSide_1:");
    scanf("%d", &s1);
    printf("Side_2:");
    scanf("%d", &s2);
    printf("Side_3:");
    scanf("%d", &s3);

    if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    {
        printf("Triangle ABC is an valid triangle.\n");
    }
    else 
    {
        printf("Triangle ABC is not an valid triangle.\n");
    }

    return 0;
}