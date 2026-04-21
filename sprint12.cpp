#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int arr[100];
    int temp = arr[0];

    for (auto i{0}; i < n ; i++) cin >> arr[i];

    for (int i= n - 1; i > 0 ; i--) {
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        
    }

    for (auto i {0}; i < n ; i++) cout << arr[i] << " " ;

    return 0; 

}
