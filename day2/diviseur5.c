#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("entrez deux entiers : ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Veuillez entrer des entiers positifs.\n");
        return 1;
    }
    int commund;
    while (num2 != 0) {
        commund = num1 % num2;
        num1 = num2;
        num2 = commund;
    }
    printf("Le plus grand commun diviseur est : %d\n", num1);
    return 0;
}
