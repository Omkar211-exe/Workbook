/*
 *  2.c
 *
 *  Created by BinaryBandit on 2025-06-26.
 *  Description: Accept characters till the user enters EOF and count the number of lines entered. Also
 *  display the length of the longest line. (Hint: A line ends when the character is \n)
 */

#include <stdio.h>

int main() {
    
    int count = 0 ,length1=0 ,longest=0;
    printf("Enter the string(Enter EOF to exit):");
    char ch;
    while((ch=getchar())!=EOF)
    {
        //longest = length1;
        length1 = 0;
        while(ch!='\n'&& ch!=EOF)
        {
            length1++;
            ch=getchar();
        }
        if (length1>longest)
        {
            longest=length1;
        }

        count++;
    }
    printf("\nNo.of lines entered :%d\nLongest line has %d character.\n",count,longest);
    return 0;
}