/*
 *  3.c
 *
 *  Created by BinaryBandit on 2025-06-28.
 *  Description: Accept two complex numbers from the user (real part, imaginary part). Write a menu driven
 *  program to perform the following operations till the user selects Exit.
 *  i. ADD
 *  ii. SUBTRACT
 *  iii. MULTIPLY
 *  iv. EXIT
 */

#include <stdio.h>

int main() {
    int a1,a2,b1,b2,ch;
    printf("Now enter the Complex numbers int the format:\n1. (a1+b1*i):\na1:");
    scanf("%d",&a1);
    printf("b1:");
    scanf("%d", &b1);
    printf("2. (a2+b2*i):\na2:");
    scanf("%d",&a2);
    printf("b2:");
    scanf("%d", &b2);

    if(b1<0&&b2<0)
    {
        printf("No.1:%d-%di\nNo.2:%d-%di\n\n",a1,-b1,a2,-b2);
    }
    else if(b1>0&&b2<0)
    {
        printf("No.1:%d+%di\nNo.2:%d-%di\n\n",a1,b1,a2,-b2);
    }
    else if(b1<0&&b2>0)
    {
        printf("No.1:%d-%di\nNo.2:%d+%di\n\n",a1,-b1,a2,b2);
    }
    else 
    {
        printf("No.1:%d+%di\nNo.2:%d+%di\n\n",a1,b1,a2,b2);   
    }

    do 
    {
        printf("Select one the bellow:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. EXIT\n");
        printf("Enter the corresponding denotion:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            int add_r=a1+a2,add_i=b1+b2;
            if (add_i>0)
            {
                printf("Addition:%d+%di\n\n",add_r,add_i);
            }
            if (add_i<0)
            {
                printf("Addition:%d-%di\n\n",add_r,-add_i);
            }
            break;

            case 2:
            int sub_r=a1-a2,sub_i=b1-b2;
            if (sub_i>0)
            {
                printf("Subtraction:%d+%di\n\n",sub_r,sub_i);
            }
            if (sub_i<0)
            {
                printf("Subtraction:%d-%di\n\n",sub_r,-sub_i);
            }
            break;

            case 3:
            int mult_r=(a1*a2-b1*b2),mult_i=(a1*b2+a2*b1);
            if (mult_i>0)
            {
                printf("Multiplication:%d+%di\n\n",mult_r,mult_i);
            }
            if (mult_i<0)
            {
                printf("Multiplication:%d-%di\n\n",mult_r,-mult_i);
            }
            break;

            case 4:
            break;

            default:
            printf("Invalid input!!!");
            break;
        }
    }
    while(ch!=4);
    return 0;
}