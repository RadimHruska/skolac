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
int vzdalenost (bod x, bod y)
{
    int d = sqrt((pow((x.x - y.b.x),2) + pow((kruh.x.x - kruh.y.x),2)));
    return d;
}

int main()
{
    
}