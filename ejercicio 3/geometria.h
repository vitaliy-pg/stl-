// geometria.h
#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    const double PI = 3.14159265358979323846;

    // Declaración de la clase Círculo
    class Circulo {
    public:
        Circulo(double radio);  // Constructor
        double calcularArea() const;
        double calcularPerimetro() const;
        double calcularRadio() const;
        double calcularDiametro() const;

    private:
        double radio_;
    };
}

#endif //GEOMETRIA_H