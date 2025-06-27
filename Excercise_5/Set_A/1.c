/*
 *  1.c
 *
 *  Created by BinaryBandit on 2025-06-26.
 *  Description: Write a program to display multiplication tables from ___ to ___ having n multiples each. The output should be displayed in a tabular format
 */

#include <stdio.h>
int main ()
{
    int lower,upper,multi;
    // input
    printf("Lets set the range :\nEnter the lower limit:");
    scanf("%d", &lower);
    printf("Enter the upper limit:");
    scanf("%d", &upper);
    printf("Set the no.of multiplers :");
    scanf("%d", &multi);
    printf("\n");
    
    //code 

    //for loop number 1
    for (int i=0;i<=multi;i++)
    {
        // for loop number 2
        for (int j=lower;j<=upper;j++)
        {
            printf("%d x %d = %d\t",j,i,j*i);
        }
        printf("\n");
    }
}
