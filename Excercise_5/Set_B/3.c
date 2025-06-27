/*
 *  3.c
 *
 *  Created by BinaryBandit on 2025-06-27.
 *  Description: Display all perfect numbers below 500. [A perfect number is a number, such that the sum of
 *  its factors is equal to the number itself]. Example: 6 (1 + 2 + 3), 28 (1+2+4+7+14)
 */

#include <stdio.h>

int main() {

    printf("All the perfect numbers between 1 to 500:");
    for (int i=1;i<=500;i++)
    {
        int sum = 0;
        for (int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
                continue;
                //printf("%d ",j);
            }
        }
        //printf("%d ",sum);
        if(sum==i)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}