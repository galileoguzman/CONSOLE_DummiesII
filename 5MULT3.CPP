#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,s;
s=0;
printf("Suma de los multiplos de 3: \n");
for(i=9;i<=45;i+=3)  {
    if(i<21 || i>27)
	s = s + i;
    }
printf("la suma es %d \n",s);
getch();
return 0;
}