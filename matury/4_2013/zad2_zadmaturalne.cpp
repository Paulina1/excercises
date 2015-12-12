#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main ()
{
    string napis;
    int parzyste = 0, zera = 0, jedynki = 0, rowne = 0;
    int l_zer, l_jedynek;
    ifstream wczyt("napisy.txt");

    int liczba_znakow[14]; //od 2 do 16, przesuniecie o 2
    for (int i = 0; i < 14; i++) liczba_znakow[i] = 0;

    while (!wczyt.eof())    {
        wczyt >> napis ;

        if ( napis.size() % 2 == 0) parzyste++;
        // koniec podpunktu a)
        l_zer = l_jedynek = 0;
        for ( int i = 0 ; i < napis.size() ; i++ )  {
            if (napis[i] == '0') l_zer++;
            else l_jedynek++;
        }

        if (l_zer == l_jedynek) rowne++;
        else if (l_zer == napis.size()) zera++;
        else if (l_jedynek == napis.size()) jedynki++;
        //koniec podpunktu b) i c)
        liczba_znakow[napis.size() - 2]++;
        //koniec podpunktu d)
    }
    cout << "wyrazy o parzytej dlugoci " << parzyste << endl;
    cout << "napisy, ktore zawieraja taka sama ilosc zer i jedynek " << rowne << endl;
    cout << "wyrazow skladajacych sie z samych zer jest " << zera << endl;
    cout << "wyrazow skladajacych sie z samych jedynek jest " << jedynki << endl;
    for (int i = 0; i < 14; i++)    {
        cout << "napisow " << i <<"-znakowych jest " << liczba_znakow[i] << endl;
    }

    return 0;
}
