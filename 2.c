#include <stdio.h>
#include <stdlib.h>

//nao consegui fazer o contador de linhas
int main(){
    char frase[100];
    int linha=0;
    for(int i=0;i<=100;i++){
        frase[i]=NULL;
    }
    FILE *arq;
    arq=fopen("entrada.txt","r");
    if(arq==NULL){
        printf("falha ao abrir.");
        exit(1);
    }
    else{
        printf("O arquivo de entrada foi aberto com sucesso!/n");
    }
    int a=0;
    while((frase[a]=fgetc(arq))!=EOF){
        if(frase[a]=='/n'){
            linha++;
        }
        a++;
    }
    fclose(arq);
    FILE *copia;
    copia=fopen("saida.txt","w");
    if(copia==NULL){
        printf("falha ao abrir.");
        exit(1);
    }
    else{
        printf("O arquivo de saida foi aberto com sucesso!/n");
    }
    for(int i=0;i<=100;i++){
        if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'||frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U'){
            fputc('*',copia);
        }
        else{
            fputc(frase[i],copia);
        }
    }
    printf("%i",linha);
    fclose(copia);
return 0;
}
