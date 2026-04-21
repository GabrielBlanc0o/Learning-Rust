#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100];

    for(int i = 0; i < n; i++) cin >> array[i];

    // 1. ENCONTRAR EL VALOR MÍNIMO
    int menor = array[0]; // Asumimos que el primero es el menor
    for(int i = 1; i < n; i++) {
        if (array[i] < menor) {
            menor = array[i]; // Actualizamos si encontramos uno más chico
        }
    }

    // 2. BUSCAR Y MOSTRAR POSICIONES
    cout << "Menor: " << menor << endl;
    cout << "Posicion: ";

    for(int i = 0; i < n; i++) {

        if (array[i] == menor){
            cout << i  << "";

        }
        // AQUÍ TU PARTE:
        // Si el valor en la posición 'i' es igual al 'menor' que encontramos...
        // Imprime el índice 'i' seguido de un espacio.
    }

    cout << endl;
    return 0;
}
