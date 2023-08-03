#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O numero é positivo.\n");
    } else {
        printf("O numero é negativo.\n");
    }

    int contador = 0;
    while (contador < 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    for (int i = 0; i < 10; i++) {
        printf("Interação do loop for: %d\n", i);
    }

    return 0;
}
