#include<stdio.h>

main(){
	
	int a, b, c, d, e, maior = 0, menor = 0;
	
	printf("\nInforme o primeiro valor: ");
	scanf("%d", &a);
	printf("\nInforme o segundo valor: ");
	scanf("%d", &b);
	printf("\nInforme o terceiro valor: ");
	scanf("%d", &c);
	printf("\nInforme o quarto valor: ");
	scanf("%d", &d);
	printf("\nInforme o quinto valor: ");
	scanf("%d", &e);
	
	if (a > maior){
		maior = a;
	}else if (a < menor){
		menor = a;	
	}
	if (b > maior){
		maior = b;
	}else if (b < menor){
		menor = b;	
	}
	if (c > maior){
		maior = c;
	}else if (c < menor){
		menor = c;	
	}if (d > maior){
		maior = d;
	}else if (d < menor){
		menor = d;	
	}if (e > maior){
		maior = e;
	}else if (e < menor){
		menor = e;	
	}
	
	printf("\n O numero maior e %d e o numero menor e %d", maior, menor);
	
	getchar();
	return 0;
}
