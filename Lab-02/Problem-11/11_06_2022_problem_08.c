// Write a C program to check whether a character is uppercase or
// lowercase alphabet.
#include<stdio.h>
int main(){
    char ch;
    while (1)
    {
        printf("Enter an Alphabet : ");
        scanf(" %c", &ch);
        if ( ch >= 65 && ch <= 90 )
        {
            printf("%c is Upper Case\n", ch);
        }
        else if ( ch >= 97 && ch <= 122 )
        {
            printf("%c is Lower Case\n", ch);
        }
        else
        {
            printf("%c is not alphabet\n", ch);
        }
    }
    return 0;
}