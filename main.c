#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){     

    srand(time(NULL));

    int min = 1;    
    int max = 100;    

    for (int i = 1; i < 100; i++)
    {
        int randomNum = (rand() % max) + min;
        printf("%d\n", randomNum);
    }
    
};
