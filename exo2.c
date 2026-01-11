#include <stdio.h>


int main(void){
    int number1;
    int number2;
    int sum;
    printf("Entrer le 1er nombre : ");
    scanf("%d",&number1);
    printf("Entrer le 2eme nombre : ");
    scanf("%d",&number2);
    sum = number1 + number2;
    printf("La somme de %d et %d = %d \n", number1, number2, sum);
    return 0;
}