#include <iostream>
#include <string>

using namespace std;

int main()
{

    string napis,napis2;
    int max=0;
    string podnapis;

    struct 
    {
        int ktory=0;
        int ile=1;
        string slowo;
    } Ciag;

    Ciag.slowo=napis.substr(0,1);

    cin >> napis;

    for(int k=0;k<napis.length();k++ )
    {
        napis2=napis;
        podnapis.erase(0,podnapis.length());

        for(int i=k; i<napis2.length();i++)
        {
            for(int j=0; j<=podnapis.length();j++) 
                {
                    if(napis2[i]==podnapis[j]) // jeżeli znajdziesz już użytą literę przerwij pętle
                    {
                        napis2[i]='!';
                        break;
                    }
                    else if(j==podnapis.length()) //czy to ostatnie przejście pętli 
                    {
                        podnapis=napis2.substr(k,j+1);
                        if(podnapis.length()>max)
                            max=podnapis.length();
                            break;
                        
                    }
                }
            
            if (napis2[i]=='!')
            {   
                break;
            }
        }  

        if(max>Ciag.ile)
        {
            Ciag.ile=max;
            Ciag.slowo=podnapis;

        }          
    }

    cout << "Najdluzszy podciag sklada sie z " << Ciag.ile << " liter i jest to sekwencja: " <<  Ciag.slowo << endl;

}