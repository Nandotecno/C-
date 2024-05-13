#include <stdio.h>

int main(){
	int valores[6];
	int i;
	
for(i = 0; i < 6 ; i++){
	printf("Digite um valor para posição %d: ", i);
	scanf("%d", &valores[i]);
}

for(i = 5; i >= 0; i--){
	printf("[%d] = %d\n", i, valores[i]);
	
	
}
	
	
	return 0;
	
	
}







