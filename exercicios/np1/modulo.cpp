#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float score = 5.58;
    score = score + 10 / 2 + 10 % 3;
    // cout.setf(ios::fixed | ios::showpoint);
    // cout.precision(2);

    // cout << "media = " << setw(8) << score / 3.0 << endl;
    cout << "media = " << score / 3.0 << endl;
    return 0;
}
