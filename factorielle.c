#include <stdio.h>

int main(void){
    int number;
    int numberdec;
    int factor;
    factor = 1;
    printf("Entrer un nombre afin de calculer le factorielle: ");
    scanf("%d",&number);
    numberdec = number;
    if (number != 0 || number != 1){
        while(numberdec > 0){
            factor = factor * numberdec;
            numberdec = numberdec - 1;
        }
    }else{
        factor = 1;
    }
    printf("Le factorielle de %d est %d",number,factor);
    return 0;
}