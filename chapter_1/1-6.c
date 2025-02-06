/*
This is a program to count the numbers of words and othere special characters 
It is based on section 1.6 of the K n R 2nd edition  book on C programming
*/
#include <stdio.h>
int main(void)
{
    int others,newls,tabs,spaces,input,i;
    others=newls=tabs=spaces=0;
    int ndigits[10];

    for( i = 0;i < 10 ;i++)
    ndigits[i] = 0;

    while((input = getchar()) !=EOF )
    if(input == ' ' || input == '\n' || input == '\t')
    {
        if(input == ' ' )
        spaces++;
        if(input == '\n' )
        newls++;
        if(input == '\t')
        tabs++;
    }
    else if(input >= '0' && input <= '9')
    {
        ndigits[input - '0']++;
    }
    else
    others++;

    printf("Newlines: %d\nTabs: %d\nSpaces: %d\nOthers: %d\n",newls,tabs,spaces,others);
    for(i = 0;i < 10;i++)
    {
        printf("DIGIT %d OCCURENCES: %d\n",i,ndigits[i]);
    }


}