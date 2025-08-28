#include <iostream>
using namespace std;
int main(){
    int long A[5];
    int B[5] = {3,4,5,6,7};
    char C[] = {'1','2',65,44,'3'};
    char D[] = "Hello";
    int arr_size = 0;

    cout << sizeof(A) << endl;
    cout << sizeof(long long) << endl;
/*
    arr_size = sizeof(A)/sizeof(long long);
    cout << arr_size << endl;
    for(int i = 0; i < 5; i++){
        A[i] = i*10;
    }

    /*for(int i =0; i < arr_size ; i++){
        A[i] = 0;
    }*/
    D[4] = 'a';   
    int index = 0;
    for(char data: D){
        cout << index <<":"<< data << endl;
        index++;
    }



   /* A[8] = 130;
    A[9] = 88;
    for(int i =0; i < 10 ; i++){
        cout << A[i] << " ";
    };
    
    cout << endl;*/


    int* pointer = B;
    cout << pointer << " " << *pointer << endl;
    cout << B[0] << endl;

    pointer =&B[1];
    cout << pointer << " " << *pointer << endl;
    cout << B[1] << endl;

    
    return (0);
}