// write a c program to find power of any number x ^ y
#include<stdio.h>
#include<math.h>
int main(){
    // decliaring variable
    int x, y, p;

    // getting input
    printf("Enter the base nomber = ");
    scanf("%d", &x);
    printf("Enter the power nomber = ");
    scanf("%d", &y);

    // calculation
    p = pow(x, y);

    // print output
    printf("%d", p);
    
    return 0;
}