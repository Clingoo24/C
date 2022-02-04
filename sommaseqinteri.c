//programma che sommi una sequenza di interi e fare un primo scanf che specifica quanti interi vanno inseriti, mentre un altro che effettivamente li inserisce
#include <stdio.h>

int main()
{
    int somma=0;
    int top,firstNum, num, counter=1;

    scanf("%d",&firstNum);

    while (counter <= firstNum){
        scanf("%d",&num);
        somma += num;
        ++counter;
    }

    printf("\nSomma --> %d",somma);
    return 0;
}