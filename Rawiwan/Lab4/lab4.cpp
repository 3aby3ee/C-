#include <iostream>
using namespace std;
int main()
{
    bool circle;
    float radius, legth, width, area;
    char choice;
    cout << "Do you want to cal area of circle (y/n):\n";
    circle = (choice == 'y' ? true : false);
    double area, radius, leghth, width;
    if (circle)
    {
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area of circle = " << area;
    }
    else
    {
        cin >> legth >> width;
        area = legth * width;
        cout << "area of Rectabgle = " << area;
    }
}