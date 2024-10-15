#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
FILE *fileIn = fopen("soubor.txt", "r");
FILE *fileOut = fopen("output.txt", "w");

 char string[100];
char buffer[100];
int index = 0;
if (fileOut != NULL) {
while (fgets(buffer, sizeof(buffer), fileOut) != NULL) {

}   
}

for (size_t i = 0; i < strlen(string); i++)
        {        
            char tl = tolower(string[i]);
            
        }
if (fileIn != NULL) {
 fprintf(fileIn, "%s", string);
}

fclose(fileOut);
fclose(fileIn);
}