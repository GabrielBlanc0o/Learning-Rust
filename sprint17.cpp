#include <iostream>
using namespace std;

int main(){

    int n;
    if (cin >> n && n % 2 !=0 ) return 0;

    int arr[100];
    for (auto i{0}; i <n ; i++) cin >> arr[i];

    for (auto i{0}; i <n ; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    for (auto i{0}; i <n ; i++) cout << arr[i] << " ";

}