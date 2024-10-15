#include <stdio.h> 

int main(){

    char a = getchar();

    if ((a > 64 && a < 91) || (a > 96 && a < 123))
        printf("je");
    else
        printf("neni");   
         
}