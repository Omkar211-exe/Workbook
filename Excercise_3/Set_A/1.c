/*Accept a single digit from the user and display it in words. For example, if digit entered is 9,
display Nine.*/
#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a single digit:");
    scanf("%d", &a);

    switch(a)
    {
        case 0:
        printf("%d in words is zero\n", a);
        break;
        case 1:
        printf("%d in words is one\n", a);
        break;
        case 2:
        printf("%d in words is two\n", a);
        break;
        case 3:
        printf("%d in words is three\n", a);
        break;
        case 4:
        printf("%d in words is four\n", a);
        break;
        case 5:
        printf("%d in words is five\n", a);
        break;
        case 6:
        printf("%d in words is six\n", a);
        break;
        case 7:
        printf("%d in words is seven\n", a);
        break;
        case 8:
        printf("%d in words is eight\n", a);
        break;
        case 9:
        printf("%d in words is nine\n", a);
        break;
    }

    return 0;
}