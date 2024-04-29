#include <stdio.h>
#include <stdlib.h>
#define size 99

int main(int argc, char* argv[]){
    FILE *dados;
    dados = fopen("dados.csv", "r");
    float x[size], y[size];

    // ler os dados
    for(int i = 0; i <= size; i++){
        fscanf(dados, "%f,%f", &x[i], &y[i]);
    }

    // media dos dados
    float media_x = 0, media_y = 0;
    for(int j = 0; j <= size; j++){
        media_x =+ x[j];
        media_y =+ y[j];
    }
    media_x /= size;
    media_y /= size;

    //inclinação

    float inclinacao, cima, baixo;
    for(int k = 0; k <= size; k++){
        cima =+ (x[k] - media_x) * (y[k] - media_y);
        baixo =+ (x[k] - media_x) * (x[k] - media_x);
    }
    inclinacao = cima/baixo;

    //interceptação
    float interceptacao;
    interceptacao = media_y - (inclinacao * media_x);

    //print
    printf("y = %.2fx + %.2f", inclinacao, interceptacao);

    fclose(dados);
    return 0;
}
