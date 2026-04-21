#include <iostream>
using namespace std;
int main(){

    int matriz[2][2];


    for (auto i{0};i<2;i++){
        for(auto j{0};j<2;j++){
            cin >> matriz[i][j];
        }
    }
    
    cout << "Tu matriz es: " << endl;

    for (auto i{0};i<2;i++){
        for(auto j{0};j<2;j++){

            cout << "|";
            cout << matriz[i][j] << "|";
            
            
        }
        cout << endl;
    }

    return 0;
    }


