#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	setlocale(0, "");
	const size_t N = 80;
	char sent[N];
	const size_t M = 20;
	char word[M];
	cout << "Введите строку: " << endl;
	cin.getline(sent, sizeof(sent));

	cout << "Введите искомый элемент " << endl;
	cin.getline(word, sizeof(word));

	size_t n = 0;
	size_t len = strlen(word);

	for (const char* src = sent;
		(src = strstr(src, word)) != nullptr;
		src += len)
	{
		n++;
	}
	cout << "Искомый элемент встречается " << n << " раз(a)." << endl;
	return 0;
}