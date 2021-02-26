#include <stdio.h>
#include <math.h>

int main(){
    int x,y,r;
    r=0;
    printf("digite o valor de x:/n");
    scanf("%i",&x);
    printf("digite o valor de y:/n");
    scanf("%i",&y);
    if(y==0){
        return 1;
    }
    else{
        r=x*pow(x,y-1);
    }
    printf("%i",r);
return 0;
}
