#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double a,b,c;
double x1=0;
double x2=0;
double r=0;
printf("Ingrese el valor de a:");
scanf("%lf",&a);
printf("Ingrese el valor de b:");
scanf("%lf",&b);
printf("Ingrese el valor de c:");
scanf("%lf",&c);
double m=b*b-4*a*c;
if(m<0)
{
x1=(-b+sqrt(m))/(2*a);
x2=(-b-sqrt(m))/(2*a);
printf("Si tiene solucion\n");
printf("solucionRC1\n",x1);
printf("solucionRC2\n",x2);
printf("existeSolucionRC - 1\n");
}
else
{
printf("No tiene solucion\n");
r=m*-1;
x1=(-b+sqrt(r))/(2*a);
x2=(-b-sqrt(r))/(2*a);
printf("x1:%lf\n",x1);
printf("x2:%lf\n",x2);
printf("existeSolucionRC - 0\n");
}

getch();
return(0);
}
