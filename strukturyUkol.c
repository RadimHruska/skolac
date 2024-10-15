#include <stdio.h>
#include <math.h>


typedef struct Bod{
double x;
double y;

} bod;

typedef struct Obdelnik{
bod a;
bod b;
bod c;
bod d;


} Obdelnik;

int main()
{
    kruh kruh;
    kruh.polomer = 10;
    kruh.x.x = 3;
    kruh.x.y = 3;

    kruh.y.x = 5;
    kruh.y.y = 5;

    

    int obvod = 2*3.15* kruh.polomer;
    int obsah = 3.15* kruh.polomer* kruh.polomer;
    int d = sqrt((pow((kruh.x.x - kruh.y.x),2) + pow((kruh.x.x - kruh.y.x),2)));
    printf("%i \n", obvod);
    printf("%i \n", obsah);
    printf("%i \n", d);

}