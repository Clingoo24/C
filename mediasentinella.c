//calcola e stampa la media di diversi numeri interi. sentinella 9999

#include <stdio.h>
#define SENTINEL 9999

int main()
{
    int sum=0,volte=0,num;

    while (num != SENTINEL) {
        scanf("%d",&num);
        if (num == SENTINEL)
            break;
        sum += num;
        ++volte;
    }

    printf("Media --> %d\n",sum/volte);
    
    return 0;
}