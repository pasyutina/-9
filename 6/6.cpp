#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    setlocale(0, "");
    string s;
    cout << "Введите строку из латинских букв: " << endl;
    cin >> s;
    string s0;
    cout << "Введите вторую строку из латинских букв: " << endl;
    cin >> s0;
    int count = 0;

    for (string::size_type i = 0; i < s.length(); i++)
        if (s[i] == s0[0])
            if (s.substr(i, s0.length()) == s0)
            {
                count++;
                i += s0.length() - 1;
            }

    cout << count;
    return 0;
}