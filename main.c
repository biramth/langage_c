#include <stdio.h>

int main()
{
    int year ;
    printf("Entrer l'annee = ");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d est bissextile",year);
    }
    else
    {
        printf("%d n'est pas bissextile",year);
    }
}