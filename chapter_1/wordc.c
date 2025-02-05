/*
A program to count characters,words and lines in a file
*/
#include <stdio.h>
#define IN  1 //inside a word
#define OUT 0 //outside a word

int main(void)
{
int c,nw,nl,nc,state;
nw=nl=nc = 0;
state=OUT;

while((c=getchar()) != EOF)
{
    nc++; //increaments be 1 each time a character is read
if (c == '\n')
nl++;     //increments once we encounter a new line
if (c == '\t' || c == ' ' || c == '\n') 
state = OUT;  //if one of these characters were encounterd ..it means we are outside of a word
else if (state == OUT)//..if the state was set to out..we encrement at start of new word
{
    state=IN;
    nw++;
}

}
printf("Characters: %d\nWords :%d\nLines: %d\n",nc,nw,nl);
}