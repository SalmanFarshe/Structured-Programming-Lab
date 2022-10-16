// write a program to enter the height and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main(){
    float height, breadth, perimeter, area;
    printf("Enter height = ");
    scanf("%f", &height);
    
    printf("Enter breadth = ");
    scanf("%f", &breadth);

    perimeter = 2 * (height + breadth);

    printf("The perimeter is %.2f", perimeter);

    return 0;
}