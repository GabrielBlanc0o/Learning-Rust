#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int array[100];
    int contadorCeros = 0;

    for (auto i{0}; i < n; i++)
    {
        cin >> array[i];

        if (array[i] % 2 == 0)
        {
            array[i] = array[i] * 2;
        }
        else if (array[i] % 2 != 0)
        {
            array[i] = 0;
            contadorCeros++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << "";
    cout << "Numeros impares: " << contadorCeros;

    return 0;
}
