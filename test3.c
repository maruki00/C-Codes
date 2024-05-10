#include <stdio.h>
#include <stdlib.h>

int isDigitIncreasing(int num1){
    if (num1>=0 && num1 <10) return 1;
    int ret = 0;
    for(int i=1; i<=9; i++){
        int digSum = i;
        int prev = i;
        while (digSum<num1)
        {   
            prev = (prev*10)+i;
            digSum += prev;
            if(digSum == num1){
                ret = 1;
                break;
            }
        }
        if (ret==1) break;
        printf("\n");
    }
    return ret;
}

int main(void){

    int num1;
    printf("Enter a Number : ");
    scanf("%d", &num1);
    printf("The result: %d\n", isDigitIncreasing(num1));
    return 0;
}