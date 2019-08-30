#include <iostream>

using namespace std;

void Inverter()
{
    int tamanhoDoVetor = 5;
    double numeros[tamanhoDoVetor];
    int i = 0;
    for (i = 1; i <= tamanhoDoVetor; i++)
    {
        cout << "Informe o " << i << "º número: "
             << "\n";
        cin >> numeros[i];
    }
    for (i = tamanhoDoVetor; i > 0; i--)
    {
        cout << i << "º Número: " << numeros[i] << "\n";
    }
}

int main(int argc, char **argv)
{

    Inverter();

    return 0;
}
