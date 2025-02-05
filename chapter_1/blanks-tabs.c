#include <stdio.h>
int main()
{
    int blank = 0,tabs = 0,newlines = 0;
    int input ;
   
    while ((input = getchar()) != EOF )
    {
        if (input == ' ')
            blank++;
        else if ((input == '\t'))
            tabs++;
        else if (input == '\n')
            newlines++;
              
       }
   printf("Blanks: %d\n", blank);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

}