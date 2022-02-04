//stampa lancio di un dado per un seme inserito

#include <stdio.h>
#include <stdlib.h>

int seed(void);
int lanci(void);
void output(int x, unsigned int y);

int main(){

    int nLanci,seme,facce;

    seme = seed();
    nLanci = lanci();
    srand(seme);

    for(unsigned int i = 1; i <= nLanci; ++i){

        facce=1 + rand() % 6;
        output(facce, i);
    }

    return 0;
}

void output(int x, unsigned int y){

    printf("%5d",x);

    if((y % 5) == 0)
        puts("");
}

int seed(void){

    int x;

    printf("Seme --> ");
    scanf("%d",&x);

    return x;
}

int lanci(void){

    int y;

    printf("Lanci --> ");
    scanf("%d",&y);

    while (y <= 0){
        printf("Non valido, inserisci: ");
        scanf("%d",&y);

        if (y > 0)
            return y;
    }
}