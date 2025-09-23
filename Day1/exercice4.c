#include <stdio.h>
int	main()
{
	float	montant;
	float	taxmontant;

	printf("entrer le montant en dollar $:");
	scanf("%f",&montant);
	taxmontant = montant + montant * 0.05;
	printf("%.02f$",taxmontant);
}
