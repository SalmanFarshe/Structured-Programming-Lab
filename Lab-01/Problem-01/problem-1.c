// write a program to enter two nombers and find their sum
#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter first number: "); 
    scanf("%d", &num1); //get first number and stored into num1
    
    printf("Enter Second number: ");
    scanf("%d", &num2); //get second number and stored into num2

    sum = num1 + num2; //sumation

    printf("Sum of %d and %d is = %d", num1, num2, sum); //print result

    return 0;
}