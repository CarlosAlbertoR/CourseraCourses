/*
    Love you how much
    Demostrate loop with while
    Carlos Alberto Rios
    April. 03, 2021.
*/

#include <stdio.h>

int main(void)
{
    int repeat = 0;
    printf("\nHow strong is your love 1-10? : ");
    scanf("%d", &repeat);

    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\nvery");
        repeat--;
    }
    printf(" much.\n\n");

    return 0;
}