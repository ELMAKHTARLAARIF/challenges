#include <stdio.h>

int main()
{
    int digit_seen[10] = {0};
    long n;
    int digit;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    if (n == 0) 
    {
        digit_seen[0] = 1;
    }
    else 
    {
        if (n < 0)
            n = -n;
        while (n > 0) 
	{
            digit = n % 10;
            digit_seen[digit]++;
            n /= 10;
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

