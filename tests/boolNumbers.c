/*
    eu posso atribuir um número a uma variável booleana?
*/

#include <stdio.h>
#include <stdbool.h>

void checkTrue(bool outroTest){

    if(outroTest){
        printf("test eh TRUE\n");
    } else{
        printf("Test eh FALSE\n");
    }
}

int main(){

    bool test;

    test = 1;
    checkTrue(test);
    test = 0;
    checkTrue(test);

    printf("---------------------\n");

    test = true;
    checkTrue(test);
    test = false;
    checkTrue(test);

    printf("---------------------\n");

    //isso devia dar erro, o resultado é TRUE
    test = 2;
    checkTrue(test);
    //isso também devia dar erro, o resultado é TRUE
    test = -3;
    checkTrue(test);

    return 0;
}
