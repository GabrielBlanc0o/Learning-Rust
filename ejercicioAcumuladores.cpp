#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100];

    // Variables para acumular (¡Iniciadas en 0!)
    int contadorPares = 0;
    int sumaTotal = 0;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // AQUÍ TU LÓGICA:
    // 1. Un bucle para recorrer todo el array.
    for (auto i{0}; i < n;i++){
            sumaTotal += array[i];
        if (array[i] % 2 == 0 &&  array[i] > 10){
            contadorPares++;
        }
    }
    // 2. Un 'if' para ver si es par (% 2 == 0) Y mayor a 10.
    // 3. Sumar cada elemento a 'sumaTotal'.

    // Al final, calcular el promedio e imprimir resultados.
    cout << "Promedio: " << sumaTotal / n <<endl;
    return 0;
}
