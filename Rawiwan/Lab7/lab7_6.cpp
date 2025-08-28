#include <iostream>

using namespace std;
void ModifyArray(int Temp[]);
void ModifyElement(int Temp);
int main(){
    int Data[] = {1,2,3,4,5};
    cout << "Before" << endl;
    for (int i = 0; i <5; i++){
        cout << Data[i] << " ";
    }
    ModifyArray(Data);
     cout << "After" << endl;
    for (int i = 0; i < 5; i++){
        cout << Data[i] << " ";
    }
    cout << endl;
    cout << "Before" << endl;
    cout << Data[3] << endl;
    ModifyElement(Data[3]);

    return (0);
}
void ModifyArray(int Temp[]){
    for (int j = 0; j < 5; j++){
        Temp[j]*=2;
    }
}
void ModifyElement(int Temp){
    Temp *=2;
}