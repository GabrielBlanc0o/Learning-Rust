#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int array[100];
    int contador = 0;

    for (auto i {0};i < n;i++) cin >> array[i];
    int mayor = array[0];

    for (auto i {0}; i < n; i++){
        if (array[i] > mayor){
                mayor = array[i];
            } 
    }

    for (auto i {0}; i < n; i++){
        if (array[i] != mayor){
            array[i] += 10;
                contador++;
            }
    }

    for (auto i {0}; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << contador;
    return 0;
}


