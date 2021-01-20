#include <iostream>

using namespace std;

int fatorialrec (int numero){
    if (numero == 0)
    {
        return 1;
    }else if (numero == 2)
    {
        return 2;
    }else
    {
        return numero * (fatorialrec(numero - 1));
    }
}

int main(int argc, char const *argv[])
{
    int numero (0);
    cin >> numero;

    cout << fatorialrec (numero) << endl;

    return 0;
}
