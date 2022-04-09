#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    int nww;
    int iloczyn;
    iloczyn = a * b;
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    nww = iloczyn / a;
    return a;

}

int main()
{
    int nww;
    int a;
    int b;

    int iloczyn;

    cout << "Podaj 1 liczbe : ";
    cin >> a;
    cout << "Podaj 2 liczbe : ";
    cin >> b;

    iloczyn = a * b;
    nww = iloczyn / NWD(a, b);

    cout << "NWW to " << nww << endl;
    cout << endl;
    cout << "NWD to " << NWD(a, b) << endl;

    return 0;
}