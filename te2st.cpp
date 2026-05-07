#include <iostream>
#include <string>

using namespace std;

// esta función lee la entrada y se llama a sí misma si ve un paréntesis
string resolver() {
    string res = "";
    char c;

    while (cin >> c && c != ')') {
        if (c >= '0' && c <= '9') {
            int n = c - '0'; // convierte el char a número
            cin >> c;        // lee el '(' que sigue al número
            
            string sub = resolver(); 
            
            for (int i = 0; i < n; i++) res += sub;
        } else {
            res += c; // es un charsito :VVV
        }
    }
    return res;
}

int main() {
    cout << "Escribe la cadena: ";
    cout << "Resultado: " << resolver() << endl;
    return 0;+


}

