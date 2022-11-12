// Write a C program to input week number and print week day.
#include<stdio.h>
int main(){
    char weeks;
    while (1)
    {
        printf("Enter Week Number = ");
        scanf(" %c", &weeks);
        if (weeks <= 55 && weeks >= 49)
        {
            switch (weeks)
            {
                case 49:
                    printf("It's Monday\n");
                    break;
                case 50:
                    printf("It's Tuesday\n");
                    break;
                case 51:
                    printf("It's Wednesday\n");
                    break;
                case 52:
                    printf("It's Thursday\n");
                    break;
                case 53:
                    printf("It's Friday\n");
                    break;
                case 54:
                    printf("It's Saterday\n");
                    break;
                case 55:
                    printf("It's Sunday\n");
                    break;
                default:
                    printf("Not a valid input!! Week number must be 1 - 7\n");
                    break;
            }            
        }
        else
        {
            printf("Not a valid input!! Week number must be 1 - 7\n");
        }
    }
    return 0;
}