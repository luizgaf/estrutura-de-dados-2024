#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if(argc != 2){
        printf("\ndigite apenas 1 numero");
        return 1;
    }
    else{
        int r = 1, i, num = atoi(argv[1]);
        for(i=2; i < num; i++){
            if(num % i == 0){
                r = 0;
                break;
            }
        }
        if( num < 1 || num > 2 && num % 2 ==0){
            r = 0;
        }
        if( r == 1){
            printf("\ntrue\n");
        }
        else{
            printf("\nfalse\n");
        }
    }
}