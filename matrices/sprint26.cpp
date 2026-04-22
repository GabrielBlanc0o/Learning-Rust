#include <iostream>
using namespace std;

int main(){

    int matriz[3][3];

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    int mayor = matriz[0][0];
    int filaMax = 0, colMax = 0;
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j]>mayor){
                mayor = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
        }
    }
    

    cout << "El mayor es " << mayor << " y esta en la fila " << filaMax << " , columna " << colMax << endl;


    return 0;

}