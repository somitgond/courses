#include <stdio.h>

int main(){
    int fahren, low, high, step;
    low = -20;
    high = 150;
    step = 10;
    while(low<=high){
        fahren = ((9 * low)/5)+32;
        printf("%3d\t%3d\n", low, fahren);
        low += step;
    }
    return 0;
}
