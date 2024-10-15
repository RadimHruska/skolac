#include <stdio.h>

int main()
{
    int soucet = 0;
    int y;
    while (scanf("%i\n", &y) != EOF)
{
    
    soucet += y;
    }
printf("%i\n", soucet);
}