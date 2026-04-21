#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int pares= 0;
    int impares = 0;
    int par = 0;
    int impar =0 ;

    int arr[100];


    for (auto i{0};i < n; i++){
        cin >> arr[i];
    }

    for (auto i{0}; i <n; i++ ){
      if (arr[i]% 2 ==0){
            pares += arr[i];
            par++;
    } if (arr[i]% 2 !=0) {
        impares += arr[i];
        impar++;

    }
    }
    cout << "Suma pares: " << pares << " cantidad pares: " << par <<  endl;
    cout << "Suma impares: " << impares << " cantidad impares: " << impar <<  endl;

    return 0 ;
}


