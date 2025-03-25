#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

double mysin(int x)
{

    const double pi = 3.141592653589793;
    double rad = x * pi / 180.0; // umrechnung
    return mysin(rad);
}

double mysin(double x)
{

        double fv = 0;
        double cv = x;

        for (int i = 1; i < 10; i++)
        {
            // sinx calculation 
            fv += cv;
            cv = -cv * (x * x) / ((2 * i) * (2 * i + 1));
        }

        return fv;
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        cout << "Geben sie ein winkel in Bogenmaß oder  Grad als ganzzahligen Parameter : " << endl;
        return 1;
    }

//atof ist falsh


    double winkel = atof(argv[1]);
    double x = winkel; // users input
   
    cout << "sin " << x << "ist" << " " << fixed << setprecision(5) << mysin(winkel) << endl;

    return 0;
}
