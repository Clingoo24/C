//scriveremo un programma che simula il lancio di un dado a 6 facce (da 1 a 6) un tot di volte

#include <stdio.h>
#include <stdlib.h>

int textScan(void);
void lancioDadi(int y);
void output(int x);

int main(){
    
    lancioDadi(textScan());

    return 0;
}

int textScan(void){

    int numero;

    printf("Inserisci il numero di volte cui lanciare i dadi: ");
    scanf("%d",&numero);

    while (numero <= 0){
        printf("Inserisci un numero corretto! (da 1 a quel che vuoi): ");
        scanf("%d",&numero);

        if (numero > 0){
            return numero;
        }
    }
}

void lancioDadi(int y){

    int faccia;

    for (unsigned int i = 1; i <= y; ++i){

        faccia = 1 + (rand() % 6);

        printf("%5d",faccia);

        if (i % 5 == 0)
            puts("");
    }
}
