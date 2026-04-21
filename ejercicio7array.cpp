#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[100];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int mayor = array[0];
    int pos = 0;

    for(int i = 1; i < n; i++){
        if (array[i] > mayor){
            mayor = array[i];
            pos = i;
        }
    }
    cout << "Mayor: " << mayor << endl;
    cout << "Posicion: " << pos << endl;

    return 0;
}
