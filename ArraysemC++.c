#include <iostream>
 
 int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
    }

    std::count << "Elementos do array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::count << numeros[i] << " ";
    }

     return 0;
 }