#include <iostream>
using namespace std;

int main(){

    int matriz[2][3];

    int suma = 0;


        for (auto i{0}; i<2;i++){
            for(auto j{0}; j<3;j++){
                cin >> matriz[i][j];
                suma += matriz[i][j];
            }       
    }
    cout << endl;

        for (int i = 0;i<2; i++){
            for (int j = 0;j<3; j++){
                cout << matriz[i][j] << " ";
            }
                cout << endl;
        }

    cout << suma;

    return 0;
}

    
