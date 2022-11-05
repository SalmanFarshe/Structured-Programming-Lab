#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two number = ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is large", num1);
    }
    else if(num1 < num2){
        printf("%d is is lerge", num2);
    }
    else
    {
        printf("They are same");
    }
    return 0;
}
