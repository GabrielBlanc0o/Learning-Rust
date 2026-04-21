#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[100];
    for (auto i{0}; i<n;i++) cin >> arr[i];
    int mayorTemporal = arr[0];
    int indiceMayor = 0;
    for (auto i{0}; i<n;i++){
        if (arr[i] > mayorTemporal){
            mayorTemporal = arr[i] ;
            indiceMayor = i;
        }
    }
    
    cout << indiceMayor;


    return 0;
}