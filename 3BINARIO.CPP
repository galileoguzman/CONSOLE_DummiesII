#include <stdio.h>
#include <string.h>
#include <conio.h>

char menu(void);
void binario_decimal();
void decimal_binario();

void main(void)
{
   char op;

   clrscr();
   for(;;)
   {
     fflush(stdin);
     switch(op=menu())
     {
        case '1':
                 binario_decimal();
                 getch();
                 break;
        case '2':
                 decimal_binario();
                 getch();
                 break;
        case '3':
                 break;
        default :
                 printf("Opcion no valida");
                 getch();
                 break;
     }

     if(op=='3') break;
     clrscr();
   }
}


char menu(void)
{
   char c;
   printf("(1)Binario a decimal, (2)Decimal a binario, (3)Salir\n");

   printf("Seleccion: ");
   c=getche();
   printf("\n");
   return(c);
}


void binario_decimal()
{
   char *binario;
   int resultado=0;
   int aux;
   int tabla[15];
   int x;    //contador
   int longitud;
   int numero;

   printf("Numero en binario: ");
   gets(binario);

   /*potencias de 2 correspondientes a las posiciones de los digitos*/
   tabla[0]=1;     tabla[1]=2;     tabla[2]=4;
   tabla[3]=8;     tabla[4]=16;    tabla[5]=32;
   tabla[6]=64;    tabla[7]=128;   tabla[8]=256;
   tabla[9]=512;   tabla[10]=1024; tabla[11]=2048;
   tabla[12]=4096; tabla[13]=8192; tabla[14]=16384;
   tabla[15]=32768;

   longitud=strlen(binario);
   for(x=longitud-1;x>=0;x--)
   {
      if(binario[x]==49) //49 en codigo Ascii corresponde a 1
         numero=1;
      else
         numero=0;

      aux=(longitud-x)-1;
      resultado=resultado+(numero*tabla[aux]);
   }
   printf("El resultado es: %d", resultado);
}


void decimal_binario()
{
   int a,j,i,x[15];

   printf("Numero decimal: ");
   scanf("%d",&a);

   for(i=0;i<=14;i++)
   {
      x[i]=a%2;
      a=a/2;
   }

   printf("El resultado es: ");
   for(j=14;j>=0;j--)
   {
       printf("%d",x[j]);
   }
}