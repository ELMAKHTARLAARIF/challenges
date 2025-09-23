#include <stdio.h>
int	main()
{
	float	x;
	float	result;

	printf("entrer nombre x :");
	scanf("%f",&x); 
	result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6; 
	printf("%.02f",result);
}
