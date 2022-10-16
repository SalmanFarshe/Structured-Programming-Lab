// write a c program to enter temperature in celsius and convert it into fahrenheit
#include<stdio.h>
int main(){
    // decliaring vatiables
    float celsius, fahrenheit;

    // getting input
    printf("Enter temperature in celsius = ");
    scanf("%f", &celsius);

    // calculation
    fahrenheit = celsius * (9 / 5) + 32;

    // print output
    printf("The fahrenheit value is %.2f", fahrenheit);

    return 0;
}