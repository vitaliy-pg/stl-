#include "ciencia.h"

namespace Ciencia {

    namespace Fisica {
        const double velocidadLuz = 299792458.0;  // Velocidad de la luz en metros por segundo

        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;  // E=mc^2
        }
    }

    namespace Matematicas {
        const double pi = 3.14159265358979323846;  // Valor de PI
    }
}
