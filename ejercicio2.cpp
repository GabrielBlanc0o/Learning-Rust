#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    cin >> n1 >> n2;

    if (n1 > n2){
        cout << "El mayor es: " << n1 << endl;
    } else if (n1 == n2){
        cout << "Son iguales " << endl;
    } else {
        cout << "El menor es: " << n1 << endl;
    }

    return 0;
}