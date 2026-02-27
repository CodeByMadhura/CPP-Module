#include<stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main(){

    float temp, result;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    result = (choice == 1) ? celsiusToFahrenheit(temp)
                           : fahrenheitToCelsius(temp);

    if(choice == 1)
        printf("Temperature in Fahrenheit = %.2f\n", result);
    else
        printf("Temperature in Celsius = %.2f\n", result);

    return 0;
}

float celsiusToFahrenheit(float C){
    float F;
    F = (C * (9.0/5)) + 32;
    return F;
}

float fahrenheitToCelsius(float F){
    float C;
    C = (F - 32) * (5.0/9);
    return C;
}