// write a program to enter the height and breadth of a rectangle and find its area.
#include<stdio.h>
int main(){
    float height, breadth, perimeter, area;
    printf("Enter height = ");
    scanf("%f", &height);
    
    printf("Enter breadth = ");
    scanf("%f", &breadth);

    area = height * breadth;

    printf("The Area is %.2f", area);

    return 0;
}