#include <iostream>
#include <string> 
using namespace std;

int main()
{
    setlocale(0, "");
    const int n = 12;
    char a[n] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string str;
    int k;
    cout << "Введите строку из латинских букв: " << endl;
    cin >> str;
    k = 0;
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i] == a[j])
                k++;
        }
    }
    if (k)
        cout << "Количество гласных букв: " << k << endl;
    else
        cout << "Гласных букв не найдено!" << endl;
    cin.get();
    return 0;
}