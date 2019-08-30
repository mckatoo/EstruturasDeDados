#include <iostream>

using namespace std;
void Multiplica()
{
    int tamanhoVetor = 10;
    double A[tamanhoVetor], x = 0, M[tamanhoVetor];
    int i = 0;
    for (i = 0; i < tamanhoVetor; i++)
    {
        cout << "INFORME O " << i + 1 << "º VALOR:"
             << "\n";
        cin >> A[i];
    }
    cout << "INFORME O MULTIPLICADOR DO VETOR:"
         << "\n";
    cin >> x;
    for (i = 0; i < tamanhoVetor; i++)
    {
        M[i] = A[i] * x;
        cout << i + 1 << "º VALOR MULTIPLICADO: " << M[i] << "\n";
    }
}

int main(int argc, char **argv)
{

    Multiplica();

    return 0;
}
