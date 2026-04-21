#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n ;

    int k;
    cin >> k;

    int mayor = k;
    int menor = k;

        for (auto i{1};i < n ; i++){
            cin >> k;
            if (k > mayor){
                mayor = k;
            }
            if (k < menor ){
                menor = k;
            }
        }
    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;
    return 0;
    }
    
