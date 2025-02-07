/*
*Author Charles Maina
*Date 07/02/2025

Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/
#include <stdio.h>
# define IN 1 //Tracks when we are inside a word
# define OUT 0 //tracks when we get outide a word
# define MAX_LENGTH 10 //defines the maximum size of the array .ie size 10
int main(void)
{
int input,char_count,state;
int wordsize[MAX_LENGTH] = {0}; //initializes an array of 10 elements with 0's
state = IN; //set us to begin counting
char_count = 0;


while ((input = getchar()) != EOF) //reads characters until Ctrl Z
{
 if(input == ' ' || input == '\t' || input == '\n') //conditions to determine end of word
 state = OUT;
  
 
 if (state == IN) //counting continues whenever we are inside a word
  char_count++;
 else if(state == OUT)
  {
    //ensures also we dont count spaces tabs and newlines
    /*
    How it works
    {*char_count is set to 0 immidiately we finish reading a word
     *So the next time we come across \n or " " ,char_count is already zero and char_count is not inc
     *the condition char_count > 0 eliminates spaces,tabs and newlines
      
    }
    
    */
    if((char_count > 0 ) && (char_count <= MAX_LENGTH)) //ensures we dont count words that are beyond 10 characters
    {
    wordsize[char_count]++;   //increments the value of a given index in the array each time same length word is added
    char_count = 0;
    state = IN;
    }
}
}
printf("\nWords histogram\n");
for (int i = 0;i < 10;i++)
{
    if (wordsize[i] < 10 && wordsize[i] >0)
    {
        printf("%2d letters ",i);
        for(int j = 1;j <= wordsize[i];j++)
             printf("*");
        printf("\n");
    }
    
}
}

    
