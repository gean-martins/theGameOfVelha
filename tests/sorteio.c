/*
    como que gera um numero aleatório?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//#include <unistd.h>

int main(){

    srand(time(NULL));

    int n;
    
    while (true){
        n = (rand() % 10) + 1;
        printf("Numero gerado: %d\n", n);
        //sleep(1);
    }
    
    return 0;
}