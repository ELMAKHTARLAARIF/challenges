#include <stdio.h>
int	main()
{
	int	montant;
	int	billets1;
	int	billets2;
	int	billets3;
	int	billets4;	

	printf("entrer le montant :");
	scanf("%d",&montant);
	if (montant > 0)
	{
		billets1 = montant / 20;
		billets2 = (montant % 20)/ 10;
		billets3 = (montant % 10) / 5;
		billets4 = (montant % 5);
		printf("Billets de 20$ est %d\n",billets1);
		printf("Billets de 10$ est %d\n",billets2);
		printf("Billets de 5$ est %d\n",billets3);
		printf("Billets de 1$ est  %d\n",billets4);
	}
	else 
		printf("le montant doit etre plus que 0");
}
