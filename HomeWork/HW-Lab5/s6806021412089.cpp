//s6806021412089 นางสาวรวิวรรณ เชียงดา
#include <iostream>
using namespace std;

int main()
{
    char Ch;
    int count_Num = 0;
    int count_Space = 0;
    int count_Upper = 0;
    int count_Lower = 0;
    int count_Symbol = 0;
    int count_dot = 0;
    int count_Other = 0;
    int Total = 0;

    cout << "Enter Text:";

    while ((Ch = cin.get()) != '\n')
    {
        Total++;

        if (Ch >= '0' && Ch <= '9')
            count_Num++;
        else if (Ch == ' ' || Ch == '\t')
            count_Space++;
        else if (Ch >= 'A' && Ch <= 'z')
            count_Upper++;
        else if (Ch >= 'a' && Ch <= 'Z')
            count_Lower++;
        else if (Ch == '()' || Ch == '+' || Ch == '-' || Ch == '*' || Ch == '/' || Ch == '[]')
            count_Symbol++;
        else if (Ch == '.')
            count_dot++;
        else
            count_Other++;
    }
    cout << "\n=== Character Count ===" << endl;
    cout << "Number (0-9): " << count_Num << endl;
    cout << "Spaces: " << count_Space << endl;
    cout << "Uppercase letters (A-Z): " << count_Upper << endl;
    cout << "Lowercase letters (a-z): " << count_Lower << endl;
    cout << "Symbols ()+-*/[]: " << count_Symbol << endl;
    cout << "Dots (.): " << count_dot << endl;
    cout << "Other characters: " << count_Other << endl;
    cout << "Total characters: " << Total << endl;

    return 0;
}