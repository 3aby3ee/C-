#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int X[10];
    int Y[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    const int Array_Size = 10;
    int Z[Array_Size];

    for (int i = 0; i < 10; i++)
    {
        X[i] = 0;
    }

    for (int i = 0; i < Array_Size; i++)
    {
        Z[i] = 2 + 2 * i;
    }
    cout << ":Subscript: Array X : Array Y : Array Z :\n";
    cout << setfill('=') << setw(43) << "=" << endl;
    cout << setfill(' ');
    for (int i = 0; i < Array_Size; i++){
        cout << ":"
             << setw(6) << i << "  :"
             << setw(6) << X[i] << "  :"
             << setw(6) << Y[i] << "  :"
             << setw(6) << Z[i] << "  :"
             << endl;
    }
        // cout << X[0] << endl;

        return (0);
}