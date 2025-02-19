# include <stdio.h>
#define MAXLINE 1000 //A constant defining the maximum size of the allowable line length

int getLine(char line_Len[], int limit);//A function declaration -fetch a line and return its length and
                                        //store it in a buffer i.e an array
void copy(char arr_f[],char arr_t[]);//a function to copy contents from one array to another


int main(void)
{

char line_Len[MAXLINE] ; //an arry to store current line contents
char maxLine_len[MAXLINE];//an array to store max line contents
int line_count; 
int maxLine_count = 0;
while((line_count = getLine(line_Len,MAXLINE)) > 0)
    {
        if(line_count > maxLine_count)
        {
        maxLine_count = line_count;
        copy(line_Len,maxLine_len);

        }
        
    }
    printf("\nLine with many characters:\n");
    if (maxLine_count > 0)
            printf("%s\n",maxLine_len);
    return 0;

}

int getLine(char line_len[], int lim)
{
    int input;
    int i;

    for( i = 0; i < lim - 1 && (input = getchar()) != EOF && input  != '\n' ;i++)
    {
        line_len[i] = input;
     }
        
    if(input == '\n')
        {
           line_len[i] = input;
           i++;
        }
        line_len[i] = '\0';
        return i;
     
 }

 void copy(char arr_f[],char arr_t[]) 
{
    int i;
    for( i = 0 ; arr_f[i] != '\0';i++)
    arr_t[i] = arr_f[i];
    arr_t[i] = '\0';
   
}

     