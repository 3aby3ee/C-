#include <iostream>
using namespace std;

void doprocess1();
void deprocess2();

int main()
{
    doprocess1();
    return 0;
}

void doprocess1()
{
    int i;
    for (i = 0; i <=5; i++){
        cout << i << " ";
    }
    cout << endl;
    cout << "out:" << i << endl;
}
void doprocess2()
{
    int i;
    for (i = 5; i >=0; i--){
        cout << i << " ";
    }
    cout << endl;
    cout << "out:" << i << endl;
}