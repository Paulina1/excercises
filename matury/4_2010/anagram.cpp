#include <iostream>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;
int main ()
{

    string slowo;
    ifstream wczyt ( "anagram.txt" );
    ofstream wynik ("odp_4a.txt");

    while (!wczyt.eof()){
        wczyt >> slowo;
        sort ( slowo.begin() , slowo.end() );
        for ( int i = 0 ; i < slowo.size() ; i++ ){

        }




    }
}

