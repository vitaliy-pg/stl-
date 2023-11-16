// calculo areas.cpp
#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "rombo.cpp"
#include "trapecio.cpp"
#include "rectangulo.cpp"

int main() {
    // Utilizando las funciones del espacio de nombres Geometria
    double areaTriangulo = Geometria::calcularAreaTriangulo(4.0, 6.0);
    double areaCirculo = Geometria::calcularAreaCirculo(3.0);
    double areaRombo = Geometria::calcularAreaRombo(5.0, 8.0);
    double areaTrapecio = Geometria::calcularAreaTrapecio(6.0, 4.0, 5.0);
    double areaRectangulo = Geometria::calcularAreaRectangulo(7.0, 3.0);
