//น.ส.รวิวรรณ เชียงดา 6806021412089 ITI.1 Sec.3
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{
    int Data[15];
    srand(time(0)); // init random value
    for (int i = 0; i < 15; i++){
        Data[i] = rand() % 25+ 1; // randdom between 0-32767
        // 1 - 30 0-29
        //  5 - 15 0 - 10 11+5
    }
    for (int i = 0; i < 15; i++)
    {
        cout << i << " " << Data[i] << "\n";
    }
    cout << endl;
    cout << "Element Value Histogram" << endl << endl;
    for (int i = 0; i < 25; i++){
        cout << setw(2) << 25-i;
      for(int j=0; j<15; j++){
        if(Data[j] >= 25 - i){
            cout << setw(3) << " *";
        }
        else{
            cout << setw(3) << " ";
        }
        
      }
      cout << endl;
    }
    cout << setw(2) << " ";
    for(int i=0; i < 15; i++){
        cout << setw(3) << Data[i];
    }
    cout << endl;
    return (0);
}