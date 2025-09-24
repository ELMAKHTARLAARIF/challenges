#include <stdio.h>

int main()
{
    char isbn[17] = "";
    char GS1[10] = "";
    char Identifiantdegroupe[10] = "";
    char Codedeediteur[10] = "";
    char Numeroarticle[10] = "";
    char Chiffredecontrole[10] = "";
    int i;
    int j;

    printf("Enter ISBN BOOK : ");
    scanf("%19s", isbn);
    if (isbn[0] == '\0')
    {
        printf("enter correct ISBN");
        return 0;
    }

    i = 0;
    j = 0;
    while (isbn[i] != '\0' && isbn[i] != '-')
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
            GS1[j++] = isbn[i];
        i++;
    }
    GS1[j] = '\0';
    i++;
    j = 0;
    while (isbn[i] != '\0' && isbn[i] != '-')
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
            Identifiantdegroupe[j++] = isbn[i];
        i++;
    }
    Identifiantdegroupe[j] = '\0';
    i++;
    j = 0;
    while (isbn[i] != '\0' && isbn[i] != '-')
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
            Codedeediteur[j++] = isbn[i];
        i++;
    }
    Codedeediteur[j] = '\0';
    i++; 
    j = 0;
    while (isbn[i] != '\0' && isbn[i] != '-')
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
            Numeroarticle[j++] = isbn[i];
        i++;
    }
    Numeroarticle[j] = '\0';
    i++; 
    j = 0;
    while (isbn[i] != '\0')
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
            Chiffredecontrole[j++] = isbn[i];
        i++;
   }
   Chiffredecontrole[j] = '\0';
    printf("Prefixe GS1 est : %s\n", GS1);
    printf("Identifiant de groupe est : %s\n", Identifiantdegroupe);
    printf("Code de l'editeur : %s\n", Codedeediteur);
    printf("Numero d'article : %s\n", Numeroarticle);
    printf("Chiffre de controle : %s\n", Chiffredecontrole);
    return 0;
}

