/*
*Author Charles
*Date 06/02/2025
*Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>
int main(void)
{
 int input_char;
 while((input_char = getchar()) != EOF) 
 {
   if (input_char == ' ' || input_char == '\t' )
   putchar('\n');
   else
   putchar(input_char);
 }
}