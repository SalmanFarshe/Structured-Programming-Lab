//5 AND 11
#include<stdio.h>
int main(){
    int num, a = 5, b = 11;
    printf("Enter a numer : ");
    scanf("%d", &num);
    if( num % 5 == 0 && num % 11 == 0){
        printf("%d is divisible by %d and %d", num, a, b);
    }
    else{
        printf("%d is not divisible by %d and %d", num, a, b);
    }
    return 0;
}
