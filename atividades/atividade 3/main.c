#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int nums[5], i = 0, y;
    FILE *arquivo_txt, *saida_txt;

    arquivo_txt = fopen("arquivo.txt", "r");
    if (arquivo_txt == NULL) {
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    while(fscanf(arquivo_txt, "%i", &nums[i]) == 1){
        i++;
    }
    fclose(arquivo_txt);

    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (nums[k] > nums[k + 1]) {
                y = nums[k];
                nums[k] = nums[k + 1];
                nums[k + 1] = y;
            }
        }
    }

    saida_txt = fopen("saida.txt","w");
    if (saida_txt == NULL) {
        printf("erro ao abrir o arquivo de saida.\n");
        return 1;
    }

    for(int j=0; j<i; j++){
    fprintf(saida_txt, "%i\n", nums[j]);
    }
    fclose(saida_txt);

    exit(0);

}