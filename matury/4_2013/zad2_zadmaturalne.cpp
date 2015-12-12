#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main ()
{
    string napis;
    ifstream wczyt ("napisy.txt");
    int l=0,a,c,b,d,e,f,g,h,j,k,m,n,o,u,p,r;
    while (!wczyt.eof())
    {
        wczyt >> napis ;
        if ( napis.size() % 2 == 0){
            l++;}

        a=0;
        b=0;
        c=0;
        // koniec podpunktu a)
        for ( int i = 0 ; i < napis.size() ; i++ ){
            if( napis[i] == '0')
                a++;
            else
                b++;

        }

        if( a == b)
                c++;
        // koniec podpunktu b)
        d=0;
        e=0;
        f=0;
        g=0;
        for (int i = 0 ; i < napis.size() ; i++ ){
            if ( napis[i] == '0')
                d++;
            if ( napis[i] == '1' )
                f++;
        }
        if ( d == napis.size() ){
            e++;
        }

        if ( f == napis.size() ){
            g++;
        }
    //koniec podpunktu c)
        h=0;
        j=0;
        k=0;
        m=0;
        n=0;
        o=0;
        u=0;
        p=0;
        r=0;
        if ( napis.size() == 2 )
            h++;
        if ( napis.size() == 3 )
            j++;
        if ( napis.size() == 4 )
            k++;
        if ( napis.size() == 5 )
            m++;
        if ( napis.size() == 6 )
    }
    cout << "wyrazy o parzytej dlugoci " << l << endl;
    cout << "napisy, ktore zawieraja taka sama ilosc zer i jedynek " << c << endl;
    cout << "wyrazow skladajacych sie z samych zer jest " << e << endl;
    cout << "wyrazow skladajacych sie z samych jedynek jest " << g << endl;
    cout << "napisow dwu-znakowych jest " << h << endl;
    cout << "napisow trzy-znakowych jest " << j << endl;
    cout << "napisow cztero-znakowych jest " << k << endl;
    cout << "napisow piecio-znakowych jest " << m << endl;


}
