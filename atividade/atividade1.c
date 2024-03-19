#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
int i ,x=1, num, media;
num = argc - 1;
printf("Quantidade de numeros recebidos: %i", num);
for(i = 1; i < argc ; i++){
media += atoi(argv[x]);
x++;
}
printf("\nMedia: %i", media/x);
}