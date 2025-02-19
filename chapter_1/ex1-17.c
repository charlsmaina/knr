/*
<> Author Charles
<> Date 19/02/2024

Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/
#include <stdio.h>
# define MAXLINE 1000
int get_line(char[],int limit);
void copy(char from[],char to[]);
char line[MAXLINE];

int main()
{
    int len;
  
   
    
    while((len = get_line(line,MAXLINE)) > 0)
    {
        if (len > 10)
        printf("%s",line);
    }
    
    
    return 0;
}

int get_line(char arr[],int limit)
{
    int input;
    int i = 0;
    for(i = 0 ; i < limit- 1 && (input = getchar()) != EOF && input != '\n' ;i++)
    {
        
        line[i] = input;
    }
    if(input == '\n')
    {
        line[i] = input;
        i++;
    }
    line[i] = '\0';
    return i;

}

