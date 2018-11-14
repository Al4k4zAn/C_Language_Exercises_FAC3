/*
*Luis Leite
*Ciencias da Computação - FAC 3
*2018
*Algoritimos e Tecnicas de programação
*/

#include<stdio.h>

main(){
	//declaracao de variaveis
	float salarioBruto = 0, salarioLiquido = 0, desconto = 0;
	
	printf("\n Informe seu salario bruto: ");
	scanf("%f", &salarioBruto);
	
	if(salarioBruto <= 1999.18){
		float irrf = 0.0; //variavel interna
		desconto = salarioBruto * irrf;
		salarioLiquido = salarioBruto - desconto;
		
		printf("\n O total de descontos e: %.2f\n", desconto);
		printf("\n O salario liquido e: %.2f\n", salarioLiquido);
		
	}else if((salarioBruto >= 1999,19) || (salarioBruto <= 2967,98)){
		float irrf = 0.075;//variavel interna
		desconto = salarioBruto * irrf;
		salarioLiquido = salarioBruto - desconto;
		
		printf("\n O total de descontos e: %.2f\n", desconto);
		printf("\n O salario liquido e: %.2f\n", salarioLiquido);
	}else if((salarioBruto >= 2967,99) || (salarioBruto <= 3938,60)){
		float irrf = 0.15;//variavel interna
		desconto = salarioBruto * irrf;
		salarioLiquido = salarioBruto - desconto;
		
		printf("\n O total de descontos e: %.2f\n", desconto);
		printf("\n O salario liquido e: %.2f\n", salarioLiquido);
	}else if ((salarioBruto >= 3938,61) || (salarioBruto <= 4897,91)){
		float irrf = 0.225;//variavel interna
		desconto = salarioBruto * irrf;
		salarioLiquido = salarioBruto - desconto;
		
		printf("\n O total de descontos e: %.2f\n", desconto);
		printf("\n O salario liquido e: %.2f\n", salarioLiquido);
	}else{
		float irrf = 0.275;//variavel interna
		desconto = salarioBruto * irrf;
		salarioLiquido = salarioBruto - desconto;
		
		printf("\n O total de descontos e: %.2f\n", desconto);
		printf("\n O salario liquido e: %.2f\n", salarioLiquido);
	}
	
	system("PAUSE");
	return 0;
}
