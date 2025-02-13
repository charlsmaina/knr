#include <stdio.h>
# define MAXLINE 1000

int get_line(char arr[],int maxline);
void copy(char to[],char from[]);

int main(){
    int max,len;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line,MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len ;
            copy(longest,line);
        }
       
    }
    if (max > 0)
        {
            printf("%s",longest);
        }
    
return 0;
}

int get_line(char arr[],int maxline)
{
    int c,i;
   for(i = 0;i <= maxline - 1 && (c = getchar()) != EOF && c != '\n' ;i++)
        {
    arr[i] = c;
   
        }
        if (c == '\n')
        {
            arr[i] = '\n';
            i++;
        }
        arr[i] = '\0';
        return i;
    
   }
    
   void copy(char  to[MAXLINE],char  from[MAXLINE])
   {
  for(int i = 0; (to[i]=from[i]  ) != '\0'; i++);
   }