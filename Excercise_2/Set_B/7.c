/*Accept the cost price and selling price from the keyboard. Find out if the seller has made a
profit or loss and display how much profit or loss has been made.*/
#include <stdio.h>

int main ()
{
    float cp,sp;
    printf("Enter the cost price:");
    scanf("%f", &cp);
    printf("Enter the selling price:");
    scanf("%f", &sp);

    if (sp>cp)
    {
        printf("You have made a profit of %.2f\n", sp-cp);
    }
    else
    {
        printf("You have made a loss of %.2f\n", cp-sp);
    }
    return 0;
}