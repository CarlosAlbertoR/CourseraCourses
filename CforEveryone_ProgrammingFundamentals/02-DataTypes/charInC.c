/*
    Char in C
    A Fundamental Type
    Carlos Alberto Rios
    April. 02, 2021.
*/

#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("There consecutive chars are: %c%c%c \n", c, c + 1, c + 2);
    printf("There bell rings chars are: %c%c%c \n", '\a', '\a', '\a');
    return 0;
}