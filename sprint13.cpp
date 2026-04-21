#include <iostream>


using namespace  std;

int main(){

    int n;
    cin >> n;

    int arr[100];

    for (auto i {0}; i < n; i++) cin >> arr[i];

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    for (auto i {0}; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}