#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // constante para facilitar cambios futuros
    const int TAM = 4;

    // usar un vector es mas seguro para la memoria en linux
    vector<vector<int>> matriz(TAM, vector<int>(TAM));
    vector<vector<int>> transpuesta(TAM, vector<int>(TAM));

    cout << "Introduce los elementos de la matriz " << TAM << "x" << TAM << ":" << endl;

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cin >> matriz[i][j];
        }
    }

    // logica de transposicion
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\n--- Matriz Original ---" << endl;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n--- Matriz Transpuesta ---" << endl;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}