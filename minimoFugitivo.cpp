#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int array[100];

    for(int i = 0; i < n; i++) cin >> array[i];

    // 1. ENCONTRAR EL MENOR
    int menor = array[0];
    for(int i = 1; i < n; i++) {
        // Si array[i] es menor que nuestra variable 'menor'...
        // Actualizamos 'menor'
    }

    // 2. BUSCAR POSICIONES
    cout << "Menor: " << menor << endl;
    cout << "Posiciones: ";
    for(int i = 0; i < n; i++) {
        // Si el elemento actual es IGUAL al menor que encontramos...
        // Imprimimos su índice i
    }




    return 0;
}
