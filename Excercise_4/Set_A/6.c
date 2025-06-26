/*Write a program to accept an integer and reverse the number. Example: Input: 546, Output 645.*/
#include <stdio.h>
int main ()
{
    int num , rev = 0, temp ;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Number before reversing : %d\n", num);

    while (num != 0)
    {
        temp = num % 10;
        rev = rev*10 + temp;
        num = (num-temp)/10;
    }

    printf("Number after reversing : %d\n", rev);

    return 0;
}