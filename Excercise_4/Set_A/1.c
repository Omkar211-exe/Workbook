/*Write a program to accept an integer n and display all even numbers upto n.*/
#include <stdio.h>
int main ()
{
    int range;
    printf("Enter the range :");
    scanf("%d", &range);
    printf("All the even number till %d :",range);
    for (int i = 0 ; i < range ; i += 2)
    {
        printf("%d ",i);
    }

    return 0;
}