#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char string[21];
    char strR[] = "-";
    scanf("%20s", string);

    if(strcmp(argv[1], "count") == 0)
    {
        int count = 0;
        for (size_t i = 0; i < strlen(string); i++)
        {        
        if ((string[i] > 64 && string[i] < 91) || (string[i] > 96 && string[i] < 123))
        {
            
        }
        else
        {
            count ++;
        }
        }
        printf("počet je: %i \n", count);
        

        
    }
    if(strcmp(argv[1], "tolower") == 0)
    {
        for (size_t i = 0; i < strlen(string); i++)
        {        
            char tl = tolower(string[i]);
            printf("%c", tl);
        }
        printf("\n");

        
    }
    if(strcmp(argv[1], "find") == 0)
    {
       for (size_t i = 0; i < strlen(string); i++)
        {        
        if (string[i] ==  65 || string[i] == 97 )
        {
            string[i] = strR[0];
        }
        }
         printf("%s\n", string);
    }
    
    
}