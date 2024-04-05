#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }
    int i = 0, y;
    int *nums = (int *)malloc(1000000 * sizeof(int));
    if(nums == NULL){
        printf("Falhou ao alocar memoria\n");
        return 1;
    }
    
    FILE *arquivo_txt, *saida_txt;

    arquivo_txt = fopen(argv[1], "r");
    if (arquivo_txt == NULL) {
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    while(fscanf(arquivo_txt, "%i", &nums[i]) == 1 && i < 1000000){
        i++;
    }
    fclose(arquivo_txt);

    mergeSort(nums, 0, i-1);

    saida_txt = fopen("saida.txt","w");
    if (saida_txt == NULL) {
        printf("erro ao abrir o arquivo de saida.\n");
        return 1;
    }

    for(int j=0; j<i; j++){
    fprintf(saida_txt, "%i\n", nums[j]);
    }
    fclose(saida_txt);
    free(nums);

    exit(0);

}