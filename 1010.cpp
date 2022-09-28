#include <cstdio>

int main()
{
 int a,a1;
 int b,b1;
 double c,c1;

 scanf("%d", &a);
 scanf("%d", &a1);

 scanf("%lf", &c);
 scanf("%d", &b);
 scanf("%d", &b1);
 scanf("%lf", &c1);

 printf("VALOR A PAGAR: R$ %.2lf\n", (a1*c)+(b1*c1));

 return 0;
}

