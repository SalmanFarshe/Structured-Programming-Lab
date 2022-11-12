// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main(){
  char ch;
  while (1!=0)
  {
  printf("Enter a Alphabet = ");
  scanf(" %c", &ch);
  if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
  {
    printf("%c is a Alphabet\n", ch);
  }
  else
  {
    printf("%c is not a Alphabet\n", ch);
  }
}
  return 0;
}
  // int condition_small_char = (ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||
  //                  ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z');
  // int condition_capital_char = (ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='N'||ch=='O'||
  //                  ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z');