#include <stdio.h>
int	main()
{
	int	num;
	int	first_digit;
	int	last_digit;
	printf("enter a Numer with Two digits :");
	scanf("%d",&num);
	first_digit = num % 10;
	last_digit = num / 10;
	printf("New First Digit is: %d\nNew Last Digit is: %d",first_digit,last_digit);

}
