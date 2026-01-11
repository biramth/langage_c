#include <stdio.h>

int main(void){
    int number;
    int vas;
    vas = 0;
    printf("Entrer un nombre : ");
    scanf("%d",&number);
    if(number < 0){
        while( vas + number != 0){
                vas = vas + 1;
        }
        printf("La valeur absolue de %d est %d",number,vas);
    }else{
        vas = number;
        printf("La valeur absolue de %d est %d",number,vas);
    }
    return 0;
}