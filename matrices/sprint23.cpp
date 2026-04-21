#include <iostream>
using namespace std;

int main(){

    int matriz[2][2];

    int objetivo;
    cout << "Ingresa el numero objetivo: " << endl;
    cin >> objetivo;
    int posx = -1; 
    int posy = -1;

        for (auto i{0}; i<2;i++){
            for(auto j{0}; j<2;j++){
                cin >> matriz[i][j];
                if (matriz[i][j] == objetivo ){
                    posx = i;
                    posy = j;
                }
            }       
    }
    cout << endl;

        for (int i = 0;i<2; i++){
            for (int j = 0;j<2; j++){
                cout << matriz[i][j] << " ";
            }
                cout << endl;
        }

        if (posx != -1) {
            cout << "Encontrado en Fila " << posx  + 1 << " Columna " << posy +1 << endl;
        } else {
            cout << "El numero no se encuentra en la matriz." << endl;

        
    }
    return 0;
}

    
