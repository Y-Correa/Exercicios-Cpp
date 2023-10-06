#include <iostream>

using namespace std;


//Variáveis Globais.

#define pi 3.14;
#define favoritar cout << "Favorite esse codigo!\n\n" << endl;

void seguir()
{
    //Variáveis Locais.
    cout << "Me segue aqui no GitHub!\ngithub.com/Y-Correa\n\n" << endl;
}

int somar(int &x, int y)
{
    //Variáveis Locais.
        int soma;
    soma = x+y;
    return soma;
}

int main () 
{
    //Variáveis Locais.
    seguir();

    int a=5, b=4;
    int s;
    s = somar(a,b);

    somar(a,b);

    cout << "Soma:" << s << endl;

    cout << "Funcao Define: pi=" << pi;

    cout << endl;

    favoritar;

    system("pause");
    return 0;
}