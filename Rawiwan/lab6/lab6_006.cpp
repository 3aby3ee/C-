#include <iostream>
using namespace std;
int main (){
    for (int i = 0; i < 5; i++){
        cout << i << " ";
    }
    cout << endl;

    for (int i = 4; i >= 0; i--){
        cout << i << " ";
    }
    cout << endl;



    //แปล for เป็น while
    int i =0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    //แปล for เป็น while
    int i = 4;
    while ( >= 0){
        cout << i << " ";
        i--;
    }
    cout << endl;
    return 0;
}