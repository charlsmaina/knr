/*
*Author Charles 
*Date 05/02/2025


*Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.

*/

#include <stdio.h>
#define BACKSPACE '\b'

int main(void)
{
   int c;
  
   while((c= getchar()) != EOF )
   {
  
   if(c == '\t' || c == '\b' || c == '\\')
   {
    if(c == '\t')
    {
        putchar('\\');
        putchar('t');
        
    }
    if(c == 'BACKSPACE')
    {
        putchar('\\');
        putchar('b');

    }
    if(c == '\\')
    {
        putchar('\\');
        putchar('\\');  
    }
   }
   else
   putchar(c);
    
   }
}