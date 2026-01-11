#include <stdio.h>

int main(void){
    int number;
    printf("Entrer un nombre: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("Le nombre est pair");
    }else{
        printf("Le nombre est impaire");
    }
    return 0;
}