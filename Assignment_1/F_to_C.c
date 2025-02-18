//
// Created by Ankit Talukder on 15/02/25.
//
#include <stdio.h>
#include <math.h>
int main(void) {
    float c, f;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f\n", c);
    return 0;
}
