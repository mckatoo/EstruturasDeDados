#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float peso, altura, imc;
    cout << "Digite seu peso:" << endl;
    cin >> peso;
    cout << "Digite sua altura" << endl;
    cin >> altura;
    imc = peso / (altura * altura);

    if (imc >= 25)
    {
        cout << "Voce esta acima do peso" << endl;
    }
    else if (imc >= 20)
    {
        cout << "Voce esta no peso ideal" << endl;
    }
    else
    {
        cout << "Voce esta abaixo do peso" << endl;
    }

    return 0;
}
