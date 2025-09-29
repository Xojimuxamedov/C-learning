#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// if else
// return 
//logikal 
// funcktion 
// variable scope 

int ageCheck(myAge){
    if (myAge > 18 && myAge < 30){
        return 1;
    }else if (myAge <= 18){
        return 2;
    }else{
        return 3;
    }
};
void printAge(checked){
    if (checked = 1){
        printf("siz o'qiydigan yoshdasiz");
    }else if(checked = 2){
        printf("siz o'qiydigan va ishlaydigan yoshdasiz");
    }else if(checked = 3){
        printf("siz ishlaydigan yoshdasiz");
    }
    
      
};

int main(){    
    bool checked = ageCheck(20);
    printAge(checked);
};