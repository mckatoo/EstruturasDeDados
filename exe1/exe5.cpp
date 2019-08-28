#include <iostream>

using namespace std;

void Tamanho()
{
    int N = 2, i = 0;

    cout << "Informe o tamanho do vetor em números inteiros: "
         << "\n";
    cin >> N;

    double A[N];
    double B[N];
    double Soma[N];
    for (i = 1; i <= N; i++)
    {
        cout << "A - Informe o " << i << "º valor: "
             << "\n";
        cin >> A[i];
        cout << "B - Informe o " << i + 1 << "º valor: "
             << "\n";
        cin >> B[i];
        Soma[i] = A[i] + B[i];
    }
    for (i = 1; i <= N; i++)
    {
        cout << "Soma dos vetores"
             << "\n"
             << i << "º Número: " << Soma[i] << "\n";
    }
}

int main(int argc, char **argv)
{

    Tamanho();

    return 0;
}
