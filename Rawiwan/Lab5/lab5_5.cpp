#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a charecter : ";
    cin >> ch;
    cout << endl;
    if(ch>= 'a' && ch <= 'z')
        cout << ch << " is lower charecter ";
    else if(ch>= 'A' && ch <= 'Z')
        cout << ch << " is upper charecter ";
    else if(ch>= '0' && ch <= '9')
        cout << ch << " is numeric charecter ";
    else cout << ch << " is special charecter ";
    
    cout << endl;
    return 0;
}