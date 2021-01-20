#include <iostream>
using namespace std;

struct Aluno
{
    char nome[50];
    char diciplina[50];
    int matricula;
    double nota;

};

/*void cadastro_aluno (Aluno aluno){
    
    cout << "Digite o nome da(o) aluna(o): " << endl;
    //cin >> aluno.nome;
    cin.ignore();
    cin.getline(aluno.nome, 50);
    cout << "Digite a matricula: " << endl;
    cin >> aluno.matricula;
    cout << "Digite o nome da diciplina: " << endl;
    //cin >> aluno.diciplina;
    cin.ignore();
    cin.getline(aluno.diciplina, 50);
    cout << "Digite a nota: " << endl;
    cin >> aluno.nota;
}*/

bool avaliar (Aluno aluno){

    if (aluno.nota >= 7)
    {
        cout << aluno.nome << " aprovado(a) em " << aluno.diciplina << endl;
        return true;
    }else
        cout << aluno.nome << " reprovado(a) em " << aluno.diciplina << endl;
        return false;
    
}

int main()
{   

    Aluno aluno;

    cout << "Digite o nome da(o) aluna(o): " << endl;
    //cin >> aluno.nome;
    //cin.ignore();
    cin.getline(aluno.nome, 50);
    cout << "Digite a matricula: " << endl;
    cin >> aluno.matricula;
    cout << "Digite o nome da diciplina: " << endl;
    //cin >> aluno.diciplina;
    cin.ignore();
    cin.getline(aluno.diciplina, 50);
    cout << "Digite a nota: " << endl;
    cin >> aluno.nota;
    
    //cadastro_aluno (aluno);
    avaliar (aluno);

    return 0;
}
