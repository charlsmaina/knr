#include <stdio.h>
//A PROGRAM TO COUNT THE NUMBER OF CHARACTERS ENTERED BY A USER
int main() {
    int c_count;
   for (c_count = 0 ;getchar() != EOF ;(++ c_count));
   printf("Total: %d\n",c_count); //each line is added an extra \n character

}
