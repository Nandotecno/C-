
#include <stdio.h>

int main() {
    int indice; // Declara��o da vari�vel 'indice'
    
    indice = 1; // Inicializa 'indice' com 1
    
    // Loop que continua enquanto 'indice' for menor ou igual a 10
    while (indice <= 10) {
        printf("Valor do indice: %d\n", indice); // Exibe o valor atual de 'indice'
        indice++; // Incrementa 'indice' em 1
    }
    
    // Ap�s o loop, exibe o valor final de 'indice'
    printf("Valor do indice depois do while: %d\n", indice);
    
    return 0; // Indica que o programa terminou com sucesso
}
