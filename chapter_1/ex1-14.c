# include <stdio.h>

int main(void)
{
  int input;
  char charac[100] = {' '};
  while((input = getchar()) != EOF)
  {
    for(int i = 0;i < 100;i++)
    {
        if(charac[i] != input )
        charac[i] = input;
        else
        ;
        
    }
  }


}