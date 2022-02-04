//contare le frequenze di uscita delle singole facce di un dado

#include <stdio.h>
#include <stdlib.h>
#define LANCI 60000000

int lancioDadi(void);
void conto_frequenze(int facce);

int main(){

    conto_frequenze(lancioDadi());

    return 0;
}

int lancioDadi(void){

    int facce;

    for (unsigned int i = 0; i < LANCI; ++i){

        facce = 1 + (rand() % 6);
        conto_frequenze(facce);
    }
}

void conto_frequenze(int facce){

    register int fr1,fr2,fr3,fr4,fr5,fr6;

    fr1=fr2=fr3=fr4=fr5=fr6=0;

    switch (facce){
        case 1: ++fr1;
            break;

        case 2: ++fr2;
            break;

        case 3: ++fr3;
            break;

        case 4: ++fr4;
            break;

        case 5: ++fr5;
            break;

        case 6: ++fr6;
            break;
    }

}
