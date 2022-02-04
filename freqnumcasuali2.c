//non modulare :(

#include <stdio.h>
#include <stdlib.h>
#define LANCI 60000000

int main(){

    int fr1,fr2,fr3,fr4,fr5,fr6;
    fr1=fr2=fr3=fr4=fr5=fr6=0;

    int faccia;

    for (unsigned int i = 0; i < LANCI; ++i){

        faccia = 1 + (rand() % 6);

        switch (faccia){
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

    printf("%5s%15s\n","FACCE","FREQUENZA");
    printf("%3d%16d\n",1, fr1);
    printf("%3d%16d\n",2, fr2);
    printf("%3d%16d\n",3, fr3);
    printf("%3d%16d\n",4, fr4);
    printf("%3d%16d\n",5, fr5);
    printf("%3d%16d\n",6, fr6);

    return 0;
}