#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[100];
    int temp  = arr[0];
    for (int i{0};i < n; i++) cin >> arr[i];

    int espejo[100];

    for (int i{0};i < n; i++){
        int temp = arr[i];
        espejo[i] = temp * i;
    }

    for (int i{0};i < n; i++) cout << " " << espejo[i] << " "; 
    

    return 0;
}