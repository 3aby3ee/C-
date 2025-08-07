#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x < 3; x++)
    {
        cout << "x = " << x << ";";
        for (int i = 0; i < 20; i++)
        {
            if (i == 5 || i == 6 || i == 7)
                continue;
            if (i == 15)
                break;
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}