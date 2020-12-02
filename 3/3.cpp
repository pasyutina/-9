#include <iostream>
#include <ctype.h>

using namespace std;

void main(void)
{
	setlocale(0, "");
	char buffer[1024]; 
	char Result[1024] = { 0 }; 
	cout << "Введите строку на английском без пробелов: ";
	cin >> buffer;
	char* ptr = Result; 
	for (int i = 0; i < strlen(buffer); i++) 
	{
		if (!isdigit((unsigned char)buffer[i])) 
			*ptr++ = buffer[i]; 
	}
	cout << endl << "Результат: " << Result;

}