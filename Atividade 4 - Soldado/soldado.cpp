#include <iostream>

using namespace std;

int main(){

    int matriz [3][3]; /*= {{6, 2, 3},
                         {5, 4, 9},
                         {1, 8, 7}};*/

    int coluna (0);
    int linha (0);
    int numero (0);

    int contador (0);

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            cout << "Matriz 3x3 digite 9 números de 0 a 9" << endl;
            cout << "Digite o numero: ";
            cin >> numero;
            matriz[linha][coluna] = numero;
        }
    }  

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            if (matriz[coluna+1][linha] < matriz[coluna][linha])
            {
                contador++;
            } 
        }
    }
    
        cout << contador << endl;

    return 0;
}
