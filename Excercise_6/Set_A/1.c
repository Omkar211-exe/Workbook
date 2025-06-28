/*
 *  1.c
 *
 *  Created by BinaryBandit on 2025-06-27.
 *  Description: Write a program, which accepts a character from the user and checks if it is an alphabet, digit
 *  or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change
 *  the case.
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Eneter a charecter:");
    ch = getchar();

    if (isalpha(ch))
    {
        if(isupper(ch))
        {
            printf("%c is in upper case.\n",ch);
            printf("%c--->%c\n",ch,tolower(ch));
        }
        else 
        {
            printf("%c is in lower case.\n",ch);
            printf("%c--->%c\n",ch,toupper(ch));
        }
    }
    else if (isdigit(ch))
    {
        printf("%c is an digit.\n",ch);
    }
    else if (ispunct(ch))
    {
        printf("%c is an punctuation symbol.\n",ch);
    }
    
    return 0;
}