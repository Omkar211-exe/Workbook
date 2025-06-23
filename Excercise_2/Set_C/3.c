/*A library charges a fine for every book returned late. Accept the number of days the member
is late, compute and print the fine as follows:(less than five days Rs 20 fine, for 6 to 10 days Rs.
50 fine and above 10 days Rs. 100 fine )*/
#include <stdio.h>
int main ()
{
    int days;
    printf("Enter the no. of days tha member is late:");
    scanf("%d", &days);

    if (days<5)
    {
        printf("You are %d days late fine amount : Rs. 20\n", days);
    }
    else if (days>5 && days<10)
    {
        printf("You are %d days late fine amount : Rs. 50\n", days);
    }
    else if (days>10)
    {
        printf("You are %d days late fine amount : Rs. 100\n", days);
    }

    return 0;
}