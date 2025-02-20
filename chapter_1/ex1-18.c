/*
*Author Charles
*Date 20/02/2025

Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/
#include <stdio.h>
#define MAXSIZE 1000

void rm_white(char[],int);
int read(char[],int limit);


int main(void)

{
    char line[MAXSIZE];
    int len = read(line,MAXSIZE);
   

    rm_white(line,len);
    printf("%s\n",line);
   
}


int read(char arr[],int limit)
{
int input,i;

 for( i = 0; i < limit - 1  ;i++)
 {  
    input = getchar();
    arr[i] = input;
    
    if(input == '\n')
       {
        arr[i] = '\0';
        break;
    }
   
 }
    
return i;
}


void rm_white(char arr[],int len)
{
    int whitespace = 0;
    int i,j = 0 ;
    for(i = 0;i < len ;i++)
    {
        if(arr[i] == ' ' || arr[i] == '\t')
        {
            if(!whitespace)
            {
                arr[j++] = ' ';
                whitespace = 1;
            }
        }
        else
        {
            arr[j++] = arr[i];
            whitespace = 0;
        }

    }
    arr[j] = '\0';
    
}