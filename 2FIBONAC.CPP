#include<conio.h>
#include<stdio.h>
int fibonacci (int n)
{
if(n<2) return n;
return fibonacci(n-2)+fibonacci(n-1);
}
void main()
{
int i,n;
printf("Cuantos numeros de la secuencia deseas");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i !=1) printf(", ");
printf("%d",fibonacci(i));
}
printf("\n");
}