#include <stdio.h>
#include <conio.h>
main()
{
int precio;
precio=0;
int op;
float descuento;
float preciof;
preciof=0;
clrscr();
printf("Entrada al espectaculo:\n ");
printf("1.En la compra de 1 boleto no hay descuento\n");
printf("2.En la compra de 2 boletos el descuento es del 10%\n");
printf("3.En la compra de 3 boletos el descuento es del 15%\n");
printf("4.En la compra de 4 boletos el descuento es del 20%\n");
printf("Precio de cada boleto\n");
scanf("%d",&precio);
printf("\nPresione la opcion a descontar");
scanf("%d", &op);
clrscr();
switch (op)
{
case 2:
descuento=precio*0.10;
preciof=precio-descuento;
printf("\nCantidad de boletos comprados son: 2");
printf("\nPrecio del producto:%d",precio);
printf("\nDescuento del producto 10%");
printf("\nPrecio final:%f",preciof);
break;
case 3:
descuento=precio*0.15;
preciof=precio-descuento;
printf("\nCantidad de boletos comprados son: 3");
printf("\nPrecio del producto:%d",precio);
printf("\nDescuento del producto 15%");
printf("\nPrecio final:%f",preciof);
break;
case 4:
descuento=precio*0.20;
preciof=precio-descuento;
printf("\nCantidad de boletos comprados son:4");
printf("\nPrecio del producto:%d",precio);
printf("\nDescuento del producto 20%");
printf("\nPrecio final:%f",preciof);
break;
case 1:
printf("En la compra de 1 boleto no hay descuento\n");
printf("\nPrecio del producto:%d",precio);
break;
default:
printf("Maximo se pueden comprar cuatro boletos por persona\n");
break;
}
getche();
}
