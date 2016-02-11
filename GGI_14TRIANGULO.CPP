#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
clrscr();
int i,j,x;
printf("numero de filas\n");
scanf("%d",&x);
clrscr();
for(i=0;i<=x;i++)
   {
    for(j=0;j<=i;j++)
       {
       //	gotoxy(j,i);
	printf("*");
       }
       //gotoxy(i,j);
       printf("\n");
       }
getch();
return 0;
}