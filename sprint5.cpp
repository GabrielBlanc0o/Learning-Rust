#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[100];

    for (int i{0}; i < n ; i++) cin >> arr[i];
    int pos = 0;
    for (int i{0}; i < n ; i++){

        if (i % 2 !=0 && arr[i] % 2 ==0){
            cout << arr[i] << " ";
            pos++;
        }
    }
    
    cout << "son pares en indices impares: " << pos << " ";

    
    return 0;
}