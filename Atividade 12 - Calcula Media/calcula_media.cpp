#include <iostream> // std::cout, std::fixed
#include <iomanip> // std::setprecision

using namespace std;

struct aluno {
   float nota[3];
   float media;
};

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a)
{
    //Feito por mim
    float media(0);

    for (int i = 0; i < 3; i++)
    {
        media += (a->nota[i])/3;
    }
    
    a->media = media;
    //Feito por mim
}

int main()
{
   aluno a;
   int i;
   for (i = 0; i < 3; i++)
      std::cin >> a.nota[i];
   
   // Chame a função 'calcula_media' passando o aluno 'a' por referência.
   //Feito por mim
   calcula_media(&a);
   
   std::cout << std::fixed;
   std::cout << std::setprecision(1) << a.media;
   
   return 0;
}