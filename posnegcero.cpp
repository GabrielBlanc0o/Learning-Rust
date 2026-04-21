#include <iostream>
using namespace std;

int main(){

    int casos;
    cin >> casos;
    int pos = 0;
    int neg = 0 ;
    int zer = 0 ;
    for (auto i{0}; i < casos ; i++){
        int numeros;
        cin >> numeros;
        if (numeros > 0){
            pos++;
        }if (numeros < 0){
            neg++;
        }else{
            zer++;
        }
    }
    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " <<neg << endl;
    cout << "Ceros: " << zer << endl;
    return 0 ;
}