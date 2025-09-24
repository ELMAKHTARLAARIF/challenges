#include <stdio.h>
int	main()
{
	int	Heure;
	int	Minute;
	int	heure_depart1;
	int     heure_depart2;
	int     heure_depart3;
	int     heure_depart4;
	int     heure_depart5;
	int     heure_depart6;
	int     heure_depart7;
	int     heure_depart8;
	int	NewTime;
	
	heure_depart1 = 8 * 60;
	heure_depart2 = 9 * 60 + 43;
	heure_depart3 = 11 * 60 + 19;
	heure_depart4 = 24 * 60 + 47;
	heure_depart5 = 14 * 60;
	heure_depart6 = 15 * 60 + 45;
	heure_depart7 = 19 * 60;
	heure_depart8 = 13 * 60 + 45;
      
	printf("enter Time hour:");
	scanf("%d",&Heure);
	printf("enter Time Minute:");
        scanf("%d",&Minute);
	NewTime = Heure * 60 + Minute;
	if (NewTime <= heure_depart1)
	{
			printf("L'heure de depart la plus proche est 8h00 a.m, arrivant a 10h16 a.m.");
			return 0;
	}
	else if (NewTime <= heure_depart2)
	{
                        printf("L'heure de depart la plus proche est 9h43 a.m, arrivant a 11h52 a.m");
			return 0;
	}
        else if (NewTime <= heure_depart3)
	{
			printf("L'heure de depart la plus proche est 11h19 a.m, arrivant a 1h31 p.m");
                	return 0;
	}
        else if (NewTime <= heure_depart4)
	{
                        printf("L'heure de depart la plus proche est 12h47 p.m. arrivant a 3h00 a.p");
          		return 0;
	}
	else if (NewTime <= heure_depart5)
	{
         		printf("L'heure de depart la plus proche est 2h00 p.m, arrivant a 4h08 p.m");
        		return 0;
	}
	else if (NewTime <= heure_depart6)
	{
         		printf("L'heure de depart la plus proche est 3h45 p.m, arrivant a 5h55 p.m");
                	return 0;
	}
        else if (NewTime <= heure_depart7)
	{
                        printf("L'heure de depart la plus proche est 7h00 p.m, arrivant a 9h20 p.m");
                        return 0;
	}
	else if (NewTime <= heure_depart8)
	{
                        printf("L'heure de depart la plus proche est 9h45 p.m, arrivant a 11h58 p.m");
			return 0;
	}
	else
		printf("enter correct Time");
}
