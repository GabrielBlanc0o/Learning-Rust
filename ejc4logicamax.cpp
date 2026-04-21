#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int array[100];


    for(int i = 0; i < n; i++) {
        cin >> array[i];
        }
    for(int i = 0; i < n; i++) {
        int sumaDerecha= 0;;
        for (int j = i + 1; j < n; j++){
            sumaDerecha += array[j];
        }
        if (array[i] > sumaDerecha){
        cout << i << " ";
    }
}

    return 0;
}
