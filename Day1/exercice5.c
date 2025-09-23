#include <stdio.h>
#include <math.h>
int	main()
{
	float	x;
	float	result;
	
	printf("entrer nombre x :");
	scanf("%f",&x);
	result = 3*(pow(x,5)) + 2 * (pow(x,4)) - 5*(pow(x,3)) - (pow(x,2)) + (7 * x) -6;
	printf("la valeur du polynome est %.2f",result);
}

