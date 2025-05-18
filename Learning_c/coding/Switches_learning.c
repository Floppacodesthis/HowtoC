#include <stdio.h>
#include <string.h>

int main(){

    char dayOfWeek = '\0';

    printf("Enter a day of the week(M, T, W, H, F, S, U): ");
    scanf("%c", &dayOfWeek);



    switch (dayOfWeek){
        case 'M':
            printf("It is Monday.");
            break;
        case 'T':
            printf("It is Tuesday.");
            break;
        case 'W':
            printf("It  is Wednesday.");
            break;
        case 'H':
            printf("It is Thursday.");
            break;
        case 'F':
            printf("It is Friday.");
            break;
        case 'S':
            printf("It is Saturday.");
            break;
        case 'U':
            printf("It is Sunday.");
    }

    return 0;
}