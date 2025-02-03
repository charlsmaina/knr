/*This is a c program that converts degrees Fahrenheit to degrees celcius in range of 0-300*/

#include <stdio.h>
int main(void)
{
int fahr, celcius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;

while (fahr <= upper) 
{
    celcius = 5 * (fahr - 32) / 9;

    printf("%d\t%d\n",fahr,celcius);
    fahr += step;

}

}