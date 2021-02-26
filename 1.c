#include <stdio.h>
#include <stdlib.h>

void transforma(int totmin,int *h,int *m){
    *h=totmin/60;
    *m=totmin-(*h*60);
    return;
}
int main(){
    int totalminutos, horas, minutos;
    printf("Digite a quantidade de minutos a ser convertida:/n");
    scanf("%i",&totalminutos);
    transforma(totalminutos,&horas,&minutos);
    printf("%d hora(s) e %d minuto(s)",horas,minutos);
return 0;
}
