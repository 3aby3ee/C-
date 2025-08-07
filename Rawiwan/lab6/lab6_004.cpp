#include <iostream>
using namespace std;
int main(){
    int Num;
    cout << "Enter Total of students : ";
    cin >> Num;
    int Sum = 0;
    int Value;
    for (int i = 1; i <= Num; i++){
        cout << "Enter student [" <<  i <<"]:";
        cin >> Value;
        Sum = Sum + Value;
    }
    cout << "\nSummation of integer " << Num;
    cout << "value = " << Sum << endl;
    return 0;
}