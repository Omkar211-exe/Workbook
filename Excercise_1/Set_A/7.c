/*Accept a character from the keyboard and display its previous and next character in order.
Ex. If the character entered is ‘d’, display “The previous character is c”, “The next character is e”.*/

#include <stdio.h>
int main ()
{
    char alpha;
    printf("Enter the character :");
    scanf("%c", &alpha);
    printf("previous character : %c\n", alpha-1);
    printf("Next character : %c\n", alpha+1);

    return 0;
}