/*  Un giocatore lancia due dadi. Ogni dado ha sei facce. Queste facce contengono 1, 2,
    3, 4, 5 e 6 pallini. Quando i dadi si fermano, si calcola la somma dei pallini sulle due
    facce superiori. Se al primo lancio la somma è 7 o 11, il giocatore vince. Se al primo
    lancio la somma è 2, 3 o 12 (chiamata “craps”), il giocatore perde (cioè vince il
    banco). Se al primo lancio la somma è 4, 5, 6, 8, 9 o 10, quella somma diventa il “pun-
    teggio” del giocatore. Per vincere si devono continuare a lanciare i dadi finché si “fa
    il proprio punteggio”. Il giocatore perde se ottiene come somma 7 prima di fare il
    proprio punteggio.                                                                          */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Stato {VINTO, PERSO, CONTINUA};

void continuazione(int punteggio);
int controllo(int somma, int stato);
void verificaoutStato(int stato, int somma);
int lancioDadi(void);

int main(){

    srand(time(NULL));
    enum Stato status = CONTINUA;
    int somma = lancioDadi(), punteggio=controllo(somma, status);

    continuazione(punteggio);

    return 0;
}

void continuazione(int punteggio){

    int var = lancioDadi();

    while (var != punteggio){

        if(var == 7){
            printf("SCONFITTA\n");
            exit(-1);
        }

        printf("Non hai ancora perso\n");

        var = lancioDadi();

        if (var == punteggio)
            printf("HAI VINTO\n");

    }
}

int controllo(int somma, int stato){

    switch (somma){

        case 7:
        case 11:
            stato=VINTO;
            verificaoutStato(stato, somma);
            exit(-1);
        
        case 2:
        case 3:
        case 12:
            stato=PERSO;
            verificaoutStato(stato, somma);
            exit(-1);

        case 4: 
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            stato=CONTINUA;
            verificaoutStato(stato, somma);
            return somma;
    }
}

void verificaoutStato(int stato, int somma){

    switch(stato){

        case VINTO:
            printf("VITTORIA\n");
            break;

        case PERSO:
            printf("SCONFITTA\n");
            break;
        
        case CONTINUA:
            printf("SI CONTINUA\n");
            printf("POINT: %d\n",somma);
            break;
    }
}

int lancioDadi(void){

    int dado1, dado2, somma;

    dado1 = 1 + rand() % 6;
    dado2 = 1 + rand() % 6;
    somma = dado1 + dado2;
    
    printf("\ndado1 --> %d\ndado2 --> %d\nsomma --> %d\n",dado1,dado2,somma);

    return somma;
}