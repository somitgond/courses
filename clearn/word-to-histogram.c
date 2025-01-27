#include <stdio.h>

#define LIMIT   1000

int
main(){
    // take input -> print histogram -> take another input
    int c, nw, nc;
    nw = nc = 0;
    while((c = getchar()) != EOF){
        if(c == '\n' || c == ' '){
            for(int i = 0; i < nw; i++){
                printf("|");
            }
            printf("\n");
            nw = 0;
        } else
            nw++;
    }
    return 0;
}
