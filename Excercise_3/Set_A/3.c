/*Accept two numbers in variables x and y from the user and perform the following operations*/

/*Options                                   Actions
1. Equality                                 Check if x is equal to y
2. Less Than                                Check if x is less than y
3. Quotient and Remainder                   Divide x by y and display the quotient and remainder
4. Range                                    Accept a number and check if it lies between x and y(both inclusive)
5. Swap                                     Interchange x and y*/

#include <stdio.h>
int main ()
{
    int x,y,temp;
    printf("Enter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);

    printf("Select one of these options:");
    printf("\n1. Equality\n2. Less Than\n3. Quotient and Remainder\n4. Range\n5. Swap\n");
    printf("Enter the respective denotion:");
    scanf("%d", &temp);

    switch(temp)
    {
        case 1:
        if (x==y)
        {
            printf("%d = %d\n",x,y);
        }
        else
        {
            printf("%d != %d\n",x,y);
        }
        break;

        case 2:
        if (x<y)
        {
            printf("%d is less than %d\n",x,y);
        }
        else 
        {
            printf("%d is greater than %d\n",x,y);
        }
        break;

        case 3:
        int rem,quo;
        rem = x%y;
        quo = x/y;
        printf("Remainder : %d \nQuotient : %d\n",rem,quo);
        break;

        case 4:
        int num;
        printf("Enter the number:");
        scanf("%d",&num);

        if (x>y && (num>=y && num<=x))
        {
            printf("%d lies in [%d,%d].\n",num,x,y);
        }
        else if (x<y && (num<=y && num>=x))
        {
            printf("%d lies in [%d,%d].\n",num,x,y);
        }
        else 
        {
            printf("%d does not lies in [%d,%d].\n",num,x,y);
        }
        break;

        case 5:
        printf("\nBefore swap,\nX:%d\tY:%d\n",x,y);
        int temp = x;
        x = y;
        y = temp;
        printf("\nAfter swap,\nX:%d\tY:%d\n",x,y);
        break;
    }

    return 0;
}