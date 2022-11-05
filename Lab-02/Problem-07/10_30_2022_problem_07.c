// Write a C program to count total number of notes in given amount
#include<stdio.h>
int main(){
    int note, one, two, ten, five, twenty, fifty, hundread, two_hundread, five_hundread, one_thousend;
    
    // getting input
    printf("Enter a amount = ");
    scanf("%d", &note);

    // condition
    one_thousend = note / 1000;
    five_hundread = (note % 1000) / 500;
    two_hundread = ((note % 1000) % 500) / 200;
    hundread = (((note % 1000) % 500) % 200) / 100;
    fifty = ((((note % 1000) % 500) % 200) % 100) / 50;
    twenty = (((((note % 1000) % 500) % 200) % 100) % 50) / 20;
    ten = ((((((note % 1000) % 500) % 200) % 100) % 50) % 20) / 10;
    five = (((((((note % 1000) % 500) % 200) % 100) % 50) % 20) % 10) / 5;
    two = ((((((((note % 1000) % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2;
    one = (((((((((note % 1000) % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("You need %d note of 1000 Tk\n", one_thousend);
    printf("You need %d note of 500 Tk\n", five_hundread);
    printf("You need %d note of 200 Tk\n", two_hundread);
    printf("You need %d note of 100 Tk\n", hundread);
    printf("You need %d note of 50 Tk\n", fifty);
    printf("You need %d note of 20 Tk\n", twenty);
    printf("You need %d note of 10 Tk\n", ten);
    printf("You need %d note of 5 Tk\n", five);
    printf("You need %d note of 2 Tk\n", two);
    printf("You need %d note of 1 Tk\n", one);

    return 0;
}