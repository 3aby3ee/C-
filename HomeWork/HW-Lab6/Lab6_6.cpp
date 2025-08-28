#include <iostream>
using namespace std;

float doprocess1(int);
float doprocess2(int);
float doprocess3(int);
float doprocess4(int);

int main()
{
    int ListSize = 5;
    cout << "Please Enter " << ListSize << " numbers:" << endl;

    float Average = doprocess1(ListSize);  // สามารถเปลี่ยนเป็น doprocess2,3,4 ได้
    cout << "Average : " << Average << endl;

    return 0;
}

float doprocess1(int ListSize)
{
    float ValueSum = 0.0f;
    int ValueProcess = 0;

    while (ValueProcess < ListSize)
    {
        float Value;
        cout << "Value Process [" << ValueProcess + 1 << "]: ";
        cin >> Value;
        ValueSum += Value;
        ++ValueProcess;
    }

    cout << "ValueSum = " << ValueSum << endl;
    cout << "Total Values Processed = " << ValueProcess << endl;

    float Average = ValueSum / ListSize;
    return Average;
}

float doprocess2(int ListSize)
{
    float ValueSum = 0.0f;
    int ValueProcess = ListSize;

    while (ValueProcess > 0)
    {
        float Value;
        cout << "Value Process [" << ListSize - ValueProcess + 1 << "]: ";
        cin >> Value;
        ValueSum += Value;
        --ValueProcess;
    }

    float Average = ValueSum / ListSize;
    return Average;
}

float doprocess3(int ListSize)
{
    float ValueSum = 0.0f;

    for (int ValueProcess = 0; ValueProcess < ListSize; ++ValueProcess)
    {
        float Value;
        cout << "Value Process [" << ValueProcess + 1 << "]: ";
        cin >> Value;
        ValueSum += Value;
    }

    float Average = ValueSum / ListSize;
    return Average;
}

float doprocess4(int ListSize)
{
    float ValueSum = 0.0f;

    for (int ValueProcess = ListSize; ValueProcess > 0; --ValueProcess)
    {
        float Value;
        cout << "Value Process [" << ListSize - ValueProcess + 1 << "]: ";
        cin >> Value;
        ValueSum += Value;
    }

    float Average = ValueSum / ListSize;
    return Average;
}
