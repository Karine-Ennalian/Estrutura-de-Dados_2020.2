#include <iostream>

using namespace std;

void torreHanoi (int tamanho, char inicio, char fim, char aux){
    if (tamanho > 0)
    {
        torreHanoi (tamanho - 1, inicio, aux, fim);
        cout << inicio << " -> " << fim << endl;
        torreHanoi(tamanho - 1, aux, fim, inicio);
    }
    
}

int main(int argc, char const *argv[])
{
    int tamanho (0);
    char inicio = 'A';
    char aux = 'B';   
    char fim = 'C';
    
    cin >> tamanho;

    torreHanoi(tamanho, inicio, fim, aux);
    
    return 0;
}
