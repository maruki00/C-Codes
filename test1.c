#include <stdio.h>
#include <stdlib.h>

int factores(int num1){
    int factorCount = 0;
    for(int i=1; i<= num1; i++){
        if (num1 % i  == 0){
            factorCount++;
        }
    }
    return factorCount;
}

int sameNumberOfFactors(int num1, int num2){
    if(num1<0 || num2 < 0) return -1;
    if(num1 == num2) return 1;
    int factoresNum1 = factores(num1);
    int factoresNum2 = factores(num2);
    printf("factores: %d, %d\n", factoresNum1, factoresNum2);
    if(factoresNum1 == factoresNum2){
        return 1;
    }

    return 0;
}

int main(void){

    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("The result: %d", sameNumberOfFactors(num1, num2));
    return 0;
}