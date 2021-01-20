#include <iostream>
using namespace std;

int main()
{
    
    int vetor [50];
    int tamanho_vetor (0);
    int numero (0);

    //recebe número referente ao tamanho do vetor
    cout << "Digite o tamanho do vetor que deseja: " << endl;
    cin >> tamanho_vetor;

    //incrementa o vetor
    for (int i = 0; i < tamanho_vetor; i++)
    {
        cout << "Digite o número que deseja na posição " << i + 1 << ": " << endl;
        cin >> numero;
        vetor [i] = numero;
    }

    //imprime o vetor
    for (int i = 0; i < tamanho_vetor; i++)
    {
        cout << vetor[i] << " " << endl; 
    }
    
    //testa se o vetor precisa ou não de ajuste
    for (int i = 0; i < tamanho_vetor - 1; i++)
    {
        if (vetor [i] > vetor [i + 1])
        {
            cout << "precisa de ajuste" << endl;
            return false;
        }
    }
        cout << "ok" << endl;

    return 0;
}
