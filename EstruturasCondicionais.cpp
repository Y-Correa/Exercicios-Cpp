#include <iostream>

using namespace std;

int main() 
{
    float nota1, nota2;

    cout <<"Informe a nota 1:\n";
    cin >> nota1;
    cout <<"Informe a nota 2:\n";
    cin >> nota2;

    float media = (nota1 + nota2)/2;

    cout <<"Media: " << media << endl;

    //Compareções: Igual == , Diferente != 

    //if (media >= 5)
    //{
    //    cout <<"Aluno Aprovado";
    //}
    //else
    //{
    //    cout <<"Aluno Reprovado";
    //}

    //Notas: 0-2.5 D , 2.5-5 C , 5-7.5 B , 7.5-10 A

    if (media <2.5)
    {
        cout <<"Nota Final: D\n";
    }
    else
    {
        if (media <5)
        {
            cout <<"Notal Final: C\n";
        }
        else
        {
            if (media <7.5)
            {
                cout <<"Nota Final: B\n";
            }
            else
            {
                cout <<"Nota Final: A\n";
            }
        }
    }


    return 0;
}