/*Accept a character from the user and display its ASCII value.*/

#include <stdio.h>
int main ()
{
    char alpha;
    printf("Enter the charater :");
    scanf("%c",&alpha);
    printf("The ASCII code of %c : %d\n", alpha ,alpha);

    return 0;
}