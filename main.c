#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 0;
    printf("yoshingizni kiriting: ");
    scanf("%d", &age);

    if (age > 50){
        printf("Pensyaner\n");
        bool tirik = false;
        if (tirik)
        {
            printf("u hali ko'p yashaydi\n");
        }else{
            printf("afsus\n");
        }
        
    }else if (age > 18){
        printf("o'smir\n");
    }else if (age > 1){
        printf("chaqaloq\n");
    }else {
        printf("tug'ilmagan\n");
    }
    
    

    return 0;
};      