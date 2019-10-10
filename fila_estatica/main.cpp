#include <iostream>
#include <string>
#include <queue>
using namespace std;

/** 
 * Nome: Milton Carlos Katoo                    RA: 31010005290
 * Nome: Aguinaldo Santana                      RA: 31010005454
 * Nome: Kauê Amauri de Oliveira Molinari       RA: 31010005303
 */
int main()
{
    queue<int> fila; // Declara a Fila

    // inserindo na fila
    for (int i = 0; i < 100; i++) // Recebe 100 valores na fila de 0 à 99
    {
        fila.push(i);
    }

    cout << "Ultimo elemento: " << fila.back() << "\n\n";     // Mostra o último elemento da fila
    cout << "Tamanho do elemento: " << fila.size() << "\n\n"; // Mostra o tamanho da fila

    if (fila.empty())               // Verifica se a fila está vazia
        cout << "Fila vazia!!\n\n"; // Exibe a Fila vazia !!
    else
        cout << "Fila NAO vazia!!\n\n"; // Senão exibe Fila NAO vazia !!

    cout << "Primeiro elemento: " << fila.front() << "\n\n"; // Exibe o primeiro elemento da fila.

    cout << "Mostrando todos os elementos: ";

    while (!fila.empty()) // Loop para mostrar todos os itens da fila
    {
        int e = fila.front();
        cout << e << " ";
        fila.pop(); // Remove elemento do início
    }

    for (int i = 0; i < 100; i++) // Inserindo novamente na fila
    {
        fila.push(i);
    }

    cout << "\n\nTamanho da fila: " << fila.size() << "\n"; // Exibe o tamanho da fila

    return 0;
}