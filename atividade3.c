#include <stdio.h>
#include <stdlib.h>

#define TAM 10
int main(){
	int n;
	int num [TAM];
	for (n = 0; n < TAM; n++) {
		printf("Numero %d: ", n);
		scanf("%d", &num[n]);
	}
	
	printf("\n");
	for (n = 1; n < TAM; n++){
		printf("%d = Dobro de %d e %d\n", n, num[n], (num[n]*2));
	}
	printf("\n");
	system("pause");
}

