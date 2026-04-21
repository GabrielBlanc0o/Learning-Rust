#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int matriz[5][5];
    int px=0 ,py=0 ;

    for(int i = 0; i < 5 ; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 1){
                px = i;
                py = j;
            }
        }
    }
    int pasos = abs(px - 2) + abs(py - 2);
    cout << pasos << endl;
    return 0;
}