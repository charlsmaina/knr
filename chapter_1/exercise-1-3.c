/*This is a c program that converts degrees Fahrenheit to degrees celcius in range of 0-300*/

#include <stdio.h>
int main(void)
{
float fahr, celcius;
float lower, upper, step;

lower = 0.0;
upper = 300.0;
step = 20.0;

fahr = lower;

printf("Fahrenheit\tCelcius\n");

while (fahr <= upper) 
{
    celcius = (5.0/9) * (fahr - 32.0);

    printf("%3.0f\t\t%3.1f\n",fahr,celcius);
    fahr = fahr + step;

}

}