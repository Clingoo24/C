#include <stdio.h>

int main()
{
    int sommaRichiesta;
    int banconote50=0, banconote20=0;

    printf("Somma --> ");
    scanf("%d",&sommaRichiesta);

    if (sommaRichiesta == 0){

        printf("Inserisci un numero diverso da 0!\n");

    } else if ((sommaRichiesta % 50) == 0){

        for (unsigned int i = 0; i <= sommaRichiesta - 50; i += 50){
            ++banconote50;
        }

        printf("Banconote da 50: %d\nSomma erogata: %d\n",banconote50,banconote50*50);

    } else if (((sommaRichiesta % 2) == 0)){

        for (unsigned int i = 0; i <= sommaRichiesta - 20; i += 20){
            ++banconote20;
        }

        printf("Banconote da 20: %d\nSomma erogata: %d\n",banconote20,banconote20*20);

    } else {
                
        for (unsigned int i = 0; i <= sommaRichiesta - 50; i += 50){
            ++banconote50;
        }

        for (unsigned int i = (banconote50*50); i <= sommaRichiesta - 20; i += 20){
            ++banconote20;
        }

        printf("Banconote da 50: %d\nBanconote da 20: %d\nSomma erogata: %d\n",banconote50,banconote20,(banconote50*50)+(banconote20*20));

    }
     
    return 0;
}