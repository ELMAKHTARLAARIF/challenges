#include <stdio.h>
int	main()
{
	int	note;
	int	result;
	printf("enter a note :");
	scanf("%d",&note);
	result = note / 10;
	switch (result)
	{
		case 10:
		case 9:
			printf("Note litterale : A");
				break;
                case 8:
                        printf("Note litterale : B");
                                break;
                case 7:
                        printf("Note litterale : C");
                                break;
                case 6:
                        printf("Note litterale : D");
                        break;
                default:
                        printf("Note litterale : F");
                                break;
	}
}
