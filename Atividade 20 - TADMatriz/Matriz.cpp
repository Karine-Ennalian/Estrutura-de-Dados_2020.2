// Implementacao do TAD Matriz
#include <iostream>
#include "Matriz.h"
using namespace std;
 
Matriz:: Matriz(int l, int c){

    this->_l = l;
    this->_c = c;

    _M = new float*[_l];
    for (int i = 0; i < _l; i++)
    {
        float *vetor = new float[_c];
        _M[i] = vetor;
    }
}

        
Matriz::~Matriz(){
    for (int i = 0; i < _l; i++)
    {
        delete[] _M[i];
    }
    delete[] _M;
    cout << "matriz deletada" << endl;
}

        
int Matriz::linhas(){
    return _l;
}

        
int Matriz::colunas(){
    return _c;
}

       
void Matriz::imprime(int largura){
    for (int i = 0; i < _l; i++)
    {
        for (int j = 0; j < _c; j++)
        {
            cout << _M[i][j] << "\t";
        }
        cout << endl;
    }
}


float Matriz::valor(int i, int j){
    return _M[i][j];
}


void Matriz::atribui(float v, int i, int j){
    _M[i][j] = v;
}


Matriz *Matriz::soma(Matriz *B){
    Matriz* C = new Matriz(_l, _c);
    for (int i = 0; i < _l; i++)
    {
        for (int j = 0; j < _c; j++)
        {
            double soma = this->_M[i][j] + B->_M[i][j];
            C->atribui(soma, i, j);
        }
        
    }
    return C;
} 


Matriz *Matriz::multiplica(Matriz *B){
    Matriz* C = new Matriz(_l, _c);
    for (int i = 0; i < _l; i++)
    {
        for (int j = 0; j < _c; j++)
        {
            double mult = 0;
            for (int r = 0; r < _l; r++)
            {
                double mult = this->_M[i][r] * B->_M[r][j];
            }
            C->atribui(mult, i, j);
        }   
    }
    return C;
}   