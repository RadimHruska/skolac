#include <stdio.h> 
#include <math.h>

int main(){
    int c = 2000;
    int mal = 0;
    int brea = 0;
    while (c != 0)
    {
        scanf("%d", &c);
       if (c > 2005)
            mal++;    
    }
     printf("%i\n", mal); 
     
      
}