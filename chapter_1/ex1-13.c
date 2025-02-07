/*
*Author Charles Maina
*Date 07/02/2025

Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/
#include <stdio.h>
# define IN 1
# define OUT 0
int main(void)
{
int input,char_count,state;
state = IN;
char_count = 0;



while ((input = getchar()) != EOF)
{
 if(input == ' ' || input == '\t' || input == '\n') 
 {
  state = OUT;
  printf(" :Word length: %d\n",char_count);
  char_count = 0;
 }
 else
 state = IN ;

 if (state == IN)
 {
    putchar(input);
    char_count++;
 }
 
}
return 0;
}

    
