#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int tamanhoDoVetor = 20;
    double alunos[tamanhoDoVetor], notas = 0, media = 0, calculador = 0;
    int acimaDaMedia = 0;
    int i = 0;
    for (i = 0; i < tamanhoDoVetor; i++)
    {
        cout << "INFORME A NOTA DO " << i + 1 << "º ALUNO\n";
        cin >> notas;
        alunos[i] = notas;
        calculador += notas;
    }
    media = calculador / i;
    for (i = 0; i < tamanhoDoVetor; i++)
    {
        if (alunos[i] > media)
            acimaDaMedia += 1;
    }
    cout << "MÉDIA DA TURNA: " << media << "\n";
    cout << "QUANTIDADE DE ALUNOS ACIMA DA MÉDIA: " << acimaDaMedia << "\n";
    return 0;
}
