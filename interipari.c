//calcola e stampa la somma di interi pari da 2 a 30

#include <stdio.h>

int main()
{
    int sum = 0;

    for (unsigned int i = 2; i <= 30; i += 2)
    {
        sum += i;
    }

    printf("\nSomma --> %d\n",sum);

    return 0;
}