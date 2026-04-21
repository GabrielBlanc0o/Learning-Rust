#include <iostream>
using namespace std;

void saludar(string nombre){
    cout << "Hola " << nombre <<"!"<< endl;
}

int sumar(int a , int b){   
    return a +b;

}


int main(){
    saludar("Juan");
    saludar("Juan");
    int resultado = sumar(5, 3);
    cout << resultado << endl;  // 8
    return 0;    

}