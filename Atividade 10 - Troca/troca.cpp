#include <iostream>

// Implemente a função 'troca'.
void troca(int *a, int *b)
{
    //Feito por mim
    int aux (0);
    
    aux = *a;
    *a = *b;
    *b = aux;
    //Feito por mim
}

int main()
{
   int x, y;
   std::cin >> x;
   std::cin >> y;
   
   // Chame a função 'troca' para trocar os valores de x e y.
    //Feito por mim
    troca(&x,&y);
   
   std::cout << x << " " << y << std::endl;
   return 0;
}