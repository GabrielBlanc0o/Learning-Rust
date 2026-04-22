#include <iostream>
#include <vector>
using namespace std;

int main()
{

    const int TAM = 3;

    vector<vector<int>> MATRIZ(TAM, vector<int>(TAM));

    cout << "Llena la matriz 3x3 \n";
    for (auto i{0}; i < TAM; i++)
    {
        for (auto j{0}; j < TAM; j++)
        {
            cin >> MATRIZ[i][j];
        }
    }

    int f, c;
    cout << "Ingresa una coordenada: (fila y columna) \n";
    cin >> f >> c;

    bool posicionOk = false;
    int idx = 0;
    int idy = 0;

    if (f >= 0 && f < TAM && c >= 0 && c < TAM) // PARA EVITAR ERROR SEGFAULT
    {
        int valorReferencia = MATRIZ[f][c];

        for (auto i{0}; i < TAM; i++)
        {
            for (auto j{0}; j < TAM; j++)
            {
                if (MATRIZ[i][j] == valorReferencia)
                {
                    posicionOk = true;
                    idx = i;
                    idy = j;
                }
            }
        }
        cout << "\n--- MATRIZ ACTUAL ---" << endl;
        for (auto i{0}; i < TAM; i++)
        {
            for (auto j{0}; j < TAM; j++)
            {
                cout << MATRIZ[i][j];
            }
            cout << endl;
        }
        if (posicionOk)
        {
            cout << "\nEl numero en [" << f << "] [" << c << "] es el " << valorReferencia << endl;
        }
    }
    else
    {
        cout << "Esa coordenada no existe en este mapa." << endl;
    }
    return 0;
}


