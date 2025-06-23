/*Write a program, which accepts annual basic salary of an employee and calculates and
displays the Income tax as per the following rules.
Basic: < 1,50,000           Tax = 0
1,50,000 to 3,00,000        Tax = 20%
> 3,00,000                  Tax = 30%*/

#include <stdio.h>
int main ()
{
    int salary;
    printf("Enter your salary:");
    scanf("%d",&salary);

    if (salary<15000)
    {
        int tax = salary*0;
        printf("Income tax(0%%):%d\n", tax);
    }
    else if (salary<300000)
    {
        int tax = salary*0.2;
        printf("Income tax(20%%):%d\n", tax);
    }
    else 
    {
        int tax = salary*0.3;
        printf("Income tax(30%%):%d\n", tax); 
    }

    return 0;
}