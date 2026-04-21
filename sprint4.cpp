#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[100];

    for(auto i{0};i<n;i++) cin >> arr[i];
    int suma1 = arr[0];
    int suma = arr[n - 1] ;


    cout << suma1 + suma;

    return 0;
}