#include <iostream>

using namespace std;

int fibonacciRec(int numero){
    if (numero == 1 || numero == 2)
    {
        return 1;
    }else if (numero >= 3)
    {
        return fibonacciRec(numero - 1) + fibonacciRec(numero - 2);
    }
}

int main(int argc, char const *argv[])
{
    int numero (0);

    cin >> numero;

    cout << fibonacciRec (numero) << endl;
    return 0;
}
