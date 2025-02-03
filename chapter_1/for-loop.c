#include <stdio.h>
int main(void)
{
    int fahr;
    printf("Fahrenheit\tCelcius\n");
    for(fahr = 0; fahr <= 300 ; fahr = fahr + 20 )
    printf("%3d\t\t%6.1f\n",fahr,(5.0/9.0) * (fahr - 32));
    
}