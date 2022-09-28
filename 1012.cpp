#include <cstdio>
#include <cmath>

int main()
{
 double a;
 double b;
 double c;


 scanf("%lf", &a);
 scanf("%lf", &b);
 scanf("%lf", &c);
 printf("TRIANGULO: %.3lf\n", .5*a*c);
 printf("CIRCULO: %.3lf\n", 3.14159*pow(c, 2));
 printf("TRAPEZIO: %.3lf\n", ((a+b)/2)*c);

 printf("QUADRADO: %.3lf\n", pow(b,2));
 printf("RETANGULO: %.3lf\n", a*b);

 return 0;
}

