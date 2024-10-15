#include <stdio.h>
float sum(float a, float b)
{
    return a+b;
}

int my_crazy_min(int a, int b)
{
    if(a<b)
    {
        if (a<0)
        {
            return a*(-1);
        }
        else
        {
            return a;
        }
        
    }
    else
    {
        if (b<0)
        {
            return b*(-1);
        }
        else
        {
            return b;
        }
    }
}

int my_max(int a, int b)
{
    if (a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
    
}

int strlen_m(char* str) {
int delka_retezce_str = 0;
while(1)
{
    if (str[delka_retezce_str] != '\0')
    {
        delka_retezce_str ++;
    }
    else
    {
        break;
    }
    
}
}
int my_strchr(char* str, char ch) {
int index = 0;
while(1)
{
    if (str[index] != '\0' || str[index] != ch)
    {
        index ++;
    }
    else
    {
        if (str[index] == '\0')
        {
            index = -1;
        }
        
        break;
    }
    
}
return index;
}


int main()
{
    float suma = sum(3.0, 2.0);
    int mcm = my_crazy_min(1,3);
    int myMax = my_max(3,2);
    int strl = strlen_m("necoVice");
    int chc = my_strchr("adfch", 'f');

    printf("%f \n", suma);
    printf("%i\n", mcm);
    printf("%i\n", myMax);
    printf("%i\n", strl);
    
}