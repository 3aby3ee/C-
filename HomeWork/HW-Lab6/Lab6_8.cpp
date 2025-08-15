#include <iostream>
using namespace std;

int main() {
    int lines;
    char symbol;

    cout << "Input number line : ";
    cin >> lines;

    if (lines < 1 || lines > 20) {
        cout << "Error: Line number must be between 1 and 20." << endl;
        return 1;
    }

    cout << "Input character : ";
    cin >> symbol;

    for (int i = 1; i <= lines; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}
