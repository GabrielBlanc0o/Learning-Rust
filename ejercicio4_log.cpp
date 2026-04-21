#include <iostream>
using namespace std;

bool esPar(int n){
    return n % 2 == 0;  
}

void imprimirResultado(int n){
    if (esPar(n)){
        cout << n << " -> par" ;
    } else {
        cout << n << " -> impar" ;
    }
}

int main(){

    int y = 0;
    for (;;){
        int j;
        cin >> j;

        if (j == 0){
            break;
        }

        if (j < 0){
            continue;
        }

        if (esPar(j))y++;
        else y = 0;
        

        imprimirResultado(j);
        cout << endl;

        if (y == 3){
        break;
        }
    }
    return 0;
}