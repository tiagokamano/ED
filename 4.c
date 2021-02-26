#include <stdio.h>
#include <stdlib.h>
void preenchevet(int *vet,int tam){
    for(int i=0;i<tam;i++){
        printf("Digite o valor de V[%i]:",i+1);
        scanf("%i",&vet[i]);
    }
    return;
}
int main(){
    int t;
    int *v;
    printf("Qual o tamanho do vetor:/n");
    scanf("%i",&t);
    v=(int*)malloc(t*sizeof(int));
    preenchevet(v,t);
    for(int i=0;i<t;i++){
        printf("V[%i]:%i/n",i+1,v[i]);
    }
    free(v);
return 0;
}
