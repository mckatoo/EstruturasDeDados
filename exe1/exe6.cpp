#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 0, tamanhoDoArray = 5;
    float temperatura[tamanhoDoArray];
    float media = 0, menor = 0, maior = 0, menorAnual = 0;
    for (i = 1; i <= tamanhoDoArray; i++)
    {
        cout << "Informe a temperatura média do " << i << "º mês: "
             << "\n";
        cin >> temperatura[i];
        media += temperatura[i];
        if (i == 1)
        {
            menor = temperatura[1];
        }

        if (temperatura[i] < menor)
            menor = temperatura[i];
        else if (temperatura[i] > maior)
            maior = temperatura[i];
    }
    media /= tamanhoDoArray;
    for (i = 1; i <= tamanhoDoArray; i++)
    {
        if (temperatura[i] < media)
            menorAnual += 1;
    }
    cout << "Menor temperatura do ano: " << menor << "\n"
         << "Maior temperatura do ano: " << maior << "\n"
         << "Temperatura média anual: " << media << "\n"
         << "Número de meses em que a temperatura foi inferior a media anual: " << menorAnual << "\n";
    return 0;
}
