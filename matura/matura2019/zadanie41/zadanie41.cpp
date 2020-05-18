#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    vector<int> pot;

    int p = 1;
    for(int i = 0; i<11; i++)
    {
        pot.emplace_back( p );
        p = p * 3;
    }

    int a;
    int licznik = 0;
    ifstream dane("liczby.txt");

    while( dane >> a ) { //
        if( find( pot.begin(), pot.end(), a ) != pot.end() ) {
            licznik++;
        }
    }

    ofstream wynik("wynik4.txt");
    wynik << "4.1: " << licznik << endl;

    return 0;
}
