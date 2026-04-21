#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[100];

    for (auto i{0};i < n; i++) cin >> arr[i];

   int pares = 0;
   int suma = 0;
    for (auto i{0};i < n; i++){
        if (arr[i] % 2 == 0){
            suma += arr[i];
            pares++;
        }
    }
    
    for (auto i{0};i < n; i++){
        if (pares > 0 ){
            cout << "Zero no valid";
        }
    }
    cout << suma / pares ;

    return 0;
}