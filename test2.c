#include <stdio.h>
#include <stdlib.h>

int isMartian(int a[ ], int len){
    if(len == 0) {
        return 0;
    }
    int ret = -1;
    int onesCount = 0;
    int towsCount = 0;
    int previous = a[0];
    if(a[0] == 1) onesCount++;
    if(a[0] == 2) towsCount++;
    for(int i=1; i<len;i++){
        if(a[i] == previous){
            ret = 0;
            break;
        }
        if(a[i] == 1) onesCount++;
        if(a[i] == 2) towsCount++;
        previous = a[i];
    }

    return ret==-1 ? onesCount>towsCount : ret;
}

int main(void){
    int nums[] = {2}; 
    printf("The result: %d\n", isMartian(nums, 1));
    return 0;
}