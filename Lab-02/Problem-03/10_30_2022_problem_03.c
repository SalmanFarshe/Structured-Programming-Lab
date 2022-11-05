#include<stdio.h>
int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is even", num);
    }
    else if(num == 0){
        printf("It is zero");
    }
    else{
        printf("%d is odd", num);
    }
    return 0;
}
