#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[100];
    int nuevoarr[100];
    for (auto i{0};i<n;i++) cin >> arr[i];


    for (auto i{0};i<n;i++){
        nuevoarr[i] = arr[i] + arr[(i+1)% n];
    }
    for (auto i{0};i<n;i++) {
        cout << nuevoarr[i] << " ";
    }
    return 0;
}