#include <iostream>
using namespace std;
int main(){
    int mark;
    cout <<"Enter mark :";
    cin >> mark;
    cout<< "Your score = ";
   if (mark >= 50){
        cout << "Passed";
   }else{
    cout << "Failed";
   }
   return 0;
}
