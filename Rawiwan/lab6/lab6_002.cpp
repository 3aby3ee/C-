#include <iostream>
#include <string>
using namespace std;
void deprocess1(string, int);
void deprocess1(string, int);
int main(){
    int Number;
    string Name;
    cout << "Enter String : ";
    cin >> Name;
    cout << "Enter Number : ";
    cin >> Number;
    deprocess1(Name, Number);
    cout << endl;
    deprocess2(Name, Number);
    cout << endl;
    return 0;
}
void deprocess1(string Name, int Number){
    for (int n = 1 <= Number; n++){
        cout << n << ":"; << Name << endl;
    }
    cout << endl;
}
void deprocess2(string Name, int Number){
    for (int n = 1 <= Number; n++){
        cout << n << ":"; << Name << endl;
    }
    cout << endl;
}