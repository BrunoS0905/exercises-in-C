#include <stdio.h>
#include <stdlib.h>

int main(){
	int base, altura, area, c;
	for (c = 1; c < 4; c++) {
		printf("Insira a Base do tringulo %d: ", c);
		scanf("%d", &base);
	
		printf("Insira a Altura do trinagulo %d: ", c);
		scanf("%d", &altura);
		
		area = ((base * altura) / 2);
		
		printf("A Area e: %d \n", area);
		printf("\n");
			
	}

	system("pause");

}
