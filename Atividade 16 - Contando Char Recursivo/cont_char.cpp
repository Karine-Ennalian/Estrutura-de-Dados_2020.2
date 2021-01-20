#include <iostream>
#include <cstring>
using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int conta_char_rec(char s[], int n, char c, int i, int cont)
{
    if (n < 0)
    {
        return cont;
    }
    if(n >= 0){
        if (s[i] == c)
        {
            cont ++;
        }
    }
    conta_char_rec(s, n - 1, c, i + 1, cont);
}

int main(){
   char s[102], c;
   
   cin.get(s, 102);
   cin.ignore();
   cin >> c;
   
   int n = strlen(s); // pega número de caracteres de s
   
   // Chame a função aqui para imprimir na tela o número de ocorrências
   cout << conta_char_rec(s, n, c, 0, 0) << endl;
   
   return 0;
}