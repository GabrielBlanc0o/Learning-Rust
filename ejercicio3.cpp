#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int limite=10;

    for (auto i{1};i<=limite;i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0 ;
}