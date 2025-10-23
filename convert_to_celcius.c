/*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DESCRIPTION:convert to celsius
*/
#include <stdio.h>

// prompting user to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

//prompting user to enter temperature in Fahrenheit 
int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.1f°C\n", celsius);

    return 0;
}