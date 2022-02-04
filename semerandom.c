//lancio di dadi un tot di volte con funzione rand e libreria time (non srand con seme)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int input(void);
int lancioDadi(int lanci);
void output(int faccia, int i);

int main(){

    int lanci=input();
    srand(time(NULL));  //prende un tempo che cambia ogni avvio del programma
    lancioDadi(lanci);

    return 0;
}

void output(int faccia, int i){

    printf("%5d",faccia);

    if (i % 5 == 0)
        puts("");
}

int lancioDadi(int x){

    int faccia;

    for(unsigned int i = 1; i <= x; ++i){

        faccia = 1 + rand() % 6;
        output(faccia, i);
    }
}

int input(void){

    int lanci;

    printf("N. LANCI --> ");
    scanf("%d",&lanci);

    while (lanci <= 0){

        printf("Non corretto!\nN. LANCI --> ");
        scanf("%d",&lanci);

        if (lanci > 0)
            return lanci;
    }
}