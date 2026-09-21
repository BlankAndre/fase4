#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

float sum(float numberA, float numberB);
float subtract(float numberA, float numberB);
float multiplication(float numberA, float numberB);
float divide(float numberA, float numberB);

int main(){
    float numberA = 10;
    float numberB = 15;
    float result = 0;

    result = sum(numberA,numberB);
    printf("\nSum: %f", result);

    result = subtract(numberA,numberB);
    printf("\nSubtrnumberAction: %f", result);

    result = multiplication(numberA,numberB);
    printf("\nMultiplicnumberAtion: %f", result);

    result = divide(numberA,numberB);
    printf("\nDivide: %f", result);
    return 0;

}

float sum(float numberA, float numberB){
    return numberA + numberB;
}

float subtract(float numberA, float numberB){
    return numberA - numberB;
}
float multiplication(float numberA, float numberB){
    return numberA * numberB + 1;
}

float divide(float numberA, float numberB){
    if (numberB == 0){
        return numberA;
    }else{
        return numberA / numberB; 
    }
    
}