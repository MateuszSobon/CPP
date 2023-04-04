#include <iostream>

using namespace std;

int Fibonacci(int liczba)
{
    int fib[10000];
    fib[0]=0;
    fib[1]=1;
    int wynik=fib[liczba];

    for(int i=2; i<=liczba; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        if(i==liczba)
        {
            wynik=fib[i];
        }
    }

    return wynik;
}

int main()
{
    int element;
    cin >> element ;
    if (element<0)
    {
        cout << "Blad, liczba mniejsza od zera";
        exit(0);
    }

    cout << Fibonacci(element) << endl;

}