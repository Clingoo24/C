//calcolo i fattoriali dei numeri da 1 a 5
//cosa mi può impedire di calcolare il fattoriale di 20?    OVERFLOW
#include <stdio.h>
#define X 20
#define Y 1

int main()
{
    int factorial = 1;

    printf("%-10s%-15s\n","NUMBER","FACTORIAL");

    for (unsigned int i = X; i >= Y; --i)
    {
        for (unsigned int j = i; j >= Y; --j)
        {
            factorial *= j;
        }
        
        printf("%d%11d\n",i,factorial);

        factorial = 1;
    }

    return 0;
}