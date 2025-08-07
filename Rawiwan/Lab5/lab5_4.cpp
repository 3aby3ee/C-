#include <iostream>
using namespace std;
int main(){
    cout << "Please enter a simple expression\n";
    cout << "(number operator number):";
    int LeftOperand, RightOperand;
    char Operator;
    cin >> LeftOperand >> Operator >> RightOperand;
    int Result;
    if (Operator == '+')Result = LeftOperand + RightOperand;
    else if (Operator == '-')Result = LeftOperand - RightOperand;
    else if (Operator == '*')Result = LeftOperand * RightOperand;
    else if (Operator == '/')Result = LeftOperand / RightOperand;
    else
    //if (Operator!='+' && Operator!= '-' && Operator!= '*' && Operator!= '/'){
    cout << LeftOperand << " " << Operator << " "
         << RightOperand << " = " << Result << endl;
    return 0;
    }
}