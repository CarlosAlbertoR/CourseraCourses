/*
    Love you how much
    Demostrate function
    Carlos Alberto Rios
    April. 03, 2021.
*/

#include <stdio.h>

void wrt_very(int count){
    while (count > 0)
    {
        printf("\nvery");
        count--;
    }
    printf(" much.\n\n");
}

int main(void){
    int repeat = 0;
    printf("\nHow strong is your love 1-10? : ");
    scanf("%d", &repeat);

    printf("\nI love you very");
    wrt_very(repeat);

    return 0;
}