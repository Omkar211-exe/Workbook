/*Write a program to check whether given character is a digit or a character in lowercase or
uppercase alphabet. (Hint ASCII value of digit is between 48 to 58 and Lowercase characters
have ASCII values in the range of 97 to 122, uppercase is between 65 and 90)*/
#include <stdio.h>
int main ()
{
    char a;
    printf("Enter a charater:");
    scanf("%c", &a);

    if (a>=48 && a<=58)
    {
        printf("%c is an Digit\n",a);
    }
    else if (a>=97 && a<=122)
    {
        printf("%c is an Lowercase\n",a);
    }
    else if (a>=65 && a<=90)
    {
        printf("%c ia an Uppercase\n",a);
    }

    return 0;
}