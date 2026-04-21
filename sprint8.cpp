#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n; 
    int arr[100];
    
    bool ordenado = true;

    for (auto i{0}; i <n ; i++) cin >> arr[i];

    for(auto i{0}; i <n - 1 ; i++){
        if (arr[i]> arr[i+1]){
            ordenado = false;
            cout << "No ordenado";
            break;
        } else{
            cout << "Ordenado" << endl;
        }
        
    }  
    return 0;
}