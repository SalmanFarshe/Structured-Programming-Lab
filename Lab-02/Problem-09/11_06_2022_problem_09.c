// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main(){
    char ch;
    int capital_condition, small_condition;
    while (1)
    {
        printf("Enter a Alphabet = ");
        scanf(" %c", &ch);
        
        capital_condition = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
        small_condition =(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        
        if(capital_condition || small_condition)
        {
            printf("%c is vowel\n", ch);
        }
        else
        {
            printf("%c is Consonant\n", ch);
        }
    }
    return 0;
}
