#include<stdio.h>

int power(int base,int power);

int main(void)
{
    for(int i = 1;i < 10;i++)
        printf("%2d %d    %d \n",i,power(2,i),power(8,i)) ;}

   int power(int base,int power)
    {
    int p = 1;
    
    for(int i =1; i <= power ;i++)
    {
        p = p * base;
    }
    return p;
   }
