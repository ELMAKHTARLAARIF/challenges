#include <stdio.h>
int	main()
{
	int	number;

	printf("enter a number :");
	scanf("%d",&number);
	int	i = 2;
	while (i * i <= number)
	{
		if(i * i % 2 == 0)
			printf("%d\n",i * i);
		i++;
	}

}
