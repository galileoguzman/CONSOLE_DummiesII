#include <stdio.h>
#include <conio.h>
int main()
{
clrscr();
int num,contador,sum,min=num;
float media;
media=0;
sum=0;
for(contador=1;contador<=10;contador++)
{
printf("Dame un numero para la posicion  %d\n",contador);
scanf("%d",&num);
sum=sum+num;
media=sum/10;
if(min<num)
{min=num;}
}
printf("La suma total es de:%d\n",sum);
printf("La media es de:%f\n",media);

getch();
return (0);
}
