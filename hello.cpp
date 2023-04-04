#include <iostream>

using namespace std;

int main()
{

    int liczba;
    cin >> liczba;

    cout << "Dzielniki liczby " << liczba << ":" << endl;

    for (int i=1;i<=liczba;i++ )
    {
        if(liczba%i==0)
        {
            cout << i << "; " ;
        }

    }
    int str;
    
    cout << endl;
}