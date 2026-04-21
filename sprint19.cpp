#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Ingresa la cantidad de casos: " << endl;
    cin >> n;

    int infiltrado;
    cout << "Ingresa el numero infiltrado: " << endl;
    cin >> infiltrado;

    int arr[100];

    for (auto i {0}; i<n ; i++) cin >> arr[i];
    bool infiltradoCase = false;
    for (auto i {0}; i<n ; i++) {
        if (infiltrado == arr[i]){
            infiltradoCase = true;
        }
    }
    cout << "Leyendo.." << endl;
    
        if (infiltradoCase == true){
            cout << "Infiltrado";
        } else {
            cout << "No esta";
        }
    
}