#include <iostream>
using namespace std;
int main(){
    cout << "Please enter a simple expression\n";
    cout << "(number operator number):";
    int LeftOperand, RightOperand;
    char Operator;
    cin >> LeftOperand >> Operator >> RightOperand;
    int Result;
    switch (Operator){
        case '+': Result = LeftOperand + RightOperand; break;
        case '-': Result = LeftOperand - RightOperand; break;
        case '*': Result = LeftOperand * RightOperand; break;
        case '/': Result = LeftOperand / RightOperand; break;
        default: cout << Operator << " is unrecognized operator" << endl;
                return 1;
    }
    cout << LeftOperand << " " << Operator << " "
         << RightOperand << " = " << Result << endl;
    return 0;
}