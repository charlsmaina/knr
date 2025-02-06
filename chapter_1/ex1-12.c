/*
*Author Charles
*Date 06/02/2025
*Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>
int main(void)
{
int prev = 0; //To track previous character if it was a newline ,a tab or a space
 int input_char;
 while((input_char = getchar()) != EOF) //reads input up to when Ctrl D is pressed to signal EOF
 {
   if (input_char == ' ' || input_char == '\t' || input_char == '\n' )//unique conditions to consider
   {
    if(prev != ' ' && prev != '\t' && prev!= '\n' )//eliminates double spaces, double tabs and empty newlines
   {
    putchar('\n');
    prev = input_char;
   }
   else
   prev = input_char;
   }
   

else
{
putchar(input_char);
prev=input_char;
}
   
 }
}