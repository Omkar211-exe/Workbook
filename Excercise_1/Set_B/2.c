/*Accept two integers from the user and interchange them. Display the interchanged numbers.*/
#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("So before swap,\nnumber_1:%d\nnumber_2:%d\n\n", num1,num2);

    int temp = num1;
    num1=num2;
    num2=temp;

    printf("So after swap,\nnumber_1:%d\nnumber_2:%d\n", num1,num2);
    return 0;
}