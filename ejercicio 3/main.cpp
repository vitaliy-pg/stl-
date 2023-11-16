// main.cpp
#include <iostream>
#include "geometria.h"

int main() {
    // Crear un objeto Círculo
    Geometria::Circulo miCirculo(5.0);

    // Calcular y mostrar las propiedades del círculo
    std::cout << "Área del círculo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << miCirculo.calcularPerimetro() << std::endl;
    std::cout << "Radio del círculo: " << miCirculo.calcularRadio() << std::endl;
    std::cout << "Diámetro del círculo: " << miCirculo.calcularDiametro() << std::endl;

    return 0;
}