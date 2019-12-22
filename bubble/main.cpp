#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tablica[5];
    int ile = 5;

    srand( time(NULL) );
    for (int i = 0; i < ile; i++)
    {
        tablica[i] = rand() % 90 + 10;
    }

    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ", ";
    }

    for (int j = 0; j < ile - 1; j++)
    {
        for (int i = 0; i < ile - 1 -j; i++)
        {
            if (tablica[i] > tablica[i + 1])
            {
                int rob = tablica[i];
                tablica[i] = tablica[i + 1];
                tablica[i + 1] = rob;
            }
        }
    }

    cout << "_____" << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] <<  ", ";
    }
    return 0;
}
