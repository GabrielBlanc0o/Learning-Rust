#include <iostream>
#include <vector>

using namespace std;

int main()
{

    const int FILAS = 4;
    const int COLUMNAS = 3;
    int suma;
    int notaAlta = 0;
    int filaMax = 0, colMax = 0;

    vector<vector<int>> MATRIZ(FILAS, vector<int>(COLUMNAS));

    cout << "Ingresa las 3 notas de los 4 estudiantes:" << endl; 
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cin >> MATRIZ[i][j];
        }
    }

    for (int i = 0; i < FILAS; i++)
    {
        int suma = 0;
        for (int j = 0; j < COLUMNAS; j++)
        {
            suma += MATRIZ[i][j];
            if(MATRIZ[i][j] > notaAlta){
                notaAlta = MATRIZ[i][j];
                filaMax = i;
                colMax = j;
            }   
        }
        float promedio = suma / 3.0;
        cout << "Promedio del estudiante " << i << " es " << promedio << endl;
    }

    return 0;
}