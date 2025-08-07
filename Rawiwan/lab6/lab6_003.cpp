#include <iostream>
using namespace std;
int main(){
    int Num;
    cout << "Enter Number : ";
    cin >> Num;
    int Sum = 0;
    int Value;
    for (int i = 1; i <= Num; i++){
        cout << "Enter integer value (" <<  i <<"):";
        cin >> Value;
        Sum = Sum + Value;
    }
    cout << "\nSummation of integer " << Num;
    cout << "value = " << Sum << endl;
    return 0;
}