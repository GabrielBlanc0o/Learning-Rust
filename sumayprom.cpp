#include <iostream>
using namespace std;


int main(){

    int casos;
    cin >> casos;

    int arr[100];

    for (auto i{0}; i < casos; i++){
        cin >> arr[i];
    }
    int sumaTotal = 0;
    
    for (auto i{0}; i < casos; i++){
        sumaTotal += arr[i]  ;
    }

    cout << "Suma total: " << sumaTotal  << endl;
    cout << "Promedio : " << (double)sumaTotal/casos ; 

    return 0 ;
}