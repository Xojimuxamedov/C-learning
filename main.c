#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0; 
    char currency[4] = "so'm";
    float total = 0.0f;

    printf("nima sotib olishni xohlaysiz: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) -1] = "_";

    printf("narxi qancha: ");
    scanf("%f", &price);

    printf("nechta: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("siz %s dan %d ta sotib oldingiz\n", item, quantity);
    printf("narxi %.2f\n", total);

    return 0; 
};