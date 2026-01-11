#include <stdio.h>

int main(void){
    int number1;
    int number2;
    printf("Entrer N1: ");
    scanf("%d",&number1);
    printf("Entrer N2: ");
    scanf("%d",&number2);
    printf("---- Permutation ----\n");
    number2 = number1 + number2 ;
    number1 = number2 - number1 ;
    number2 = number2 - number1 ;
    printf("N1 = %d \t", number1);
    printf("N2 = %d", number2);
}