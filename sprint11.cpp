#include <iostream>

using namespace std;

int main(){

    int n ;
    cin >> n;
    int arr[100];

    bool existeNegativo = false;

    for (auto i{0}; i <n; i++) cin >> arr[i];

    for (auto i{0};i < n; i++){
        if (arr[i] < 0){
            existeNegativo = true;
            break;
    }
}
        if (existeNegativo == false){
            cout << "Seguro";
        } else {
            cout << "Peligro";
        }
    

    return 0;
}