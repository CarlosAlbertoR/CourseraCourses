/*
    Convertion of Farenheit to Celsius

    C = (F - 32)/1.8
    Carlos Alberto Rios
    Janu. 01, 2021.
*/

#include <stdio.h>

int main(void)
{
    int farenheit, celsius;
    printf("Enter an Integer value by farenheit: ");
    scanf("%d", &farenheit);
    celsius = (farenheit - 32) / 1.8;
    printf("\n %d Farenheit degress equals to %d Celsius degress.\n", farenheit, celsius);
    return 0;
}