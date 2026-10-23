/*
    como que gera um numero aleatório?

    executa até sortear o número 10
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
        n = rand() % 11;
        printf("Numero gerado: %d\n", n);
        //sleep(1);

        if(n == 10){
            break;
        }
    }
    
    return 0;
}