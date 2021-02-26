#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    char tip[30];
    int ni;
    int posrank;
}banda;
void preencher(banda *x){
    setbuf(stdin,NULL);
    printf("Digite o nome da banda :/n");
    fgets(x->nome,30,stdin);
    setbuf(stdin,NULL);
    printf("Digite o tipo de musica da banda :/n");
    fgets(x->tip,30,stdin);
    setbuf(stdin,NULL);
    printf("Digite o numero de integrantes da banda :/n");
    scanf("%i",&x->ni);
    printf("Digite o ranking da banda :/n");
    scanf("%i",&x->posrank);
}
int main(){
    banda a, b, c, d, e;
    preencher(&a);
    preencher(&b);
    preencher(&c);
    preencher(&d);
    preencher(&e);
    int n;
    do{
        printf("Digite um numero de 1 a 5:/n");
        scanf("%i",&n);
    }while(n>5||n<1);
    switch(n){
        case 1 :
            if(a.posrank==1){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(b.posrank==1){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(c.posrank==1){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(d.posrank==1){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(e.posrank==1){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            break;
        case 2 :
            if(a.posrank==2){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(b.posrank==2){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(c.posrank==2){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(d.posrank==2){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(e.posrank==2){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            break;
        case 3 :
            if(a.posrank==3){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(b.posrank==3){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(c.posrank==3){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(d.posrank==3){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(e.posrank==3){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            break;
        case 4 :
            if(a.posrank==4){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(b.posrank==4){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(c.posrank==4){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(d.posrank==4){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(e.posrank==4){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            break;
        case 5 :
            if(a.posrank==5){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(b.posrank==5){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(c.posrank==5){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(d.posrank==5){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            if(e.posrank==5){
                printf("%s /n %s/n%i integrantes",a.nome,a.tip,a.ni);
            }
            break;
    }
return 0;
}
