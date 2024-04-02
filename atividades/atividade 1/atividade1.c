#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Nenhum numero fornecido.\n");
        return 1;
    }
int i , num = argc - 1;
float media = 0;

//qtd num recebidos-------------------

printf("\nQuantidade de numeros recebidos: %i", num);

//media-----------------------------
for(i = 1; i < argc; i++){
media += atoi(argv[i]);
}
media /= num;
printf("\nMedia: %.2f", media);


//maior e menor---------------------

//maior
int maior = 0;
for(i = 1; i < argc; i++){
    if(atoi(argv[i]) > maior){
        maior = atoi(argv[i]);
    }
}
int menor = maior;

//menor
for(i = 1; i < argc; i++){
    if(menor > atoi(argv[i])){
        menor = atoi(argv[i]);
    }
}
printf("\nMenor numero: %i", menor);
printf("\nMaior numero: %i\n", maior);


//ordem crescente-------BUBBLE SORT--------------
int order[num], j=0, y;
for(i = 0; i< num; i++){
    order[i] = atoi(argv[i+1]);
}
for(i=0; i < num-1; i++){
    for(j=0; j < num - i - 1; j++){
        if(order[j] > order[j+1]){
            y = order[j];
            order[j] = order[j + 1];
            order[j+1] = y;
        }
    }
}
printf("Numeros em ordem crescente:");
for(i=0; i < argc - 1; i++){
    printf("\t%i", order[i]);
}
}