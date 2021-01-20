#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(double numero){
    
    double fat (1);

    for (int i = 0; i <= numero; i++)
    {
        if(i == 0 || i == 1)
        {
            fat = 1;
        }
        if(i >= 2)
        {
            fat *= i; 
        }
    }
    return fat;
}

double euler(double numero){

    double euler (0);

    for(int i = 0; i <= numero; i++)
    {   
        euler += + 1/fatorial(i);
    }

    return euler;

}

int main(){
    
    cout << "Digite um numero: ";
    double fatNum (0);
    cin >> fatNum;

    cout << fixed << setprecision(6) << euler(fatNum) << endl;

    return 0;
}