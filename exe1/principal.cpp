#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string nome[10];
    string nome_para_pesquisar, resultado_da_pesquisa = "NÃO ACHEI.\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "INFORME O NOME DA " << i + 1 << " PESSOA.\n";
        cin >> nome[i];
    }

    cout << "INFORME UM NOME PARA PESQUISAR.\n";
    cin >> nome_para_pesquisar;

    for (int i = 0; i < 10; i++)
    {
        if (nome[i] == nome_para_pesquisar)
        {
            resultado_da_pesquisa = "ACHEI\n";
        }
    }

    cout << resultado_da_pesquisa;

    return 0;
}
