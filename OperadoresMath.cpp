#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=5, b=2;

    int soma=a+b;
    cout << "Soma:" << soma << endl;
    //cout << "Soma:" << a+b << endl;

    int sub=a-b;
    cout << "Subtracao:" << sub << endl;
    //cout << "Subtracao:" << a-b << endl;

    int mult=a*b;
    cout << "Multiplicacao:" << mult << endl;
    //cout << "Multiplicacao:" << a*b << endl;

    int quocdiv = a/b;
    cout << "Quociente Divisao:" << quocdiv << endl;

    int restodiv = a%b;
    cout << "Resto Divisao:" << restodiv << endl;

    float div=(float)a/(float)b;
    cout << "Divisao:" << div << endl;

    //<math.h>
    float pot = pow(a,b); //a^b
    cout << "Potencia:" << pot << endl;

    //Incremento e Decremento
    cout << "A antigo:" << a << endl;

    //a=a+1;
    //a+=1;
    //a++;
    //a+=3;
    //a=a-1;
    //a-=1;
    //a--;
    //a-=4;
    a*=2;
    
    cout << "A novo:" << a << endl;

    return 0;

}