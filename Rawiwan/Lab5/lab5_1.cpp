#include <iostream>
using namespace std;
int main(){
        char choice;
    cout << "Select Color Code R/W/B/G:";

    cin >> choice;
    switch (choice){
    case 'R':
        cout << "RED";
        break;
    case 'W':
        cout << "WHITE";
        break;
    case 'B':
        cout << "BLUE";
        break;
    case 'G':
        cout << "GREEN";
        break;
    default:
        cout << "I don't know.";
    }
    return 0;
}
