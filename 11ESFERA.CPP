#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
main()
{
clrscr();
int radio,diametro,volumen,PI;
PI=3.1415926;
printf("Dame el diametro de la esfera\n");
scanf("%d",&diametro);
radio=diametro/2;
volumen=(4*PI)/3*pow(radio,3.0);
printf("\n");
printf("\nEl  volumen de la esfera es:%d",volumen);
getch();
return(0);
}