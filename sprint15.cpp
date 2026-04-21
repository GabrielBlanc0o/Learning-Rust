#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[100];
    int sumaTotal=0;
    int promedio = 0;
    int contador = 0;
    int mayorProm =0;

    for (auto i {0}; i < n;i++) cin >> arr[i];

    for (auto i {0}; i < n;i++){
        sumaTotal += arr[i];
        contador++;
    }
    promedio = sumaTotal / contador;

    for (auto i {0}; i < n;i++){
            if (arr[i]> promedio){
                mayorProm++;
            }
        }

    cout << "Suma: " << sumaTotal << endl;
    cout << "Promedio: " << promedio << endl;
    cout << mayorProm << " numeros son mayores al promedio " << promedio << endl;

    return 0;

}