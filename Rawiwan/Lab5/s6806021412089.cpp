// 6806021412089 รวิวรรณ เชียงดา
#include <iostream>
#define PI 3.1459F
using namespace std;
float calCircle();
float calTritangle();
float calRetangle();
int main()
{
    char Choise;
    float Area;
    for (;;)
    {
        cout << "Program Calculate Area" << endl;
        cout << "1,C,c           : Circle" << endl;
        cout << "2,T,t           : Tritangle " << endl;
        cout << "3,R,r           : Retangle " << endl;
        cout << "4,x,X,e,E       : Exit " << endl;
        cout << "Enter your choise number : ";

        cin >> Choise;
        cout << "Choise" << Choise << endl;

        if (Choise == '1' || Choise == 'C' || Choise == 'c')
        {
            calCircle();
        }
        else if (Choise == '2' || Choise == 'T' || Choise == 't')
        {
            calTritangle();
        }
        else if (Choise == '3' || Choise == 'R' || Choise == 'r')

        {
            calRetangle();
        }
        else if (Choise == '4' || Choise == 'x' || Choise == 'X' || Choise == 'e' || Choise == 'E')
        {
            cout << "...Exit Program ...\n";
            break;
        }
        else
        {
            cout << "Your choose out of range is not process.\n";
        }
    }
    return 0;
}

float calCircle()
{
    float Radius;
    float Area;
    cout << "Enter radius :";
    cin >> Radius;
    Area = PI * Radius * Radius;
    cout << "Area of Circle = " << Area << endl;
    return Area;
}
float calTritangle()
{
    float Base, Hight;
    float Area;
    cout << "Enter Base: ";
    cin >> Base;
    cout << "Enter Hight: ";
    cin >> Hight;
    Area = 0.5 * Base * Hight;
    cout << "Area of Tritangle =" << Area << endl;
    return Area;
}
float calRetangle()
{
    float Width, Length;
    float Area;
    cout << "Enter Width: ";
    cin >> Width;
    cout << "Enter Length: ";
    cin >> Length;
    Area = Width * Length;
    cout << "Area of Retangle =" << Area << endl;
    return Area;
}
