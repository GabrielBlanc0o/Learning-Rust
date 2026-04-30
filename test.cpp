// intentando numeros fibonacci

#include <iostream>
using namespace std;
int fibo(int n);
int main(){

    for (int n = 0; n < 12 ; n++){
        cout << fibo(n) << " ";

    }

    return 0;

}



int fibo(int n){

    if (n == 0) return 0;
    if (n == 1) return 1;

    int lista[100];
    lista[0] = 0;
    lista[1] = 1;

    for (int i = 0; i <=n;i++){
            lista[i] = lista[i-1] + lista[i-2];
        }

    

    return lista[n];

}