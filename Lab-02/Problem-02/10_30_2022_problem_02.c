#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three number = ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("%d is lergest", num1);
    }
    else if(num2 > num3){
        printf("%d is lergest", num2);
    }
    else if(num1 == num2 && num2 == num3){
        printf("They are same");
    }
    else{
        printf("%d is lergest", num3);
    }
    return 0;
}
