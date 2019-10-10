#include <iostream>
#include <string>
using namespace std;

int main()
{
    int menu = 9999;
    while (menu != 0)
    {
        cout << "----==== MENU ====----\n";
        cout << "ESCOLHA UM ITEM DO MENU\n";
        cout << "[1]ITEM 1\n";
        cout << "[2]ITEM 2\n";
        cout << "[0]SAIR\n";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "FUNÇÃO DO ITEM 1\n";
            break;
        case 2:
            cout << "FUNÇÃO DO ITEM 2\n";
            break;
        default:
            break;
        }
        cout << "----==============----\n";
    }

    return 0;
}
