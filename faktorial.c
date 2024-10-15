#include <stdio.h> 
#include <math.h>

int main(){
    int c = 2;
    int f = 1;
    scanf("%d", &c);
    if (c>0)
    {
    for (size_t i = 1; i <= c; i++)
    {
        f += f*i;
    } 
    }
    else
    {
        printf("nelze záporné");
    }
    printf(f);
    


}