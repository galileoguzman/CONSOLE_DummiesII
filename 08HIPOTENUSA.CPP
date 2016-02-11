#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
float cateto1, cateto2, cuad1, cuad2,sum;
double resultado;
clrscr();
printf(" Programa para calcular la hipotenusa de un triangulo\n oprima cualquier tecla para empezar");
getch();
clrscr();
printf ("\n\n introdusca el primer cateto\n\n");
scanf ("%f",&cateto1);
printf ("\n\n introdusca el segundo cateto\n\n");
scanf ("%f",&cateto2);
cuad1=cateto1*cateto1;
cuad2=cateto2*cateto2;
sum=cuad1+cuad2;
resultado=sqrt(sum);
printf("\n\n la hipotenusa es: %.3f",resultado);
getch();
}