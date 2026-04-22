/*
    #include <iostream>
#include <climits>
#include <vector>

using namespace std;

int mayor = INT_MIN;

int main(){

    // para matrices de tamanios personalizados

    int n,m; // f y c
    cin >> n >> m;

    vector<vector<int>> matriz (n, vector<int>(m));
}


*/

#include <iostream>
using namespace std;

int main()
{

    int matriz[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int transpuesta[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
}