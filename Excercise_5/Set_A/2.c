/*
 *  2.c
 *
 *  Created by BinaryBandit on 2025-06-26.
 *  Description: Display n lines as follows (here n=4).
 *      A B C D
 *      E F G
 *      H I
 *      J
 */

#include <stdio.h>

int main() {

    char ch='A';
    int n;
    // input
    printf("Enter the no.of lines:");
    scanf("%d",&n);

    //output
    printf("Patter:\n");
    // for loop number 1
    for (int i=n;i>0;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}