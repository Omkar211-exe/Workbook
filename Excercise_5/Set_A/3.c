/*
 *  3.c
 *
 *  Created by BinaryBandit on 2025-06-27.
 *  Description: Write a program to display all prime numbers between ____ and ____.
 */

#include <stdio.h>

int main() {
    int lower,upper;
    printf("Let's set the limits:\nLower limit:");
    scanf("%d", &lower);
    printf("Upper:");
    scanf("%d",&upper);
    
    printf("All the prime numbers between %d and %d :",lower,upper);
    for(int i=lower;i<=upper;i++)
    {
        if(i==1 || i==0)
        {
            continue;
        }
        int count = 0;
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        if (count==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}