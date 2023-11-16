#include <iostream>
#include "ciencia.h"

int main() {
    // Utilizando la constante y la función del subespacio de nombres Física
    double masa = 2.0;
    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "Energía (E=mc^2) con masa " << masa << ": " << energia << " julios" << std::endl;

    // Utilizando la constante del subespacio de nombres Matematicas
    double radio = 5.0;
    double areaCirculo = Ciencia::Matematicas::pi * radio * radio;
    std::cout << "Área del círculo con radio " << radio << ": " << areaCirculo << std::endl;

    return 0;
}