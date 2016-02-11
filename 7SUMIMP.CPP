#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float salir;
int saliryesno;
salir=0;
while(salir==0){
int numero,suma,x,cimp;
cimp=0;
suma=0;
printf("\n.............Leer 30 numeros y saber cuantos son impares............\n");
for(x=1;x<=30;x++)
{{
printf("Numero:");
scanf("%d",&numero);
suma=suma+numero;}
if(numero%2 !=0)
{cimp=cimp+1;}
}
printf("\n 	La suma total es de:%d",suma);
printf("\n 	El total de numeros impares es: %d",cimp);
printf("\nPara salir presione 1 o de lo contrario otro numero");
scanf("%d",&saliryesno);
if(saliryesno==1){
printf("\n\a");
salir=1;
}
}
}


