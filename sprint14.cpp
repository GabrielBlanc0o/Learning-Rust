#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n ; 

    int arr[100];
    int limite = 10;

    for (auto i {0};i < n ; i++) cin >> arr[i];

    for (auto i {0};i < n ; i++){
        if(arr[i] > limite){
            arr[i] = 10;
        }
    }

    for (auto i {0};i < n ; i++){
        cout << arr[i] << " "; 
    }


    return 0; 
}