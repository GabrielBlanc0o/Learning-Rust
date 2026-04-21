#include <iostream>
using namespace std;

int main(){

    int matriz[3][2];
    

    for (int i = 0; i < 3 ; i++){
        int sumaFila = 0;
        for(int j = 0; j < 2; j++){
            cin >> matriz[i][j];
            sumaFila += matriz[i][j];
            
        }
        cout << "Fila " << i << ": " << sumaFila << endl;   
    }


    

    return 0 ;
}