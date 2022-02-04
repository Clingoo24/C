//contare caratteri e righe

#include <stdio.h>

int main()
{
    int testo;
    long int caratteri, righe = 0;

    for (caratteri = 0; (testo = getchar()) != EOF; ++caratteri)
    {
        if (testo == '\n')
            ++righe;
    }

    printf("\n********NCARATTERI %ld********",caratteri);
    printf("\n********NRIGHE %ld********\n",righe);

    return 0;
}