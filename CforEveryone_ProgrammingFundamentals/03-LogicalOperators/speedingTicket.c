/*
    Speeding Ticket
    Carlos Alberto Rios
    April. 02, 2021.
*/

#include <stdio.h>

int main(void)
{
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);

    if (speed < 65)
        printf("\nNo speeding ticket\n\n");
    else
        printf("\nSpeeding ticket\n\n");

    return 0;
}