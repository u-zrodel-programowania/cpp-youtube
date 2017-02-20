#include <iostream>
#include <iomanip>

using namespace std;

double f(double x)
{
    return x*x;
}

int main()
{
    double a, b, dx;
    cout << "Podaj a: " ;
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj szerokosc trapezu: " ;
    cin >> dx;
    double x = a;
    double pole = 0;
    while(x < b)
    {
        x = x + dx; // x += dx
        double pt = ( f(x) + f(x+dx) ) * 0.5 * dx;
        pole = pole + pt;
    }

    cout << "Pole wynosi: " << setprecision(10) << pole << endl;

    return 0;
}
