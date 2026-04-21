#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[100];
    

    for(auto i {0};i < n; i++) cin >> array[i];
    int uno = array[1];
    for (auto i {1};i < n; i++){
        uno++;
        if (array[i] > uno){
            cout << array[i] << " ";
        }

    }
    return 0;

}