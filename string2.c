#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];
    int palindrom = 1;

    scanf("%100s", str1);
    int i = strlen(str1);

    for (size_t j = 0; j < i; j++)
    {
        str2[j] = str1[i-j-1];
    }

    printf("%s\n", str2);

    for (size_t j = 0; j < i; j++)
    {
        if (str2[j] != str1[j])
        {
            palindrom = 0;
            printf("není\n");
            break;
        }
      
    }
            if (palindrom == 1)
        {
            printf("je\n");
        }
    
    
}