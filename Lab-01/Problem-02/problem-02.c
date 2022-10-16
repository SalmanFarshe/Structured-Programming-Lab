// Write a c program to enter two numbers and perform all arithmetic operators 
#include<stdio.h>
int main(){
    int num1, num2, result;
    printf("Enter first number: "); 
    scanf("%d", &num1); //get first number and stored into num1
    
    printf("Enter Second number: ");
    scanf("%d", &num2); //get second number and stored into num2

    result = num1 + num2; //sumation
    printf("Sum of %d and %d is = %d\n\n", num1, num2, result); //print result
    
    result = num1 - num2;
    printf("Minus of %d and %d is = %d\n\n", num1, num2, result); //print result
    
    result = num1 * num2;
    printf("Multiply of %d and %d is = %d\n\n", num1, num2, result); //print result
    
    result = num1 / num2;
    printf("%d Devided by %d and the answer is = %d\n\n", num1, num2, result); //print result
    
    result = num1 % num2;
    printf("Modulus of %d and %d is = %d\n\n", num1, num2, result); //print result

    return 0;
}