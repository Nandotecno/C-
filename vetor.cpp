#include <stdio.h>

int main(){
	float notas [3];
	
	printf("Nota 1: ");
	scanf("%f", &notas[0]);
	
	printf("Nota 2: ");
	scanf("%f", &notas[1]);
	
	printf("Nota 3: ");
	scanf("%f", &notas[2]);
	
	printf("Notas: \n");
	printf(" - %.1f \n", notas[0]);
	printf(" - %.1f \n", notas[1]);
	printf(" - %.1f \n", notas[2]);
	
	return 0;
	
	
}



