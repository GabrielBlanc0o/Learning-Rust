#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[100];

    for (auto i{0};i < n ; i++){
        cin >> arr[i];
    }

    int num = arr[0];
    int mayor = arr[0];
    int menor= arr[0] ;

    for (auto i{0};i < n ; i++){
        if (arr[i] > num) mayor = arr[i];
        if (arr[i] < num) menor = arr[i];
    }
    cout << "Mayor : " << mayor << endl;
    cout << "Menor : " << menor << endl;
    return 0;
}