#include <iostream>
using namespace std;

void kuadratkan(int &Dafa)
{
    Dafa = Dafa * Dafa;
}

int main()
{
    int Dafa;

    cout << "Nilai awal: ";
    cin >> Dafa;

    kuadratkan(Dafa);
    cout << "Nilai setelah dikuadratkan: " << Dafa << endl;

    return 0;
}