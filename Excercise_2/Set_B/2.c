/*Accept the time as hour, minute and seconds and check whether the time is valid. (Hint:
0<=hour<24, 0<=minute <60, 0<=second <60)*/

#include <stdio.h>
int main ()
{
    int hour,min,sec;
    printf("Now enter the time in the following format:\nHour:");
    scanf("%d", &hour);
    printf("Minute:");
    scanf("%d", &min);
    printf("Seconds:");
    scanf("%d", &sec);

    if ((0<=hour && hour<24) && (0<=min && min<60) && (0<=sec && sec<60))
    {
        printf("%d:%d:%d is an valid time.\n", hour ,min ,sec);
    }
    else 
    {
        printf("Invalid input.\nTry again.\n");
    }
    return 0;
}