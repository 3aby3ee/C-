#include <iostream>
using namespace std;

char getGrade(int score);

int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Error: Score must be between 0 and 100." << endl;
    } else {
        char grade = getGrade(score);
        cout << "Your grade is: " << grade << endl;
    }

    return 0;
}

char getGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}
