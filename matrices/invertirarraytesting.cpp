#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int lista[100];

    for (auto i{0};i< n;i++) cin >> lista[i];

    /*for (auto i{0};i < n /2 ;i++){
        int temp = lista[i];
        lista[i] = lista[n - i -1 ];
        lista[n - i -1 ] = temp;
    } # primera reversa por mitad test solo
*/


   /* con decremento ----->*/ for (int i =n -1 ;i >=0 ;i--){
                                cout << lista[i] << " ";
                            }


    //for (auto i{0};i< n;i++) cout << lista[i] << " ";
    
    
    return 0;

}