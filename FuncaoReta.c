#include<stdio.h>

main(){
    //Declaração de variaveis
    float a, b;

    printf("\nInforme o valor de a: ");
    scanf("%f", &a);
    printf("\nInforme o valor de b: ");
    scanf("%f", &b);

    if(a==0){
        printf("\nA reta e uma constante!\n");
    }else if(a < 0){
        printf("\nA reta e decrescente!\n");
    }else{
        printf("\nA reta e crescente!\n");
    }
system("PAUSE");
return 0;
}


