#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno
{
    int matricula;
    char nome [100];
    double media;

};

int main()
{   

    int qtd_alunos;
    int busca_Matricual (0);
    int cont (0);
    
    Aluno alunos[qtd_alunos];

    cout << "Informe a quantidade de alunos: " << endl;
    cin >> qtd_alunos;

    //cadastra os alunos
    for (int i = 0; i < qtd_alunos; i++)
    {
        cout << "Digite a matricula da(o) aluna(o) " << i + 1 << ": " << endl;
        cin >> alunos[i].matricula;
        cout << "Digite o nome da(o) aluna(o) " << i + 1 << ": " << endl;
        cin.ignore();
        cin.getline(alunos[i].nome, 100);
        cout << "Digite a nota da(o) aluna(o) " << i + 1 << ": " << endl;
        cin >> alunos[i].media;
    }

    cout << "Digite a matricula que deseja procurar: " << endl;
    cin >> busca_Matricual;

    //procura os alunos pela matricula
    for (int i = 0; i < qtd_alunos; i++)
    {
        if (alunos[i].matricula == busca_Matricual)
        {
            cout << "Nome do aluno(a): " << alunos[i].nome << endl;
            cout << fixed << setprecision(2)  << "A média é: " << alunos[i].media << endl;
            cont++;
        }
    }
    if (cont == 0)
    {
        cout << "NAO ENCONTRADA" << endl; 
    }

    return 0;
}
