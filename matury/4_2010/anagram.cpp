#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;
int main ()
{

    string pierwsze_slowo;
    string slowa[4];
    ifstream wczyt ( "anagram.txt" );
    ofstream wynik ("odp_4a.txt");
    ofstream wynikb ("odp_4b.txt");

    while (!wczyt.eof())    {
        wczyt >> pierwsze_slowo;
        string sort_pierwsze_slowo = pierwsze_slowo;
        sort ( sort_pierwsze_slowo.begin() , sort_pierwsze_slowo.end() );

        bool rowne = true, anagram = true;
        for (int i = 0; i < 4; i++) {
            wczyt >> slowa[i];

            string tmp = slowa[i];
            sort ( tmp.begin() , tmp.end() );

            if (tmp.size() != sort_pierwsze_slowo.size()) rowne = false;
            if (tmp != sort_pierwsze_slowo) anagram = false;
        }

        if (rowne)  {
            wynik << pierwsze_slowo << ' ';
            for (int i = 0; i < 4; i++) {
                wynik << slowa[i] << ' ';
            }
            wynik << endl;
        }

        if (anagram)  {
            wynikb << pierwsze_slowo << ' ';
            for (int i = 0; i < 4; i++) {
                wynikb << slowa[i] << ' ';
            }
            wynikb << endl;
        }
    }
}
