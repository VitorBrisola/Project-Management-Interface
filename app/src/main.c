#include <stdlib.h>
#include <stdio.h>



int main(){

    // Interface initiation user mensages
    printf(">> Project-Manager Interface...\n");
    printf("...............................\n");

    // Interface runing
    char c = 's';
    while(c != 'q'){
        printf(">> ");
        scanf("%c%*c",&c); // [^/n] expressão regular
        // ERRO: apresenta erro ao clicar enter
    };
};