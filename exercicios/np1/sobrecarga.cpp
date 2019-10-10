#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void mensagem(int n)
{
    cout << "número: " << n << endl;
}

void mensagem()
{
    cout << "Exemplo de sobrecarga.\n";
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    mensagem();
    mensagem(49);
    return 0;
}
