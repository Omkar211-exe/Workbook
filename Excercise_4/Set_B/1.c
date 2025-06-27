/*Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……)*/

#include <stdio.h>
int main ()
{
    int num, first=0, second=1, next;
    printf("Enter the no. of units you want to print (i.e of Fibonacci series):");
    scanf("%d", &num);
    //printf("%d", febo);
    printf("Febonacci series :");
    for (int i = 0 ; i < num + 1 ; i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next = first+second;
            first=second;
            second=next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}