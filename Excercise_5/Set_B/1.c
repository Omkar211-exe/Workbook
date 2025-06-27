/*
 *  1.c
 *
 *  Created by BinaryBandit on 2025-06-26.
 *  Description: Write a program to display all Armstrong numbers between 1 and 500. (An Armstrong
 *  number is a number such that the sum of cube of digits = number itself Ex. 153 = 1*1*1 + 5*5*5 + 3*3*3
 */

#include <stdio.h>
#include <math.h>
int main() {
    
    int num,sum,digit;

    printf("Armastrong numbers :");
    for (int i=1;i<501;i++)
    {
        num = i;
        sum=0;
        while (num!=0)
        {
            digit=num%10;
            sum+=pow(digit,3);
            num=num/10;
        }
        if(i==sum)
        {
            printf("%d " ,i);
        }
    }
    
    return 0;
}