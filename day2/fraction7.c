#include <stdio.h>

int main()
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	printf("entrez premier nombre : ");
	scanf("%d", &num1);
        printf("entrez deuxieme nombre : ");
        scanf("%d",&num2);

	num3 = num1;
	num4 = num2;
	if (num1 <= 0 || num2 <= 0) 
	{
        	printf("Veuillez entrer des entiers positifs.\n");
        	return 1;
	}
	int commund;
	while (num2 != 0) 
	{
        	commund = num1 % num2;
        	num1 = num2;
        	num2 = commund;
    	}
	num3 = num3 / num1;
	num4 = num4 / num1;
	printf("Sous sa forme la plus simple %d/%d :",num3,num4);
	return 0;
}

