/*A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to be
withdrawn from the user and print the total number of currency notes of each denomination the
cashier will have to give.*/

#include <stdio.h>
int main ()
{

    int withdraw;
    int n1,n5,n10,temp;
    printf("Enter the amount to be withdrawn :");
    scanf("%d",&withdraw);

    n10 = (withdraw - withdraw%10)/10;
    temp = withdraw - n10*10;
    n5 = (temp - temp%5)/5;
    temp = temp - n5*5;
    n1 = temp;

    printf("So,\nNumber to 10 denomination notes t be given : %d",n10);
    printf("\nNumber to 5 denomination notes t be given : %d",n5);
    printf("\nNumber to 1 denomination notes t be given : %d\n",n1);

    return 0;
}