#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    double time;

    cout << "# What time ====================" << endl;

    cout << "enter name: ";
    getline(cin, name);

    cout << "enter time: ";
    cin >> time;

    cout << "================================" << endl;
    cout << "Result" << endl;

    if ((time >= 0.00) && (time < 24.00))
    {
        if ((time >= 0.00)&&(time < 12.00))
            cout << "Good Morning, \"" << name << "\"" << endl;
        else if ((time >= 12.00)&&(time < 18.00))
            cout << "Good Afternoon, \"" << name << "\"" << endl;
        else if ((time >= 18.00)&&(time < 24.00))
            cout << "Good Evening, \"" << name << "\"" << endl;

        
        int hour = (int)time;
        int minute = ((int)(time * 100)) % 100;

        cout << "this time is : " << hour << ":";
        if (minute < 10) cout << "0";  
        cout << minute << endl;
    }
    else
    {
        cout << "Time is out of range" << endl;
    }

    return 0;
}
