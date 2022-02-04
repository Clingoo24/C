//scrivere un programma che trova il più piccolo di diversi interi. il primo letto dice quanti ne rimangono da leggere
// esempio input: 5 1 2 3 4 5         min --> 1

#include <stdio.h>

int main()
{
    int x,min,firstNum,num,count=1;
    scanf("%d",&firstNum);

    while (count <= firstNum){

        scanf("%d",&num);
        if (count == 1)
            x=num;
        if (num <= x){
            min = num;
            x=num;
        }
        ++count;
    }

    printf("min --> %d\n",min);
    return 0;
}