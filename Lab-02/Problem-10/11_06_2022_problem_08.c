// Write a C program to input any character and check whether it is
// alphabet, digit or special character.
#include<stdio.h>
int main(){
    char ch;
    while (1)
    {
        printf("Enter anything From Your keyboard : ");
        scanf(" %c", &ch);
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            printf("%c is a Alphabet\n", ch);
        }
        else if (ch <= 57 && ch >= 48)
        {
            printf("%c is a number\n", ch);
        }
        else 
        {
            printf("%c is a special character\n", ch);
        }   
    }
  return 0;
}