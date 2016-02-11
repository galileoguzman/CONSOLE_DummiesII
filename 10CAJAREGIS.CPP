#include <conio.h>
#include <stdio.h>
main()
{
clrscr();
int puni,tpag,cant;
float iva,iva2,iva3;
printf("Cantidad de productos a comprar:\n");
scanf("%d",&cant);
printf("Cual es el precio unitario?\n");
scanf("%d",&puni);
iva=puni*cant;
iva2=iva*.15;
iva3=iva-iva2;
printf("Cantidad a pagar de %d productos sin iva es de:%f\n",cant,iva);
printf("El iva de todos los productos es de:%f\n",iva2);
printf("total a pagar es del %f",iva3);
getch();
return(0);
}