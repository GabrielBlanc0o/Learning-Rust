#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int array[100];

    for(int i = 0; i < n; i++) cin >> array[i];

    int fallo = 0; // Nuestra bandera

    for(int i = 0; i < n/2; i++) {
        // COMPARA AQUÍ array[i] con su pareja
        if(array[i] != array[n - i - 1] ){
            cout << "Error en posicion " << i << endl;
            fallo = 1;
            break;
        }
        // Si son diferentes:
        //   1. Imprime el error
        //   2. Pon fallo = 1
        //   3. break;
    }

    if (fallo == 0) {
        cout << "Es palindromo" << endl;
    }

    return 0;




}
