// write a c program to enter temperature in fahrenheit and convert it into celsius
#include<stdio.h>
int main(){
    // decliaring vatiables
    float celsius, fahrenheit;

    // getting input
    printf("Enter temperature in fahrenheit = ");
    scanf("%f", &fahrenheit);

    // calculation
    celsius = ((fahrenheit - 32) * 5) / 9;

    // print output
    printf("The celsius value is %.2f", celsius);

    return 0;
}