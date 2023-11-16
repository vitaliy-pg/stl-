#include <iostream>
#include <vector>
#include <map>
#include <set>
int main() {

}
    std::vector<int> numeros = {1, 2, 3, 4, 5};


    numeros.push_back(6);


    std::cout << "Vector de números: ";
    for (const auto& numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> edades = {
        {"Juan", 20},
        {"María", 25},
        {"Pedro", 30}
    };          // Crear un mapa con 3 elementos
