#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int prvni = atoi(argv[1]);
    int druhy = atoi(argv[2]);
    int soucet = prvni + druhy;

    printf("Součet je: %i \n", soucet);

    if (prvni > druhy)
    {
        printf("první je větší");
    }
    else
    {
        printf("Druhé je větší");
    }
    
    
    
}