//TA ERRADO ESSA PORRA

#include <iostream>

using namespace std;

int somaTriangulo(int vetor[], int i, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = somaTriangulo(vetor += 1, i + 1, tamanho - 1);
        cout << vetor[i] << " " << vetor[i + 1] << endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int vetor[100];
    int tamanho (0);
    int numero (0);

    cin >> tamanho;
    
    for (int i = 0; i < tamanho; i++)
    {
        cin >> numero;
        vetor[i] = numero;
    }
    
    cout << somaTriangulo(vetor, 0, tamanho) << endl;
    
    return 0;
}
