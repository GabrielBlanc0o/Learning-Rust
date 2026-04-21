#include <iostream>
using namespace std;

bool esPar(int n){
    return n % 2 == 0;  
}

void imprimirResultado(int n){
    if (esPar(n)){
        cout << n << " es par" ;
    } else {
        cout << n << " es impar" ;
    }
}

int main(){
    for (;;){
        int j;
        cin >> j;
        if (j == 0){
            break;
        } else if (j < 0) {
            continue;
        }
        imprimirResultado(j);
        cout << endl;
        }
    return 0;
}