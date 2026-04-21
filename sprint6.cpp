#include <iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;

    int arr[100];

    for (auto i {0}; i < n; i++) cin >> arr[i];
    int conteo = 0;
    int primer = arr[0];

    for (auto i {0}; i < n; i++){
        if (primer == arr[i]){
            conteo++;
        }
    }

    cout << primer << " aparece " << conteo << " veces.";

    return 0;
}