#include <iostream>

using namespace std;

string imie; int liczba;
int main()
{
    cout << "Podaj Imie:";
    cin >>imie;
    cout<<"Podaj Liczbe calkowita:";
    cin>>liczba;

    for(int i=1; i<=liczba; i++)
    {
        cout << i <<"." << imie << endl;
    }
    return 0;
}
