/*
 *  4.c
 *
 *  Created by BinaryBandit on 2025-06-27.
 *  Description:Write a program to accept an integer and check if it is prime or not.
 */

#include <stdio.h>

int main() {
    int num,count;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num<1)
    {
        printf("%d is not an prime number.", num);
    }
    for (int i = 2 ; i <= num/2 ; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }

    if(count>1)
    {
        printf("%d is an prime number.\n",num);
    }
    else 
    {
        printf("%d is not an prime number.\n",num);
    }
    return 0;
}
