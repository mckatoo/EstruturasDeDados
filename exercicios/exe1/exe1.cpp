#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int tamanhoDoVetor = 10;
    string nome[tamanhoDoVetor];
    string nome_para_pesquisar, resultado_da_pesquisa = "NÃO ACHEI.\n";
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cout << "INFORME O NOME DA " << i + 1 << "ª PESSOA.\n";
        cin >> nome[i];
    }

    cout << "INFORME UM NOME PARA PESQUISAR.\n";
    cin >> nome_para_pesquisar;

    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        if (nome[i] == nome_para_pesquisar)
        {
            resultado_da_pesquisa = "ACHEI\n";
        }
    }

    cout << resultado_da_pesquisa;

    return 0;
}
