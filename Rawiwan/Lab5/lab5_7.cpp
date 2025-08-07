#include <iostream>
using namespace std;
int main()
{
    char Ch;
    int count = 0;

    string Str = 0;
    cout << "Enter String : ";
    while (Ch = cin.get()!= '\n')
    {
        count++;
        Str += Ch;
    }
    cout << "length of String (" << Str << ")is ";
    cout << count << endl;
    return 0;
}



