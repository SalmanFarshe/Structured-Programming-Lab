// write a c program to enter length in centimeter and convert it into meter and kilometer
#include<stdio.h>
int main(){
    // decliaring variables
    float length, meter, kilometer;

    // getting input
    printf("Enter length in (cm) = ");
    scanf("%f", &length);

    // calculation
    meter = length / 100;
    kilometer = length / 100000;

    // print output
    printf("Meter = %f and Kilometer = %f", meter, kilometer);

    return 0;
}