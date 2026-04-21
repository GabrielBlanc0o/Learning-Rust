#include <iostream>
using namespace std;

int main(){

    int m;
    cin >> m ;

    int mn;
    cin >> mn;

    int mayor = m;
    int menor = mn;

        for (auto i{0};i < m ; i++){
            cin >> m;
            if (m > mayor){
                mayor = m;
            }
            if (m < menor ){
                menor = mn;
            }
        }
    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;
    return 0;
    }