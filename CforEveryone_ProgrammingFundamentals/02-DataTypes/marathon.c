/*
    The distance of a marathon in kilometers
    Carlos Alberto Rios
    Janu. 01, 2021.
*/

#include <stdio.h>
int main(void)
{
    double miles = 26, yards = 385;
    double kilometers;

    printf("Enter the value in miles: ");
    scanf("%lf", &miles);
    printf("Enter the value in yards: ");
    scanf("%lf", &yards);
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nThe marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}