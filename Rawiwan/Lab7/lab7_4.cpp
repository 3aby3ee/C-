#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    const int Array_Size = 10;
    int Sum = 0;
    for (int i = 0; i < Array_Size; i++){
        Sum = Sum +A[i];
        cout << i << ":"<< A[i] << " " << Sum  << endl;
    }
    cout << "Total of Array elements : " << Sum << endl;
    
    return (0);
}