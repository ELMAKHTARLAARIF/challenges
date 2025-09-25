#include <stdio.h>
int	main()
{
	char	str[20];

	printf("Entrez un numero de telephone :");
	scanf("%s",str);
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case 'A':
			case 'B':
			case 'C':
				printf("2");
				break;
                        case 'D':
			case 'E':
			case 'F':
                                printf("3");
                                break;
                        case 'G':
			case 'H':
			case 'I':
                                printf("4");
                                break;
                        case 'J':
                        case 'K':
                        case 'L':
                                printf("5");
                                break;
                        case 'M':
                        case 'N':
                        case 'O':
                                printf("6");
                                break;                            
			case 'P':
                        case 'R':
                        case 'S':
                                printf("7");
                                break;
                        case 'T':
			case 'U':
			case 'V':
                                printf("8");
                                break;
                        case 'W':
			case 'X':
			case 'Y':
                                printf("9");
                                break;
                        case '-':
                                printf("-");
                                break;
                        case '0':
                                printf("0");
                                break;
                        case '1':
                                printf("1");
                                break;
			default:
				printf("enter a correct Number phone");
		}
		i++;
	}
}
