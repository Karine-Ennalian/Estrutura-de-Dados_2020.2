#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno
{
    string nome;
    string diciplina;
    int matricula;
    double nota;

};

/*void cadastro_aluno (Aluno aluno){
    
    cout << "Digite o nome da(o) aluna(o): " << endl;
    cin >> aluno.nome;
    //getline(cin, aluno.nome);
    //std::cin.ignore(256, '\n');
    cout << "Digite a matricula: " << endl;
    cin >> aluno.matricula;
    cout << "Digite o nome da diciplina: " << endl;
    cin >> aluno.diciplina;
    //getline(cin, aluno.diciplina);
    //std::cin.ignore(256, '\n');
    cout << "Digite a nota: " << endl;
    cin >> aluno.nota;

}*/

bool maior_nota (Aluno aluno1, Aluno aluno2){

    if(aluno1.diciplina == aluno2.diciplina){
        if (aluno1.nota > aluno2.nota)
        {
            cout << aluno1.nome << " , " << std::fixed << std::setprecision(1) << aluno1.nota << endl;
            return true;
        }if (aluno1.nota == aluno2.nota)
        {
            cout << aluno1.nome << " e " << aluno2.nome << " , " << std::fixed << std::setprecision(1) << aluno1.nota << endl;
            return true;
        }else{
            cout << aluno2.nome << " , " << std::fixed << std::setprecision(1) << aluno2.nota << endl;
            return false;
        }
    }else
    {
        cout << "Os alunos registrados não estão na mesma disciplina" << endl;
        return false;
    }

}

int main()
{   

    Aluno aluno1;
    Aluno aluno2;

    cout << "Digite o nome da(o) aluna(o) 1: " << endl;
    cin >> aluno1.nome;
    //getline(cin, aluno.nome);
    //std::cin.ignore(256, '\n');
    cout << "Digite a matricula 1: " << endl;
    cin >> aluno1.matricula;
    cout << "Digite o nome da diciplina 1: " << endl;
    cin >> aluno1.diciplina;
    //getline(cin, aluno.diciplina);
    //std::cin.ignore(256, '\n');
    cout << "Digite a nota 1: " << endl;
    cin >> aluno1.nota;

    cout << "Digite o nome da(o) aluna(o) 2: " << endl;
    cin >> aluno2.nome;
    //getline(cin, aluno.nome);
    //std::cin.ignore(256, '\n');
    cout << "Digite a matricula 2: " << endl;
    cin >> aluno2.matricula;
    cout << "Digite o nome da diciplina 2: " << endl;
    cin >> aluno2.diciplina;
    //getline(cin, aluno.diciplina);
    //std::cin.ignore(256, '\n');
    cout << "Digite a nota 2: " << endl;
    cin >> aluno2.nota;
    
    //cadastro_aluno (aluno);
    maior_nota(aluno1, aluno2);
    

    return 0;
}
