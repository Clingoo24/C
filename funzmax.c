//program with maximum function that return the highest of 3 integers numbers

#include <stdio.h>

int textScan(void);
int maximum(int num1, int num2, int num3);
void output(int x, int y, int z);


int main(){

    int num1, num2, num3;

    num1=textScan();
    num2=textScan();
    num3=textScan();

    output(num1, num2, num3);

    return 0;
}

int textScan(void){

    int number;

    printf("Enter integer --> ");
    scanf("%d",&number);

    return number;
}

int maximum(int num1, int num2, int num3){

    if (num1 >= num2 && num1 >= num3)
        return num1;

    if (num2 >= num1 && num2 >= num3)
        return num2;

    if (num3 >= num1 && num3 >= num2)
        return num3;

}

void output(int x, int y, int z){
    printf("Maximum --> %d\n",maximum(x,y,z));
}