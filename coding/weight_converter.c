#include <stdio.h>
#include <math.h>

int main()
{
    double answer = 0.0;
    double kilos = 0.0;
    double grams = 0.0;
    double pounds = 0.0;
    double tonnes = 0.0;
    double tons = 0.0;
    
    
    printf("Enter amount of kilograms: ");
    scanf("%lf", &kilos);

    grams = kilos * 1000;
    pounds = kilos * 2.20462;
    tonnes = kilos * 0.001; 
    tons = kilos * 0.00110231;

    printf("\n= %.1lf gram(s)\n", grams);
    printf("= %.2lf lb(s)\n", pounds);
    printf("= %.3lf tonne(s)(metric tonne)\n", tonnes);
    printf("= %.2lf ton(s)(US ton)\n", tons);

    return 0;
}