#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int a = 4, b = 5;
    int *p = &a;
    printf("a = %i \t b = %i\n", a, b);
    printf("&a = %p\t &b = %p", &a, &b);
    p = malloc(sizeof(int)*5);
    p[0] = 3;
    p[1] = 55;
    printf("\n&p = %p\t p=%p \t *p = %i\n", &p, p, *p);
    printf("\n&p = %p\t &p[1]=%p \t p[1] = %i\n", &p, &p[1], p[1]);
    
    exit(0);
}