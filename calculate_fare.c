/*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DESCRIPTION:calculate fare
*/
#include <stdio.h>

//prompting user to calculate total fare
int calculateFare(int distance) {
    int fare = distance * 50;
    return fare;
}
//prompt user to enter distance traveled in km
int main() {
    int distance;
    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);

    int totalFare = calculateFare(distance);
    printf("Total fare = KSh. %d\n", totalFare);

    return 0;
}