#include <iostream>

using namespace std;

int main(){

    int matriz [3][3]; /*= {{2, 7, 6},
                         {9, 5, 1},
                         {4, 3, 8}};

    int matriz [3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};*/
    
    int linha (0);
    int coluna (0);
    int numero (0);

    int soma (0);
    int somaLinha [linha];
    int somaColuna [coluna];
    int somaDiagPri (0);
    int somaDiagSec (0);

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


    //Soma das Linhas da Matriz
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            soma += matriz[linha][coluna];
        }
        //cout << "soma das linhas " << endl << soma << endl;
        somaLinha [linha] = soma;
        soma = 0;
    }

    //Soma das Colunas da Matriz
    for (coluna = 0; coluna < 3; coluna++)
    {
        for (linha = 0; linha < 3; linha++)
        {
            soma += matriz[linha][coluna];
        }
        //cout << "soma das colunas" << endl << soma << endl;
        somaColuna [coluna] = soma; 
        soma = 0;
    }

    //Soma da Diagonal Principal
    for (coluna = 0; coluna < 3; coluna++)
    {
        for (linha = 0; linha < 3; linha++)
        {
            if (linha == coluna)
            {
                soma += matriz[linha][coluna];
            }
        }
        somaDiagPri = soma;
    }
    //cout << "soma da Diagonal principal" << endl << somaDiagPri << endl;

    //Soma da Diagonal Secundária
    for (coluna = 0; coluna < 2; coluna++)
    {
        for (linha = 2; linha >= 0; linha--)
        {
            soma += matriz[linha][coluna];
        }
        somaDiagSec = soma;
        soma = 0;
    }
    //cout << "soma da Diagonal Secundaria" << endl << somaDiagSec << endl;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            if (somaLinha[linha] != somaColuna[coluna])
            {
                cout << "Não" << endl;
                return 0;
            }
        }
    }
    
    if (somaDiagPri != somaDiagSec)
    {
        cout << "Não" << endl;
    }
    if (somaLinha[0] != somaDiagPri)
    {
        cout << "Não" << endl;
    }
    else
    {
        cout << "Sim" << endl;
    }
    
    return 0;
}
