// geometria.cpp
#include "geometria.h"

namespace Geometria {

    Circulo::Circulo(double radio) : radio_(radio) {}


    double Circulo::calcularArea() const {
        return PI * radio_ * radio_;
    }

    double Circulo::calcularPerimetro() const {
        return 2.0 * PI * radio_;
    }

    double Circulo::calcularRadio() const {
        return radio_;
    }

    double Circulo::calcularDiametro() const {
        return 2.0 * radio_;
    }
}
