#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int glas(string s) 
{
    char gl[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y'}; 
    int u = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        for (int j = 0; j < 10; j++)
        { 
            if (s[i] == gl[j]) 
            {
                u++;
            }
        }
    }
    return u + 1 / 3;
}

int main() 
{
    setlocale(0, "");
    cout << "введите строку = ";
    string s;
    cin >> s;
    cout << "гласных букв = " << glas(s);
    _getch();
}