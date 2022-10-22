// write a c program to enter radius of a circle and find its diameter, circumference and area
#include<stdio.h>
int main(){
    // decliring variable
    float pie = 3.1416, radius, diameter, area, circumference;
    
    // getting input
    printf("Enter the radius of the circle = ");
    scanf("%f", &radius);
    
    // calculation
    diameter = 2 * radius;
    circumference = 2 * pie * radius;
    area = radius * radius * pie;

    // print output
    printf("The diameter is %.2f and the circumference is %.2f and the area is %.2f", diameter, circumference, area);

    return 0;
    
}