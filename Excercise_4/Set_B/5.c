/*
Name: Omkar Kulkarni
Date: 26/07/2025

Problem: Write a program, which accepts a number n and displays each digit in words. Example: 6702
Output: Six-Seven-Zero-Two. 
Hint: Reverse the number and use a switch statement
Improvements: Use stack to reverse
*/

// headers
#include <stdio.h>

// main
int main ()
{
    // variable declarations 
    int num , rev = 0 , temp = 0 , temp1;

    // code

    // input
    printf("Enter the number : ");
    scanf("%d", &num);

    temp1 = num;

    // reverse the number
    while(num != 0)
    {
        temp = num%10;
        rev = (rev * 10) + temp;
        num = (num - temp) / 10;
    }
    
    // print output
    printf("%d in numbers : ", temp1);

    while(rev != 0)
    {
        temp = rev % 10;
        rev = rev / 10;

        switch(temp)
        {
            case 0: 
                printf("Zero");
                break;
            case 1: 
                printf("One");
                break;
            case 2: 
                printf("Two");
                break;
            case 3: 
                printf("Three");
                break;
            case 4: 
                printf("Four");
                break;
            case 5: 
                printf("Five");
                break;
            case 6: 
                printf("Six");
                break;
            case 7: 
                printf("Seven");
                break;
            case 8: 
                printf("Eight");
                break;
            case 9: 
                printf("Nine");
                break;
        }

        if (rev != 0) 
        {
            printf("-");
        }
    }

    printf("\n");

    return(0);
}
