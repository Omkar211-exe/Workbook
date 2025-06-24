/*Write a program, which accepts two integers and an operator as a character (+ - * /),
performs the corresponding operation and displays the result.*/
#include <stdio.h>
int main ()
{
    int num1,num2;
    char op;
    printf("Enter the expression (Ex,12 + 34):");
    scanf("%d %c %d", &num1 , &op , &num2);

    switch(op)
    {
        case '+':
        printf("%d %c %d = %d\n", num1 , op , num2 , num1+num2);
        break;
        case '-':
        printf("%d %c %d = %d\n", num1 , op , num2 , num1-num2);
        break;
        case '*':
        printf("%d %c %d = %d\n", num1 , op , num2 , num1*num2);
        break;
        case '/':
        printf("%d %c %d = %.2f\n", num1 , op , num2 , (float)num1/num2);
        break;
        case '%':
        printf("%d %c %d = %d\n", num1 , op , num2 , num1%num2);
        break;
    }

    return 0;
}