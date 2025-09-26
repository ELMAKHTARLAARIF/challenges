#include <stdio.h>
#include <stdbool.h>

int main()
{
    	bool	digit_seen[10] = {false};
        bool    digit_repeat[10] = {false};
    	long	n;
    	int	digit;

    	printf("Entrez un nombre : ");
    	scanf("%ld", &n);
    	while (n > 0)
    	{
		digit = n % 10;
		if(digit_seen[digit])
		{	
                	digit_repeat[digit] = true;
		}
		digit_seen[digit] = true;
		n/= 10;
    	}
	int	i,repeated;
	i = 0;
	repeated = 0;
	printf("Des Chiffres sont repetes :");
	while (i <10)
	{
		if (digit_repeat[i])
		{
			repeated = 1;
			printf("%d ",i);
		}
		i++;
	}
	if (!repeated)
		printf("Aucun Chiffre repete");
	else
		printf("\n");
	return 0;
}
