#include <iostream>
using namespace std;

int main(){

    int n;
    if(cin >> n && n % 2 != 0) return 0;

    int arr[100];

    for (auto i{0};i<n;i++) cin >> arr[i];

    for (auto i{0}; i < n /2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n /2 + i];  
        arr[n /2 + i] = temp;  
    }

    for (auto i{0};i<n;i++) cout << arr[i] << " ";

    return 0 ; 
}