/*
    Logical operator IF and integers evaluation
    Carlos Alberto Rios
    April. 02, 2021.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, b = 1, c = 2;
    if (a < b)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    if (a < b - c)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    if (b < c - 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    if (!c)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    return 0;
}