#include<stdio.h>
int main()
{

   double x,y,z,t,c,q,r,T,pi=3.14159;

   scanf("%lf %lf %lf",&x,&y,&z);

    t=x*z/2;
    c=pi*z*z;
    T=.5*(x+y)*z;
    q=(y*y);
    r=x*y;

     printf("TRIANGULO: %.3lf\n",t);
     printf("CIRCULO: %.3lf\n",c);
     printf("TRAPEZIO: %.3lf\n",T);
     printf("QUADRADO: %.3lf\n",q);
     printf("RETANGULO: %.3lf\n",r);

   return 0;
}