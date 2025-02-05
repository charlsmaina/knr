
/*
*Author Charles 
*Date 05/02/2025

Write a program to copy its input to its output, replacing each string of one 
more blanks by a single blank.*/

#include <stdio.h>
int main(){
    int tabs;
    int input;
    int previous = EOF;

    while((input = getchar()) != EOF )
    {
        if (previous != input )
        {
       putchar(input);
       previous = input;
        }
        else
        {
            if (previous != ' ')
            {
               putchar(input);
       previous = input;
            }
            
        }
    

        
       
    }
    
      
}