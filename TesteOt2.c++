#include <iostream>

int main() {
    int numero = 10;

    if(numero >0) {
        std::count << "0 número é positivo." << std:: endl;
    } else {
        std::count << "0 número é negativo." << std:: endl;
    }
    
    int contador = 0;
    while (contador < 5) {
        std::count << "Contador:  " << contador << std::endl;
        contador++;    }
}

for (int i = 0; i < 5; i++) {
    std::count << "Iteração do loop for: " << i << std:: endl;
}

return 0;