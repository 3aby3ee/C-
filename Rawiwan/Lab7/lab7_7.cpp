#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void ReadData(float Temp[]);
void CalculateData(const float Temp[], float &Mean, float &St_Dev);
const int MAX_ITEM = 5;

int main(){
    float X[MAX_ITEM], Mean, St_Dev;
    int i;
    ReadData(X);
    for (int i = 0; i < MAX_ITEM; i++){
        cout << X[i] << " ";
    }
    cout << endl;
    CalculateData(X, Mean, St_Dev);
    cout << "THe Mean is ";
    cout << setw(7) << fixed << setprecision(2) << Mean << endl;
    cout << "The standrad deviation is " << setw(7) << St_Dev << endl;
    cout << "Table of difference between data values and mean\n";
    cout << "Index        Item          Difference\n";
    cout << "-------------------------------------\n";
    for( i = 0; i < MAX_ITEM ; i++) {
    cout << setw(3) << i            << " ";
         << setw(10) << X[i]        << " ";
         << setw(10) << X[i]-Mean   << endl;
    }
    return (0);
}

void ReadData(float Temp[]){
    cout << "Enter " << MAX_ITEM
         << "number separated by blanks or <enter>: \n";
    for (int i = 0; i < MAX_ITEM; i++){
    cin >> Temp[i];
    }
    cout << endl;
}
void CalculateData(const float Temp[], float &Mean, float &St_Dev){
    float Sum, Sum_sqr;
    Sum = Sum_sqr = 0;
    for (int i=0; i<MAX_ITEM; i++){
        Sum += Temp[i];
    }
    Mean = Sum/MAX_ITEM;
    for (int i = 0; i < MAX_ITEM; i++){
        Sum_sqr += pow(Temp[i] - Mean,2);
    }
    St_Dev = sqrt(Sum_sqr/(MAX_ITEM-1));
}