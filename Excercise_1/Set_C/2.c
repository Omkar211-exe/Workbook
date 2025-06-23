/*The basic salary of an employee is decided at the time of employment, which may be
different for different employees. Apart from basic, employee gets 10% of basic as house rent,
30% of basic as dearness allowance. A professional tax of 5% of basic is deducted from salary.
Accept the employee id and basic salary for an employee and output the take home salary of the
employee.*/

#include <stdio.h>
int main ()
{
    int basic, emp_id;
    printf("Enter you employee id :");
    scanf("%d", &emp_id);
    printf("Enter your basic salary :");
    scanf("%d", &basic);

    int inhand = basic + 0.1*basic + 0.3*basic - 0.05*basic;
    printf("Since,\n10%% House rent \n30%% Dearness allowance\n5%% Professional tax (deduction)\n");
    printf("%d will get %d as the inhand salaray.\n",emp_id,inhand);

    return 0;
}