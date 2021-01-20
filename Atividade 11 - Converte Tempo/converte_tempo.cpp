#include <iostream>

using namespace std;

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg)
{
    //Feito por mim
    int seg_em_hora (3600);

    *hor = (segundos / seg_em_hora);
    *min = ((segundos - (seg_em_hora * *hor)) / 60);
    *seg = (segundos - (seg_em_hora * *hor) - *min * 60); 
    //Feito por mim
}

int main()
{
   int tempo(0);
   int h (0);
   int m (0);
   int s (0);

   std::cin >> tempo;
   
   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   //Feito por mim
   converte_tempo(tempo, &h, &m, &s);
   
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
   
   std::cout << h << ":" << m << ":" << s;
   
   return 0;
}