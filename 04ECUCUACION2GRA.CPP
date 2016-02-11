#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
float A, B, C, r, R, discr;

clrscr();

printf("Coeficiente A=");
scanf("%f",&A);
printf("Coeficiente B=");
scanf("%f",&B);
printf("Coeficiente C=");
scanf("%f",&C);

if(A==0 && B!=0){
printf("nLa ecuacion no es de 2o grado,ntr=%f",(-C/B));}
if(A==0 && B==0){
printf("nERROR!");}
if(A!=0){

discr=(B*B)-(4*A*C);

r=(-B/(2*A));
R=sqrt(abs(discr))/(2*A);

if(discr==0)
printf("nLa raiz es doble,ntr1=r2=%f",r);
else if(discr<0)
printf("nLas raices son imaginarias,ntr1=%f+%f itr2=%f%fi",r,R,r,(-R));
else if(discr>0)
printf("nLas raices son reales,ntr1=%f ntr2=%f",(r+R),(r-R));
}
getch();
return(0);

} 