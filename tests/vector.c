#include <stdio.h>

int main(){

    char v[3];

    v[0] = 'a';
    v[1] = '3';
    v[2] = ' ';

    for(int i = 0; i < 3; i++){

        printf("%c\n", v[i]);
    }

    return 0;
}