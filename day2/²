#include <stdio.h>
int	main()
{
	int     Heure;
        int     Minute;
	int	NewTime;
        printf("enter Time hour:");
        scanf("%d",&Heure);
        printf("enter Time Minute:");
        scanf("%d",&Minute);
        NewTime = Heure * 60 + Minute;

	int	arr[] = {8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+47,19*60,21*60+45};
	int	arr2[] = {10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58};
	int	i;
	i = 0;
	int	Min;
	int	Hour;
	int	Min2;
	int	Hour2;
	while (arr[i] && arr2[i])
	{
		if (NewTime < arr[i])
		{
			Min = arr[i] % 60;
			Hour = arr[i] / 60;
			Min2 = arr2[i] % 60;
                        Hour2 = arr2[i] / 60;
			printf("L'heure de depart la plus proche est %dh%.2d , arrivant a %dh%.2d",Hour,Min,Hour2,Min2);
			break;
		}
		i++;
	}
}
