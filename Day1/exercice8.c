#include <stdio.h>
int	main()
{
	float	montantpret;
	float	tauxinteret;
	float	paimentmensuel;
	float	premierpaiement;
	float   deuxiemepaiement;
	float   troisiemepaiement;

	printf("Entrez le montant du pret :");
	scanf("%f",&montantpret);
	printf("Entrez le taux interet :");
	scanf("%f",&tauxinteret);
	printf("Entrez le paiement mensuel :");
	scanf("%f",&paimentmensuel);
	premierpaiement = montantpret * ((tauxinteret / 100) / 12) + montantpret - paimentmensuel;
	deuxiemepaiement =  premierpaiement * ((tauxinteret / 100) / 12) + premierpaiement - paimentmensuel;
	troisiemepaiement =  deuxiemepaiement * ((tauxinteret / 100) / 12) + deuxiemepaiement - paimentmensuel;
	printf("Solde restant apres le premier paiement est %.02f$\n",premierpaiement);
	printf("Solde restant apres le deuxieme paiement est %.02f$\n",deuxiemepaiement);
	printf("Solde restant apres le troisieme paiement est %.02f$\n",troisiemepaiement);
}
