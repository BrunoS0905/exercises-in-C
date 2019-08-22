#include <stdio.h>
int main(){
	int a, b;
	printf("Digite primeiro valor: ");
	scanf("%d",&a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("\n");
	int soma = a + b;
	int sub = a - b;
	int mult = a * b;
	
	printf("A soma e: %d\n",soma);
	printf("A subtracao e: %d\n",sub);
	printf("A multiplicacao e: %d\n",mult);
	
	system("pause");
	
}
