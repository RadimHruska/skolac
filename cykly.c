#include <stdio.h>

int getLenght(char a [])
{
    int index = 0;
while(1)
{
    if (a[index] != '\0')
    {
        index ++;
    }
    else
    {
        break;
    }
    
}

return index;
}

char mnozina [] = "123456";

int isInSet (char mnozina [], char prvek)
{
    for (size_t i = 0; i < getLenght(mnozina); i++)
    {
       if (mnozina[i] == prvek)
       {
            return 1;
       }
       
    }
    return 0;
    
}

int isSet (char mnozina [])
{
for (size_t i = 0; i < getLenght(mnozina); i++)
    {
        for (size_t j = 0; j < getLenght(mnozina); j++)
        {
            if (mnozina[i] == mnozina[j])
            {
                return 0;
            }
        }  
    }
    return 1;
}

void printUnion (char mnozina1 [], char mnozina2 [])
{
    for (size_t i = 0; i < getLenght(mnozina1); i++)
    {
        printf("%c", mnozina1 [i]);
    }
    for (size_t i = 0; i < getLenght(mnozina2); i++)
    {
       if (!isInSet(mnozina1 ,mnozina2 [i]))
       {
         printf("%c", mnozina2 [i]);
       }
       
    }
    
    

}

void printIntersection ()
{

}

void printProduct ()
{

}


int main()
{
    int isInsetInt = isInSet(mnozina, '2');
    printf("%i\n", isInsetInt);

}