#include <stdio.h> 
#include <math.h>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    float D = 0;
    float x1 = 0;
    float x2 = 0;

    scanf("(%f", a);
    scanf("%f", b);
    scanf("%f", c);

    D=(float)pow(b,2)-4*a*c;

    x1=(b+sqrt(D))/(2*a);
    x2=(b-sqrt(D))/(2*a);
    printf("%.2f\n",x1);
    printf("%.2f\n",x2);



}