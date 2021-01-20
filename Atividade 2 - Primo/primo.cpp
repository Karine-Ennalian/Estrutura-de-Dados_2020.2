#include <iostream>

using namespace std;

bool primo (int numero){

    int div (0);

    if (numero == 1 || numero == 0)
    {
        //cout << numero << " não é primo" << endl;
        return false;
    }
    
    if (numero == 2)
    {
        //cout << numero << " é primo" << endl;
        return true;
    }

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            div++;
        }
        
    }

    if (div>2){
        return false;
    }
    else
    {
        return true;
    }
}

int main(){

    cout << "Digite o numero inicial: ";
    int comeco (0);
    cin >> comeco;
    cout << "Digite o numero final: ";
    int final (0);
    cin >> final;

    for (int i = comeco; i <= final; i++)
    {
        if (primo(i))
        {
            cout << i << endl;
        }
        
    }
    return 0;
}