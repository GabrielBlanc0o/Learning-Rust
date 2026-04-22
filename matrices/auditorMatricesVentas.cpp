#include <iostream>
#include <vector>
using namespace std;

int main()
{

    const int FIL = 3;
    const int COL = 4;

    vector<vector<int>> MATRIZ(FIL, vector<int>(COL));

    cout << "Ingresa los datos de ventas (3x4):" << endl;
    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> MATRIZ[i][j];
        }
    }

    int umbralVenta;
    cout << "Ingresa el numero de umbral venta: ";
    cin >> umbralVenta;

    int idx = 0;
    int idy = 0;

    cout << "\n--- Resultados del Filtro ---" << endl;

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (MATRIZ[i][j] > umbralVenta)
            {
                idx = i;
                idy = j;
                cout << "Venta alta encontrada de : " << MATRIZ[i][j] << "[" << idx << "][" << idy << "]" << endl;
            }
        }
    }
    return 0;
}
