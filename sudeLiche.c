#include <stdio.h> 
#include <math.h>

int main(){
    int c = 2;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &c);

        if (c%2==0)
        printf("je \n");
    else
        printf("neni \n"); 
        
    } 

}