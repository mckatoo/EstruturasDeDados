#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

//protótipos
// bool par(int num);
// void mensagem();

void mensagem()
{
    cout << "Módulo 2 C++ \n";
}

bool par(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int n = 0;
    mensagem();
    cout << "Digite um número: ";
    cin >> n;
    if (par(n))
    {
        cout << "O número " << n << " é par. \n";
    }
    else
    {
        cout << "O número " << n << " é impar. \n";
    }
    return 0;
}

// void mensagem()
// {
//     cout << "Módulo 2 C++ \n";
// }

// bool par(int num)
// {
//     if (num % 2 == 0)
//         return true;
//     return false;
// }
