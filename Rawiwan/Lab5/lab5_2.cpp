#include <iostream>
using namespace std;
int main(){
    int score;
    int grade;
    for (int i = 0 ; i < 100; i++){
        score = i;
        grade = ((score - 40)/10);
        cout << score << " " << grade << " ";
        switch (grade){
            case -5: case -4: case -3: case -2: case -1: case -0: 
            case 0: cout << "F" << endl; break;
            case 1: cout << "D" << endl; break;
            case 2: cout << "C" << endl; break;
            case 2: cout << "B" << endl; break;
            case 4: case 5: 
            case 6: cout << "A" << endl; break; 
            default: cout << "Error" << endl;
        }
    }
    return 0;
}