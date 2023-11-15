#include <iostream>
#include <cmath>

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: División por cero." << std::endl;
            return 0;  // Devolvemos un valor predeterminado en caso de división por cero
        }
    }

    double raizCuadrada(double a) {
        if (a >= 0) {
            return sqrt(a);
        } else {
            std::cerr << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
            return 0.0;  // Devolvemos un valor predeterminado en caso de número negativo
        }
    }

    int potencia(int base, int exponente) {
        return static_cast<int>(std::pow(base, exponente));
    }
}

// Función principal
int main() {
    // Utilizando las funciones del espacio de nombres Matematicas
    int resultado_suma = Matematicas::suma(5, 3);
    int resultado_resta = Matematicas::resta(8, 2);
    int resultado_multiplicacion = Matematicas::multiplicacion(4, 6);
    int resultado_division = Matematicas::division(10, 2);
    double resultado_raiz = Matematicas::raizCuadrada(25.0);
    int resultado_potencia = Matematicas::potencia(2, 3);

    // Mostrando los resultados
    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;
    std::cout << "Resultado de la multiplicación: " << resultado_multiplicacion << std::endl;
    std::cout << "Resultado de la división: " << resultado_division << std::endl;
    std::cout << "Resultado de la raíz cuadrada: " << resultado_raiz << std::endl;
    std::cout << "Resultado de la potencia: " << resultado_potencia << std::endl;

    return 0;
}

