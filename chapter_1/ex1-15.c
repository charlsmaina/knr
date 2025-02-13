/*
DATE:13/02/2025
AUTHOR: Charles

Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/
#include<stdio.h>
int degree_converter(int range);
int main(void)
{
    degree_converter(300);
}
int degree_converter(int range)
{
    printf("Farenheit  :  Degree  :\n");
    for(int i = 0;i <= range; i=i + 20)
    {
        printf("%d            %4f\n",i, 5.0/9 * (i-32));
    }
}