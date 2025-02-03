/*This is a c program that converts degrees celcius to degrees Fahrenheit  in range of 0-300*/

#include <stdio.h>
int main(void)
{
float fahr, celcius;
float lower, upper, step;

lower = 0.0;
upper = 300.0;
step = 20.0;

celcius = lower;
printf("Celcius\tFahrenheit\n");

while (celcius <= upper) 
{
    fahr = (celcius * (5.0/9.0)) + 32; 
 
    printf("%3.0f\t%8.1f\n",celcius,fahr);
    celcius = celcius + step;

}

}