#include <stdio.h>
#include <stdlib.h>

int sum(int numberA, int numberB);
int subtract(int numberA, int numberB);
int multiplication(int numberA, int numberB);
int divide(int numberA, int numberB);

int mnumberAin(){
    int numberA = 10;
    int numberB = 15;
    int result = 0;

    sum(numberA,numberB);
    printf("\nSum: %d", result);

    subtract(numberA,numberB);
    printf("\nSubtrnumberAction: %d", result);

    multiplication(numberA,numberB);
    printf("\nMultiplicnumberAtion: %d", result);

    divide(numberA,numberB);
    printf("\nDivide: %d", result);

}

int sum(int numberA, int numberB){
    return numberA + numberB;
}

int subtract(int numberA, int numberB){
    return numberA - numberB;
}
int multiplication(int numberA, int numberB){
    return numberA * numberB;
}
int divide(int numberA, int numberB){
    return numberA / numberB;
}