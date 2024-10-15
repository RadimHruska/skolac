#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];

    scanf("%100s", str1);
    scanf("%100s", str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Stejný\n");
    } 
    else
    {
        if(strcmp(str1, str2) < 0)
    {
        printf("Druhý\n");
    }
    else
    {
        printf("První\n");
    }
    }  
    
}