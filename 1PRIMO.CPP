#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float salir;
int saliryesno;
salir=0;
while(salir==0){
int numero,contador,ciclo,residuo;
printf("\n............numero primo.............\n");
printf("\nNumero:");
scanf("%d",&numero);
contador=0;
for(ciclo=1;ciclo<=numero;ciclo++){
residuo=numero%ciclo;
if(residuo==0){
contador=contador+1;
}
}
if(contador<=2){
printf("\n%d Es primo\n\n",numero);
}
else{
printf("\n%d No es primo\n\n",numero);
}
printf("Para salir presione 1 o de lo contrario otro numero");
scanf("%d",&saliryesno);
if(saliryesno==1){
printf("\n\a");
salir=1;
}
}
}


