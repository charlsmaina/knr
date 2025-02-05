#include<stdio.h>
//A PROGRAM TO COUNT THE NUMBER OF LINES A USER ENTERS
int main(void)

{
int lines,nc; 
lines = 0;

while((nc = getchar()) != EOF) 
/*getchar() reads input stream ,a single character at time,when you press enter ;
the last character stream read is \n when you have not entered the EOF
*/
                            
{if (nc == '\n')
++ lines;

}
printf("Total lines: %d\n",lines);


}