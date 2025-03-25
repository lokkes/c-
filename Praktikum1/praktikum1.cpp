#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int i, j;

    for (i = 1; i <= 4; i++)
    {
        cout << "| dec hex char ";
    }
    cout << "| ";
    cout << endl;
    cout << endl;

    int kbase = 0;

    for (j = 0; j <= 31; j++)
    {

        int k = kbase;
        for (int count = 0; count <= 3; count++)
        {

            cout << "|" << " " << setfill('0') << setw(3) << dec << k << "  "
                 << hex << setw(2) << k << "  "
                 << right << dec << char((k >= 32 && k <= 126) ? k : '.') << "   ";
            k += 32;
        }

        kbase++;
        cout << "|" << endl;
    }
    return 0;
}
