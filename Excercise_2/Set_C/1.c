/*Write a program to accept marks for three subjects and find the total marks secured, average, and also display the class obtained.
(Class I – above 70%, Class II – 50% to 70%, Pass Class – 35% to 49%, and Fail – below 35%)*/
#include <stdio.h>
int main ()
{
    int sub1,sub2,sub3;
    float avg,tot;
    printf("Enter the marks out of 100,\nSubject_1:");
    scanf("%d", &sub1);
    printf("Subject_2:");
    scanf("%d", &sub2);
    printf("Subject_3:");
    scanf("%d", &sub3);

    tot = sub1 + sub2 + sub3;
    avg = tot/3.0f;

    if(tot/300 >= 70)
    {
        printf("Your average : %.2f", avg);
        printf("You are in Class I with %.2f%%", tot/300.0f);
    }
    else if(tot/300 >= 50 && tot/300 < 70)
    {
        printf("Your average : %.2f", avg);
        printf("You are in Class II with %.2f%%", tot/300.0f);
    }
    else if(tot/300 >= 35 && tot/300 < 50)
    {
        printf("Your average : %.2f", avg);
        printf("You are in Pass Class with %.2f%%", tot/300.0f);
    }
    else if(tot/300 < 35)
    {
        printf("Your average : %.2f\n", avg);
        printf("You have failed with %.2f%%\n", tot/300.0f);
    }

    return 0;
}