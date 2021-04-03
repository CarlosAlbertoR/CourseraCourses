/*
    Area of a Circle
    Carlos Alberto Rios
    Janu. 01, 2021.
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    double area = 0.0, radius = 0.0;
    //printf("AREA OF A CIRCLE");
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The circle with radius %lf meters have an area of %lf square meters.\n", radius, area);
    return 0;
}
