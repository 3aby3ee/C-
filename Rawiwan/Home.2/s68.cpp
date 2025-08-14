// 6806021212127 วงศกร วงค์มา
#include <iostream>
#define PI 3.1459F
using namespace std;

float calCircle();
float caltriangle();
float calRectangle();

int main() {
    char choice;
    float Area;

    for (;;)
    {
    
        cout << "Program Calculate Area " << endl;
        cout << "1,C,c     :circle"       << endl;
        cout << "2,T,t     :triangle"     << endl;
        cout << "3,R,r     :Rectangle"    << endl;
        cout << "4,x,X,e,E :Exit"         << endl;
        cout << "Please select your choice : ";

    cin >> choice;
    cout << choice << endl;

    if(choice == '1'|| choice == 'C' || choice == 'c'){
        calCircle();
    }
    else if ( choice == '2' || choice == 'T' || choice == 't'){
        caltriangle();
    }
    else if ( choice == '3' || choice == 'R' || choice == 'r'){
        calRectangle();
    }
    
    else if ( choice == '4' || choice == 'x' || choice == 'X' || choice == 'e' || choice == 'E'){
        cout << ". . .Exit program . . ." << endl; break;
    }
    else {
        cout << "You choose out of rang is not proces.\n "; 
    }
    }
    return 0;
}

float calCircle(){
    float radius,Area;
        cout << "Enter radiuse :";
        cin >> radius;
        Area = PI * radius * radius;
        cout << "area of cilcle is " << Area << endl;
        return Area;
}
float caltriangle(){
    float base, height,Area;
        cout << "Enter base :";
        cin >> base;
        cout << "Enter height :";
        cin >> height;
        Area = 0.5 * base * height;
        cout << "area of triangle is " << Area << endl;
        return Area;
}

float calRectangle(){
    float height,width,Area;
        cout << "Enter height :";
        cin >> height;
        cout << "Enter width :";
        cin >> width;
        Area = height * width;
        cout << "area of rectangle is " << Area << endl;
        return Area;
}