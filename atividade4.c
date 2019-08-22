#include <stdio.h>
#include <stdlib.h>
#define TAM 10
main(){
	int c;
	float salario [TAM];
	for (c = 0; c < TAM; c++) {
		printf("Funcionario |%d|. Salario? R$", c);
		scanf("%f", &salario[c]);	
	}
	printf("\n");
	printf("COM 30 PORCENTO DE AUMENTO\n");
	printf("\n");
	for (c = 0; c < TAM; c++){
		printf("Funcionario |%d|. Novo salario: %.2f\n", c, (salario[c] + (salario[c] * 30 / 100)));
	}
	
	system("pause");
}

