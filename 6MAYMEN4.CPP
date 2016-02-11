 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
  int main()  {
  clrscr();
	const int n = 4;
	int a[n],c,mayor,menor;
	for (c = 0; c < n; c++)	{
		printf("Dime un valor : ");
		scanf("%i",&a[c]);
	}
	for (c = 0; c < n; c++)	{
		if ((a[c] > mayor) || (c == 0))
			mayor = a[c];
		if ((a[c] < menor) || (c == 0))
			menor = a[c];
	}
	printf("El mayor es : %i \n\n", mayor);
	printf("El menor es : %i \n\n", menor);
	getch();
	return (0);
 }

