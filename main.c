#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){    
    int res = 0;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            res = j * i;
            printf("%d\t", res);
            // continue;
            // break;
        }
        printf(" \n" );
    }
    
};
