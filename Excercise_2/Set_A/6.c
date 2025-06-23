/*Accept a lowercase character from the user and check whether the character is a vowel or
consonant. (Hint: a,e,i,o,u are vowels)*/
#include <stdio.h>
#include <ctype.h>
int main ()
{
    char a;
    printf("Enter a character :");
    scanf("%c", &a);

    if (islower(a))
    {
        if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        {
            printf("%c is an vowel.", a);
        }
        else
        {
            printf("%c is an consonent.", a);
        }
    }
    else
    {
        printf("%c is in upper case.", a);
    }

    return 0;
}