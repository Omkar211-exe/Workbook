/*Write a program to accept characters till the user enters EOF and count number of alphabets
and digits entered. Refer to sample program 5 given above.*/

#include <stdio.h>
int main ()
{
    char ch;
    int count = 0;
    printf("Enter the characters:");
    while((ch=getchar())!=EOF)
    {
        count ++;
    }

    printf("No.of characters entered : %d\n", count);

    return 0;
}