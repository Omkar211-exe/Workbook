/*Write a program to accept a character, an integer n and display the next n characters.*/

#include <stdio.h>
int main ()
{
    char alpha;
    int n;

    printf("Enter a character:");
    scanf("%c", &alpha);
    printf("Enter the number of alphabets you want to print after %c:",alpha);
    scanf("%d", &n);

    for(int i = 0 ; i < n+1 ; i++)
    {
        printf("%c ", alpha+i);
    }

    printf("\n");

    return 0;
}