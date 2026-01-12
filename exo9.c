#include <stdio.h>

int main(void){
    int number;
    int sum = 0;
    float mean;
    for(int i = 0 ; i < 3; i++){
        printf("Entrer un nombre :\t");
        scanf("%d",&number);
        sum = sum + number;
    }
    mean = sum / 3;
    printf("La moyenne est : %.2f",mean);
    return 0;
}