// write a c program to convert days into years weeks and days
#include<stdio.h>
int main(){
    // decliaring variable
    int days, years, years_mod, weeks, months, months_mod;
    
    // getting input
    printf("Enter days  = ");
    scanf("%d", &days);

    // calculation
    years = days / 365;
    years_mod = days % 365;
    months = years_mod / 30;
    months_mod = years_mod % 30;
    weeks = months_mod / 7;
    days = months_mod % 7;

    // printing output
    printf("%d year, %d months, %d weeks, %d days", years, months, weeks, days);
    
    return 0;
}