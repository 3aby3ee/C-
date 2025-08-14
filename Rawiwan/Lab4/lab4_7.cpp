#include <iostream>
#include <string>
using namespace std;

int main() {
int year, maxday;
int num;
string text;
cout << "Enter number : ";
cin >> num;
text = (((year%4)==0)?"is leap year":"is not leap year");
maxday = (((year%4)==0)?29:28);
cout <<"in" << year << text;
cout << "and Febuary has" << maxday << "day.\n"
}