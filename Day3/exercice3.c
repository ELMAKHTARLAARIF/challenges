#include <stdio.h>
#include <string.h>

int main()
{
	int digit_seen[10] = {0};
	char n[1000];
	int digit;

	printf("Entrez un nombre : ");
	scanf("%s", n);
	        if (n[0] == '-')
                	return 0;
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] >= 48 && n[i] <= 57)
        	{
            		digit = n[i] - 48;
            		digit_seen[digit]++;
        	}
	}
	printf("Chiffre : ");
	for (int i = 0; i < 10; i++)
	{
        	printf("%d ", i);
	}
	printf("\n");
	printf("Occurrences : ");
	for (int i = 0; i < 10; i++)
	{
        	printf("%d ", digit_seen[i]);
	}
	printf("\n");
    	return 0;
}
