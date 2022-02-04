//calcola e stampa la somma di interi dispari da 1 a 15

#include <stdio.h>

int main()
{
    int sum = 0;

    for (unsigned int i = 1; i <= 15; i += 2)
    {
        sum += i;
    }

    printf("\nSomma --> %d\n",sum);

    return 0;
}