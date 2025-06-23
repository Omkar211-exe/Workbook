#include <stdio.h>
#include <ctype.h>
int main ()
{
    char a;
    printf("Enter a character :");
    scanf("%c", &a);

    if (isdigit(a))
    {
        printf("%c is an digit\n", a);
    }
    else 
    {
        printf("%c is not an digit\n", a);
    }

    return 0;
}