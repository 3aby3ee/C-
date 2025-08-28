#include <iostream>
using namespace std;
int Num1;
int Num2;
int main(){
    cout << "Enter First Number :" ;
    cin >> Num1;
    cout << "\n Enter Second Number :" ;
    cin >> Num2;
    cout << "Total Sum : " << Num1 + Num2 << endl;
    cout << "Total Neg : " << Num1 - Num2 << endl;
    cout << "Total : " << Num1 * Num2 << endl;
    cout << "Total : " << Num1 / Num2 << endl;
    return 0;
    
}