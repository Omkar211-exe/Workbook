/*Write a program to accept quantity and rate for three items, compute the total sales amount,
Also compute and print the discount as follows: (amount > 3000– 20% discount, amount between
2000 to 2999-- 15% discount, amount between – 999 to 1999-- 8 % discount)*/

#include <stdio.h>
int main ()
{
    int q1,r1;
    int q2,r2;
    int q3,r3;
    printf("Enter the details,\n\nItem_1,\nQuantity:");
    scanf("%d", &q1);
    printf("Rate:");
    scanf("%d", &r1);
    printf("\nItem_2,\nQuantity:");
    scanf("%d", &q2);
    printf("Rate:");
    scanf("%d", &r2);
    printf("\nItem_3,\nQuantity:");
    scanf("%d", &q3);
    printf("Rate:");
    scanf("%d", &r3);

    float amount = q1*r1 + q2*r2 + q3*r3;
    printf("\nYour amount before discount:%.2f\n",amount);

    if (amount > 3000.0f)
    {
        printf("Your amount after discount of 30%%:%.2f\n", (amount - 0.3f*amount));
    }
    else if (amount > 2000.0f && amount < 3000.0f)
    {
        printf("Your amount after discount of 15%%:%.2f\n", (amount - 0.15f*amount));
    }
        else if (amount > 1000.0f && amount < 2000.0f)
    {
        printf("Your amount after discount of 8%%:%.2f\n", (amount - 0.08f*amount));
    }
    else 
    {
        printf("No discounts under 1000.\n");
    }
    return 0;
}