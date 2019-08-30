#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pArray = &array[0];

    cout << *pArray << "\n";
    cout << "\n";

    cout << "ORDEM NORMAL\n";
    for (int i = 0; i < 10; i++)
    {
        cout << *pArray << "\n";
        pArray++;
    }
    cout << "ORDEM INVERSA\n";
    for (int i = 10; i > 0; i--)
    {
        cout << *pArray << "\n";
        pArray--;
    }
    return 0;
}
