/*
 *  2.c
 *
 *  Created by BinaryBandit on 2025-06-27.
 *  Description: Write a menu driven program to perform the following operations till the user selects Exit.
 *  Accept appropriate data for each option. Use standard library functions from math.h
 *  i. Sine
 *  ii. Cosine
 *  iii. log
 *  iv. e ^ x
 *  v. Square Root
 *  vi. Exit
 */

#include <stdio.h>
#include <math.h>

int main() {
    int exit=0;
    int ch ;
    do
    {
        printf("Select one the bellow:\n1. Sine\n2. Cosine\n3. log\n4. e ^ x\n5. Square Root\n6. Exit\n");
        printf("Enter the corresponding denotion:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            float angle_s;
            printf("Enter the angle(Radian):");
            scanf("%f", &angle_s);
            printf("sin(%f)=%f\n\n",angle_s,sin(angle_s));
            break;

            case 2:
            float angle_c;
            printf("Enter the angle(Radian):");
            scanf("%f", &angle_c);
            printf("cos(%f)=%f\n\n",angle_c,cos(angle_c));
            break;

            case 3:
            float Log_i;
            printf("Enter value:");
            scanf("%f", &Log_i);
            if (Log_i<0)
            {
                printf("Invalid input\nTry another value.\n\n");
            }
            else
            {
                printf("log(%f)=%f\n\n",Log_i,log(Log_i));
            }
            break;

            case 4:
            float expo;
            printf("Enter value:");
            scanf("%f", &expo);
            printf("e^%d=%f\n\n",(int)expo,exp(expo));
            break;

            case 5:
            float sqr;
            printf("Enter value:");
            scanf("%f", &sqr);
            printf("square of %f = %f\n\n",sqr,sqrt(sqr));
            break;

            case 6:
            break;

            default:
            printf("Invalid selection.\n\n");
            break;
        }
    }
    while(ch!=6);
    
    return 0;
}